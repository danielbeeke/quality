<?php
/**
 * @file
 * q_screenshot.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function q_screenshot_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function q_screenshot_node_info() {
  $items = array(
    'q_screenshot' => array(
      'name' => t('Screenshot'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
