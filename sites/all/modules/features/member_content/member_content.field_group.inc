<?php
/**
 * @file
 * member_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function member_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_company|node|member_profile|form';
  $field_group->group_name = 'group_company';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'member_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bedrijfs gegevens',
    'weight' => '2',
    'children' => array(
      0 => 'field_entiteit',
      1 => 'field_company',
      2 => 'field_comp_address',
      3 => 'field_same_address',
      4 => 'field_comp_phone',
      5 => 'field_comp_mobile',
      6 => 'field_comp_fax',
      7 => 'field_company_logo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-company field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_company|node|member_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invoice_info|node|member_profile|form';
  $field_group->group_name = 'group_invoice_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'member_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Facturatie gegevens',
    'weight' => '3',
    'children' => array(
      0 => 'field_select',
      1 => 'field_invoice_company',
      2 => 'field_invoice_name',
      3 => 'field_invoice_last_name',
      4 => 'field_incoice_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-invoice-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_invoice_info|node|member_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_info|node|member_profile|form';
  $field_group->group_name = 'group_other_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'member_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overige gegevens',
    'weight' => '4',
    'children' => array(
      0 => 'field_email',
      1 => 'field_website',
      2 => 'field_vat_number',
      3 => 'field_iban',
      4 => 'field_bic',
      5 => 'field_branche',
      6 => 'field_specialisatie',
      7 => 'field_extra_special',
      8 => 'field_native_lang',
      9 => 'field_other_lang',
      10 => 'field_certificates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_other_info|node|member_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|node|member_profile|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'member_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Persoonlijke gegevens',
    'weight' => '1',
    'children' => array(
      0 => 'field_name',
      1 => 'field_middle_name',
      2 => 'field_last_name',
      3 => 'field_sex',
      4 => 'field_adress',
      5 => 'field_location',
      6 => 'field_phone',
      7 => 'field_mobile',
      8 => 'field_fax',
      9 => 'field_photo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personal|node|member_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_who_are_you|node|member_profile|form';
  $field_group->group_name = 'group_who_are_you';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'member_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wie ben je',
    'weight' => '5',
    'children' => array(
      0 => 'field_about_you',
      1 => 'field_experience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-who-are-you field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_who_are_you|node|member_profile|form'] = $field_group;

  return $export;
}
