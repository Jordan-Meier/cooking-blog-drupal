<?php
/**
 * @file
 * awards_reviews_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function awards_reviews_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function awards_reviews_content_node_info() {
  $items = array(
    'awards_reviews' => array(
      'name' => t('Awards/Reviews'),
      'base' => 'node_content',
      'description' => t('Post your awards and book reviews.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
