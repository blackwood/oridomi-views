<?php

/**
 * @file
 * oridomi_views.views.inc
 */

/*
 * Implements hook_views_plugins().
 */
function oridomi_views_views_plugins() {
  return array(
    'style' => array(
      'oridomi' => array(
        'title' => t('Oridomi'),
        'help' => t('Displays the view output with oridomi applied.'),
        'help topic' => '',
        'handler' => 'oridomi_views_plugin_style_oridomi',
        'theme' => 'oridomi_views',
        'theme file' => 'oridomi_views.theme.inc',
        'theme path' => drupal_get_path('module', 'oridomi_views') . '/theme',
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'even empty' => FALSE,
      ),
    ),
    'pager' => array(
      'oridomi_views_pager' => array(
        'title' => t('Paged output, parent'),
        'help' => t('Provides a pager for view output.'),
        'help topic' => '',
        'handler' => 'oridomi_views_plugin_pager_oridomi',
        'theme' => 'oridomi_views_pager',
        'theme file' => 'oridomi_views.theme.inc',
        'theme path' => drupal_get_path('module', 'oridomi_views') . '/theme',
        'uses options' => TRUE,
        'parent' => 'full',
      ),
    ),
  );
}
