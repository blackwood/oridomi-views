<?php

/**
 * @file
 * oridomi.variable.inc
 */

/**
 * Implements hook_variable_type_info().
 */
function oridomi_variable_type_info() {
  $type['instance_id'] = array(
    'title' => t('Instance ID'),
    'options callback' => 'oridomi_instance_callback_list',
    'type' => 'select',
  );
  $type['width_items'] = array(
    'title' => t('Browser Items'),
    'multiple' => array('width' => t('Width'), 'items' => t('Items')),
    'build callback' => 'oridomi_variable_build_browser_width',
    'localize' => TRUE,
    'type' => 'multiple',
  );

  return $type;
}

/**
 * Implements hook_variable_group_info().
 */
function oridomi_variable_group_info() {
  $groups['oridomi'] = array(
    'title' => t('OriDomi.js'),
    'description' => t('Define instance settings for each Oridomi instance.'),
    'access' => 'administer oridomi settings',
    'path' => array('admin/config/user-interface/oridomi'),
  );

  return $groups;
}

/**
 * Call to variable information.
 */
module_load_include('inc','oridomi','settings/oridomi_variable.instance');

// @TODO Figure out whether needed or not? Probably not.
/**
 * Variable build callback for browser/items.
 */
function oridomi_variable_build_browser_width($variable, $options = array()) {
  $index = str_replace('[instance_id]', $variable['index'], $variable['parent']);
  $name = str_replace('[itemwidth_part]', '', $index);

  foreach ($variable['multiple'] as $key => $child) {
    $repeat_name = $name . $key;

    $variable['name'] = $repeat_name;
    $variable['children'][$repeat_name]['title'] = $child;
    $variable['children'][$repeat_name]['index'] = $key;
    $variable['children'][$repeat_name]['type'] = 'number';
    $variable['children'][$repeat_name]['default'] = $variable['default'][$key];

    $variable = variable_build_multiple($variable, $options);
  }

  return $variable;
}
