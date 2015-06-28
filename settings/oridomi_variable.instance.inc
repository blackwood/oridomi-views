<?php

/**
 * Implements hook_variable_info().
 */
function oridomi_variable_info($options) {

  $variable['oridomi_v_panels_[instance_id]'] = array(
    'type' => 'multiple',
    'title' => t('vPanels', array(), $options),
    'description' => t('number of panels when folding left or right (vertically oriented)', array(), $options),
    'repeat' => array(
      'type' => 'number',

      'default' => 5,

    ),
    'group' => 'oridomi',
  );

  $variable['oridomi_h_panels_[instance_id]'] = array(
    'type' => 'multiple',
    'title' => t('hPanels', array(), $options),
    'description' => t('number of panels when folding top or bottom', array(), $options),
    'repeat' => array(
      'type' => 'number',

      'default' => 3,

    ),
    'group' => 'oridomi',
  );

  $variable['oridomi_speed_[instance_id]'] = array(
    'type' => 'multiple',
    'title' => t('speed', array(), $options),
    'description' => t('folding duration in ms', array(), $options),
    'repeat' => array(
      'type' => 'number',

      'default' => 1200,

    ),
    'group' => 'oridomi',
  );

  $variable['oridomi_ripple_[instance_id]'] = array(
    'type' => 'multiple',
    'title' => t('ripple', array(), $options),
    'description' => t('backwards ripple effect when animating', array(), $options),
    'repeat' => array(
      'type' => 'number',

      'default' => 2,

    ),
    'group' => 'oridomi',
  );

  $variable['oridomi_shading_intensity_[instance_id]'] = array(
    'type' => 'multiple',
    'title' => t('shadingIntensity', array(), $options),
    'description' => t('lessen the shading effect', array(), $options),
    'repeat' => array(
      'type' => 'number',

      'default' => .5,

    ),
    'group' => 'oridomi',
  );

  $variable['oridomi_perspective_[instance_id]'] = array(
    'type' => 'multiple',
    'title' => t('perspective', array(), $options),
    'description' => t('smaller values exaggerate 3D distortion', array(), $options),
    'repeat' => array(
      'type' => 'number',

      'default' => 800,

    ),
    'group' => 'oridomi',
  );

  $variable['oridomi_max_angle_[instance_id]'] = array(
    'type' => 'multiple',
    'title' => t('maxAngle', array(), $options),
    'description' => t('keep the users folds within a range of -40 to 40 degrees', array(), $options),
    'repeat' => array(
      'type' => 'number',

      'default' => 40,

    ),
    'group' => 'oridomi',
  );

  $variable['oridomi_shading_[instance_id]'] = array(
    'type' => 'multiple',
    'title' => t('shading', array(), $options),
    'description' => t('Change the shading type', array(), $options),
    'repeat' => array(
      'type' => 'string',

      'default' => 'soft',

    ),
    'group' => 'oridomi',
  );

  return $variable;
}