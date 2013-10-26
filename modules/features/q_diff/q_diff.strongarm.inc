<?php
/**
 * @file
 * q_diff.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function q_diff_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_q_diff';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_q_diff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_q_diff';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_q_diff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_q_diff';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_q_diff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_q_diff';
  $strongarm->value = '';
  $export['diff_view_mode_preview_node_q_diff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_q_diff';
  $strongarm->value = array();
  $export['menu_options_q_diff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_q_diff';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_q_diff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_q_diff';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_q_diff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_q_diff';
  $strongarm->value = '1';
  $export['node_preview_q_diff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_q_diff';
  $strongarm->value = 0;
  $export['node_submitted_q_diff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_q_diff';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_q_diff'] = $strongarm;

  return $export;
}
