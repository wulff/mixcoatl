<?php
/**
 * @file
 * mixcoatl_content_group.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mixcoatl_content_group_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_mixcoatl_group';
  $strongarm->value = 0;
  $export['comment_anonymous_mixcoatl_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_mixcoatl_group';
  $strongarm->value = 1;
  $export['comment_default_mode_mixcoatl_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_mixcoatl_group';
  $strongarm->value = '50';
  $export['comment_default_per_page_mixcoatl_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_mixcoatl_group';
  $strongarm->value = 1;
  $export['comment_form_location_mixcoatl_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_mixcoatl_group';
  $strongarm->value = '1';
  $export['comment_mixcoatl_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_mixcoatl_group';
  $strongarm->value = '1';
  $export['comment_preview_mixcoatl_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_mixcoatl_group';
  $strongarm->value = 1;
  $export['comment_subject_field_mixcoatl_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_mixcoatl_group';
  $strongarm->value = '0';
  $export['language_content_type_mixcoatl_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mixcoatl_group';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_mixcoatl_group'] = $strongarm;

  return $export;
}
