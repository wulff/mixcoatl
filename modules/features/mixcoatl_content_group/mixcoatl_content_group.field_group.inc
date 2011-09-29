<?php
/**
 * @file
 * mixcoatl_content_group.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mixcoatl_content_group_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mixcoatl_group_group|node|mixcoatl_group|form';
  $field_group->group_name = 'group_mixcoatl_group_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mixcoatl_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '4',
    'children' => array(
      0 => 'group_group',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Group',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Group settings',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mixcoatl_group_group|node|mixcoatl_group|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mixcoatl_group_map|node|mixcoatl_group|form';
  $field_group->group_name = 'group_mixcoatl_group_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mixcoatl_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_mixcoatl_group_map',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Group location',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mixcoatl_group_map|node|mixcoatl_group|form'] = $field_group;

  return $export;
}
