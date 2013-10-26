<?php
/**
 * @file
 * q_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function q_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function q_site_node_info() {
  $items = array(
    'q_site' => array(
      'name' => t('Site'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
