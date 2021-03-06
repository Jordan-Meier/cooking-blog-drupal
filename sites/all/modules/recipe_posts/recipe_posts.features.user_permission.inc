<?php
/**
 * @file
 * recipe_posts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function recipe_posts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create recipe content'.
  $permissions['create recipe content'] = array(
    'name' => 'create recipe content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any recipe content'.
  $permissions['delete any recipe content'] = array(
    'name' => 'delete any recipe content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own recipe content'.
  $permissions['delete own recipe content'] = array(
    'name' => 'delete own recipe content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any recipe content'.
  $permissions['edit any recipe content'] = array(
    'name' => 'edit any recipe content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own recipe content'.
  $permissions['edit own recipe content'] = array(
    'name' => 'edit own recipe content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
