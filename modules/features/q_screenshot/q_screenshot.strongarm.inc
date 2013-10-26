<?php
/**
 * @file
 * q_screenshot.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function q_screenshot_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_q_screenshot';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_q_screenshot';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_q_screenshot';
  $strongarm->value = '[node:field-q-screenshot-site:title] on [current-date:long]';
  $export['auto_entitylabel_pattern_node_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_q_screenshot';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_q_screenshot';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_q_screenshot';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_q_screenshot';
  $strongarm->value = '';
  $export['diff_view_mode_preview_node_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__q_screenshot';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_q_screenshot';
  $strongarm->value = array();
  $export['menu_options_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_q_screenshot';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_q_screenshot';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_q_screenshot';
  $strongarm->value = '1';
  $export['node_preview_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_q_screenshot';
  $strongarm->value = 0;
  $export['node_submitted_q_screenshot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'phantomjs_capture_binary';
  $strongarm->value = '/home/daniel/sites/quality/build/profiles/quality/libraries/phantomjs/phantomjs';
  $export['phantomjs_capture_binary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'phantomjs_capture_dest';
  $strongarm->value = 'phantomjs';
  $export['phantomjs_capture_dest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'phantomjs_capture_script';
  $strongarm->value = 'profiles/quality/modules/features/q_screenshot/phantomjs.js';
  $export['phantomjs_capture_script'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_q_screenshot';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_q_screenshot'] = $strongarm;

  return $export;
}
