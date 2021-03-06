<?php

/**
 * @file
 * transportpulje_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function transportpulje_form_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function transportpulje_form_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function transportpulje_form_default_entityform_type() {
  $items = array();
  $items['transportpulje_form'] = entity_import('entityform_type', '{
    "type" : "transportpulje_form",
    "label" : "Transportpulje formular",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "editor" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "editor" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "19" : "19", "22" : "22", "1" : 0, "2" : 0, "18" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "admin\\/settings\\/custom\\/transport",
      "instruction_pre" : { "value" : "", "format" : "editor" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
