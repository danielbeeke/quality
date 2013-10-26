<?php
/**
 * @file
 * q_diff.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function q_diff_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create q_diff content'.
  $permissions['create q_diff content'] = array(
    'name' => 'create q_diff content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any q_diff content'.
  $permissions['delete any q_diff content'] = array(
    'name' => 'delete any q_diff content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own q_diff content'.
  $permissions['delete own q_diff content'] = array(
    'name' => 'delete own q_diff content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any q_diff content'.
  $permissions['edit any q_diff content'] = array(
    'name' => 'edit any q_diff content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own q_diff content'.
  $permissions['edit own q_diff content'] = array(
    'name' => 'edit own q_diff content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
