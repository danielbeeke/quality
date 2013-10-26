<?php
/**
 * @file
 * q_site.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function q_site_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create q_site content'.
  $permissions['create q_site content'] = array(
    'name' => 'create q_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any q_site content'.
  $permissions['delete any q_site content'] = array(
    'name' => 'delete any q_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own q_site content'.
  $permissions['delete own q_site content'] = array(
    'name' => 'delete own q_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any q_site content'.
  $permissions['edit any q_site content'] = array(
    'name' => 'edit any q_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own q_site content'.
  $permissions['edit own q_site content'] = array(
    'name' => 'edit own q_site content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
