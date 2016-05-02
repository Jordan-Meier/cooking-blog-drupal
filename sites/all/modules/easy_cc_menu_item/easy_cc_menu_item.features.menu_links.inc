<?php
/**
 * @file
 * easy_cc_menu_item.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function easy_cc_menu_item_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_clear-cache:easy_cc.
  $menu_links['management_clear-cache:easy_cc'] = array(
    'menu_name' => 'management',
    'link_path' => 'easy_cc',
    'router_path' => 'easy_cc',
    'link_title' => 'Clear Cache',
    'options' => array(
      'attributes' => array(
        'title' => 'Easily clear ALL your cache!',
      ),
      'identifier' => 'management_clear-cache:easy_cc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Clear Cache');

  return $menu_links;
}
