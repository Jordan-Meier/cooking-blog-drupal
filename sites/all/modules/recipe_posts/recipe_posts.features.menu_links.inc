<?php
/**
 * @file
 * recipe_posts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function recipe_posts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_recipe:node/add/recipe.
  $menu_links['navigation_recipe:node/add/recipe'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/recipe',
    'router_path' => 'node/add/recipe',
    'link_title' => 'Recipe',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new recipe to the site!',
      ),
      'identifier' => 'navigation_recipe:node/add/recipe',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Recipe');

  return $menu_links;
}
