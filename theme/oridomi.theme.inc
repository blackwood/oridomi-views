<?php

/**
 * @file
 * oridomi.theme.inc
 *
 * Implements theme functions for Oridomi.
 */

/**
 * Default theme implementation for lists
 */
function theme_oridomi_list(&$vars) {
  $items = &$vars['items'];
  $output = '';

  if (!empty($items)) {
    foreach ($items as $i => $item) {
      $output .= theme('oridomi_list_item', array(
        'item' => $item['row'],
        'class' => drupal_html_class('item-' . $i),
      ));
    }
  }

  return $output;
}

/**
 * Default theme implementation for parent's items
 */
function theme_oridomi_list_item(&$vars) {
  return '<div class="' . $vars['class'] . '">' . $vars['item'] . "</div>";
}

/**
 * Template process parent theme.
 */
function template_process_oridomi(&$vars) {
  $instance_id = $vars['settings']['instance'];
  $oridomi_id = $vars['settings']['attributes']['id']['default'];
  $vars['settings']['attributes']['id'] = $oridomi_id;

  oridomi_initiate_instance($instance_id, $oridomi_id);
}
