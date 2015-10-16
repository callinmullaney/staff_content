<?php
/**
 * @file
 * staff_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function staff_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|staff_member|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_member';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Tags',
    'weight' => '1',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_meta_keywords',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_meta|node|staff_member|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff_info|node|staff_member|form';
  $field_group->group_name = 'group_staff_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_member';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_image_asset',
      3 => 'field_bio',
      4 => 'field_email',
      5 => 'field_phone',
      6 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-staff-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_staff_info|node|staff_member|form'] = $field_group;

  return $export;
}
