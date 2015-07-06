<?php
/**
 * @file
 * record_review.features.inc
 */

/**
 * Implements hook_node_info().
 */
function record_review_node_info() {
  $items = array(
    'record_review' => array(
      'name' => t('Record Review'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Record'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
