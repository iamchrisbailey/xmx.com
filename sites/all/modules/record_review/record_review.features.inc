<?php
/**
 * @file
 * record_review.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function record_review_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function record_review_image_default_styles() {
  $styles = array();

  // Exported image style: record_review.
  $styles['record_review'] = array(
    'label' => 'Record Review',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 319,
          'height' => 319,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

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
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
