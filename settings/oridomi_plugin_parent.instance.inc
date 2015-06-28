<?php

/**
 * Return settings array or default.
 *
 * @param string $instance
 *  Parent instance settings machine name.
 */
function _oridomi_return_parent_instance_settings($instance = 'oridomi_settings_default') {
  if ($settings_cache = cache_get('oridomi_' . $instance)) {
    $settings = $settings_cache->data;
  }
  else {
    $function = !module_exists('variable') ? 'variable_get' : 'variable_get_value';

    $settings = array(
      
      
      'vPanels' => (int)$function('oridomi_v_panels_' . $instance),
      
      
      
      'hPanels' => (int)$function('oridomi_h_panels_' . $instance),
      
      
      
      'speed' => (int)$function('oridomi_speed_' . $instance),
      
      
      
      'ripple' => (int)$function('oridomi_ripple_' . $instance),
      
      
      
      'shadingIntensity' => (int)$function('oridomi_shading_intensity_' . $instance),
      
      
      
      'perspective' => (int)$function('oridomi_perspective_' . $instance),
      
      
      
      'maxAngle' => (int)$function('oridomi_max_angle_' . $instance),
      
      
      
      'shading' => $function('oridomi_shading_' . $instance),
      
      
    );

    // Update settings cache.
    cache_set('oridomi_' . $instance, $settings, 'cache');
  }

  return $settings;
}