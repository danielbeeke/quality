<?php
/**
 * @file
 * q_screenshot.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function q_screenshot_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-q_screenshot-field_q_screenshot_images'
  $field_instances['node-q_screenshot-field_q_screenshot_images'] = array(
    'bundle' => 'q_screenshot',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phantomjs_capture_field',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'phantomjs_capture_field_formatter',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'phantomjs_capture_field',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'phantomjs_capture_field_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_q_screenshot_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'file_directory' => 'screenshots',
      'file_type' => 'png',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phantomjs_capture_field',
      'settings' => array(),
      'type' => 'phantomjs_capture_field_widget',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-q_screenshot-field_q_screenshot_site'
  $field_instances['node-q_screenshot-field_q_screenshot_site'] = array(
    'bundle' => 'q_screenshot',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_q_screenshot_site',
    'label' => 'Site',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('Site');

  return $field_instances;
}
