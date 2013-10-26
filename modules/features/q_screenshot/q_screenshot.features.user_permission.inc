<?php
/**
 * @file
 * q_screenshot.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function q_screenshot_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create q_screenshot content'.
  $permissions['create q_screenshot content'] = array(
    'name' => 'create q_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any q_screenshot content'.
  $permissions['delete any q_screenshot content'] = array(
    'name' => 'delete any q_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own q_screenshot content'.
  $permissions['delete own q_screenshot content'] = array(
    'name' => 'delete own q_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any q_screenshot content'.
  $permissions['edit any q_screenshot content'] = array(
    'name' => 'edit any q_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own q_screenshot content'.
  $permissions['edit own q_screenshot content'] = array(
    'name' => 'edit own q_screenshot content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
