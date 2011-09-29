<?php
/**
 * @file
 * mixcoatl_content_area.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mixcoatl_content_area_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mixcoatl_area_group|node|mixcoatl_area|form';
  $field_group->group_name = 'group_mixcoatl_area_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mixcoatl_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groups',
    'weight' => '4',
    'children' => array(
      0 => 'group_audience',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Groups',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Group settings',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mixcoatl_area_group|node|mixcoatl_area|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mixcoatl_area_map|node|mixcoatl_area|form';
  $field_group->group_name = 'group_mixcoatl_area_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mixcoatl_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '2',
    'children' => array(
      0 => 'field_mixcoatl_area_map',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Area location',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mixcoatl_area_map|node|mixcoatl_area|form'] = $field_group;

  return $export;
}
