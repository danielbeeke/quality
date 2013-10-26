<?php
/**
 * @file
 * q_diff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function q_diff_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function q_diff_node_info() {
  $items = array(
    'q_diff' => array(
      'name' => t('Diff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
