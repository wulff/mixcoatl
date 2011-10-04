<?php
/**
 * @file
 * mixcoatl_content_stand.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mixcoatl_content_stand_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_mixcoatl_stand';
  $strongarm->value = 0;
  $export['comment_anonymous_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_mixcoatl_stand';
  $strongarm->value = 1;
  $export['comment_default_mode_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_mixcoatl_stand';
  $strongarm->value = '50';
  $export['comment_default_per_page_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_mixcoatl_stand';
  $strongarm->value = 1;
  $export['comment_form_location_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_mixcoatl_stand';
  $strongarm->value = '1';
  $export['comment_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_mixcoatl_stand';
  $strongarm->value = '1';
  $export['comment_preview_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_mixcoatl_stand';
  $strongarm->value = 1;
  $export['comment_subject_field_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_mixcoatl_stand';
  $strongarm->value = '0';
  $export['language_content_type_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_mixcoatl_stand';
  $strongarm->value = array();
  $export['menu_options_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_mixcoatl_stand';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mixcoatl_stand';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_mixcoatl_stand';
  $strongarm->value = '1';
  $export['node_preview_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_mixcoatl_stand';
  $strongarm->value = 0;
  $export['node_submitted_mixcoatl_stand'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_group_type_mixcoatl_stand';
  $strongarm->value = 'omitted';
  $export['og_group_type_mixcoatl_stand'] = $strongarm;

  return $export;
}
