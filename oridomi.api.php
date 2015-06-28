<?php

/**
 * @file
 * API documentation for Oridomi.
 */

/**
 * Implements hook_oridomi_settings_alter().
 *
 * @param array
 *   Instance settings.
 * @param string
 *   OriDomi.js identifier.
 */
function hook_oridomi_settings_alter(&$settings, $instance) {
  switch ($instance) {
    case 'oridomi_settings_default':
      //
      break;
  }
}
