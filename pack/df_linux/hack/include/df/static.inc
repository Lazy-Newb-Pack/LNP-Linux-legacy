/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#include "abstract_building.h"
#include "activity_entry.h"
#include "army.h"
#include "army_controller.h"
#include "art_image_chunk.h"
#include "artifact_record.h"
#include "body_appearance_modifier.h"
#include "body_detail_plan.h"
#include "body_template.h"
#include "bp_appearance_modifier.h"
#include "building.h"
#include "building_def.h"
#include "burrow.h"
#include "coin_batch.h"
#include "color_modifier_raw.h"
#include "construction.h"
#include "creature_graphics_appointment.h"
#include "creature_interaction_effect.h"
#include "creature_raw.h"
#include "creature_variation.h"
#include "crime.h"
#include "cultural_identity.h"
#include "descriptor_color.h"
#include "descriptor_pattern.h"
#include "descriptor_shape.h"
#include "engraving.h"
#include "entity_population.h"
#include "entity_position.h"
#include "entity_position_assignment.h"
#include "entity_raw.h"
#include "entity_tissue_style.h"
#include "entity_uniform.h"
#include "flow_guide.h"
#include "global_objects.h"
#include "hauling_route.h"
#include "hauling_stop.h"
#include "historical_entity.h"
#include "historical_figure.h"
#include "history_event.h"
#include "history_event_collection.h"
#include "identity.h"
#include "incident.h"
#include "inorganic_raw.h"
#include "interaction.h"
#include "interaction_instance.h"
#include "invasion_info.h"
#include "item.h"
#include "itemdef_ammost.h"
#include "itemdef_armorst.h"
#include "itemdef_foodst.h"
#include "itemdef_glovesst.h"
#include "itemdef_helmst.h"
#include "itemdef_instrumentst.h"
#include "itemdef_pantsst.h"
#include "itemdef_shieldst.h"
#include "itemdef_shoesst.h"
#include "itemdef_siegeammost.h"
#include "itemdef_toolst.h"
#include "itemdef_toyst.h"
#include "itemdef_trapcompst.h"
#include "itemdef_weaponst.h"
#include "job.h"
#include "language_symbol.h"
#include "language_translation.h"
#include "language_word.h"
#include "machine.h"
#include "nemesis_record.h"
#include "plant.h"
#include "plant_raw.h"
#include "projectile.h"
#include "reaction.h"
#include "report.h"
#include "resource_allotment_data.h"
#include "schedule_info.h"
#include "site_realization_building.h"
#include "squad.h"
#include "syndrome.h"
#include "tile_page.h"
#include "tissue.h"
#include "tissue_style_raw.h"
#include "tissue_template.h"
#include "training_assignment.h"
#include "unit.h"
#include "unit_chunk.h"
#include "unit_item_use.h"
#include "unit_syndrome.h"
#include "unit_wound.h"
#include "vehicle.h"
#include "vermin.h"
#include "world_construction.h"
#include "world_geo_biome.h"
#include "world_landmass.h"
#include "world_object_data.h"
#include "world_region.h"
#include "world_site.h"
#include "world_underground_region.h"
#include "written_content.h"
namespace df {
  int abstract_building::binsearch_index(const std::vector<abstract_building*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &abstract_building::id, key, exact);
  }
  int abstract_building::binsearch_index(const std::vector<abstract_building*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int activity_entry::binsearch_index(const std::vector<activity_entry*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &activity_entry::id, key, exact);
  }
  int activity_entry::binsearch_index(const std::vector<activity_entry*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<activity_entry*>& activity_entry::get_vector() {
    return _toref(_toref(df::global::world).activities).all;
  }
  activity_entry *activity_entry::find(key_field_type id_) {
    std::vector<activity_entry*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int army::binsearch_index(const std::vector<army*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &army::id, key, exact);
  }
  int army::binsearch_index(const std::vector<army*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<army*>& army::get_vector() {
    return _toref(_toref(df::global::world).armies).all;
  }
  army *army::find(key_field_type id_) {
    std::vector<army*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int army_controller::binsearch_index(const std::vector<army_controller*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &army_controller::id, key, exact);
  }
  int army_controller::binsearch_index(const std::vector<army_controller*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<army_controller*>& army_controller::get_vector() {
    return _toref(_toref(df::global::world).army_controllers).all;
  }
  army_controller *army_controller::find(key_field_type id_) {
    std::vector<army_controller*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int art_image_chunk::binsearch_index(const std::vector<art_image_chunk*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &art_image_chunk::id, key, exact);
  }
  int art_image_chunk::binsearch_index(const std::vector<art_image_chunk*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<art_image_chunk*>& art_image_chunk::get_vector() {
    return _toref(df::global::world).art_image_chunks;
  }
  art_image_chunk *art_image_chunk::find(key_field_type id_) {
    std::vector<art_image_chunk*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int artifact_record::binsearch_index(const std::vector<artifact_record*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &artifact_record::id, key, exact);
  }
  int artifact_record::binsearch_index(const std::vector<artifact_record*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<artifact_record*>& artifact_record::get_vector() {
    return _toref(_toref(df::global::world).artifacts).all;
  }
  artifact_record *artifact_record::find(key_field_type id_) {
    std::vector<artifact_record*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int body_appearance_modifier::binsearch_index(const std::vector<body_appearance_modifier*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &body_appearance_modifier::id, key, exact);
  }
  int body_appearance_modifier::binsearch_index(const std::vector<body_appearance_modifier*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<body_detail_plan*>& body_detail_plan::get_vector() {
    return _toref(_toref(df::global::world).raws).body_detail_plans;
  }
  body_detail_plan *body_detail_plan::find(int id_) {
    std::vector<body_detail_plan*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<body_template*>& body_template::get_vector() {
    return _toref(_toref(df::global::world).raws).body_templates;
  }
  body_template *body_template::find(int id_) {
    std::vector<body_template*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int bp_appearance_modifier::binsearch_index(const std::vector<bp_appearance_modifier*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &bp_appearance_modifier::id, key, exact);
  }
  int bp_appearance_modifier::binsearch_index(const std::vector<bp_appearance_modifier*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int building::binsearch_index(const std::vector<building*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &building::id, key, exact);
  }
  int building::binsearch_index(const std::vector<building*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<building*>& building::get_vector() {
    return _toref(_toref(df::global::world).buildings).all;
  }
  building *building::find(key_field_type id_) {
    std::vector<building*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int building_def::binsearch_index(const std::vector<building_def*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &building_def::id, key, exact);
  }
  int building_def::binsearch_index(const std::vector<building_def*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<building_def*>& building_def::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).buildings).all;
  }
  building_def *building_def::find(key_field_type id_) {
    std::vector<building_def*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int burrow::binsearch_index(const std::vector<burrow*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &burrow::id, key, exact);
  }
  int burrow::binsearch_index(const std::vector<burrow*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<burrow*>& burrow::get_vector() {
    return _toref(_toref(df::global::ui).burrows).list;
  }
  burrow *burrow::find(key_field_type id_) {
    std::vector<burrow*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<coin_batch*>& coin_batch::get_vector() {
    return _toref(df::global::world).coin_batches;
  }
  coin_batch *coin_batch::find(int id_) {
    std::vector<coin_batch*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int color_modifier_raw::binsearch_index(const std::vector<color_modifier_raw*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &color_modifier_raw::id, key, exact);
  }
  int color_modifier_raw::binsearch_index(const std::vector<color_modifier_raw*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int construction::binsearch_index(const std::vector<construction*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &construction::pos, key, exact);
  }
  int construction::binsearch_index(const std::vector<construction*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->pos, exact);
  }
  std::vector<construction*>& construction::get_vector() {
    return _toref(df::global::world).constructions;
  }
  construction *construction::find(key_field_type id_) {
    std::vector<construction*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int creature_graphics_appointment::binsearch_index(const std::vector<creature_graphics_appointment*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &creature_graphics_appointment::token, key, exact);
  }
  int creature_graphics_appointment::binsearch_index(const std::vector<creature_graphics_appointment*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->token, exact);
  }
  std::vector<creature_interaction_effect*>& creature_interaction_effect::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).effects).all;
  }
  creature_interaction_effect *creature_interaction_effect::find(int id_) {
    std::vector<creature_interaction_effect*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<creature_raw*>& creature_raw::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).creatures).all;
  }
  creature_raw *creature_raw::find(int id_) {
    std::vector<creature_raw*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<creature_variation*>& creature_variation::get_vector() {
    return _toref(_toref(df::global::world).raws).creature_variations;
  }
  creature_variation *creature_variation::find(int id_) {
    std::vector<creature_variation*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int crime::binsearch_index(const std::vector<crime*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &crime::id, key, exact);
  }
  int crime::binsearch_index(const std::vector<crime*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<crime*>& crime::get_vector() {
    return _toref(_toref(df::global::world).crimes).all;
  }
  crime *crime::find(key_field_type id_) {
    std::vector<crime*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int cultural_identity::binsearch_index(const std::vector<cultural_identity*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &cultural_identity::id, key, exact);
  }
  int cultural_identity::binsearch_index(const std::vector<cultural_identity*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<cultural_identity*>& cultural_identity::get_vector() {
    return _toref(_toref(df::global::world).cultural_identities).all;
  }
  cultural_identity *cultural_identity::find(key_field_type id_) {
    std::vector<cultural_identity*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<descriptor_color*>& descriptor_color::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).language).colors;
  }
  descriptor_color *descriptor_color::find(int id_) {
    std::vector<descriptor_color*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<descriptor_pattern*>& descriptor_pattern::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).language).patterns;
  }
  descriptor_pattern *descriptor_pattern::find(int id_) {
    std::vector<descriptor_pattern*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<descriptor_shape*>& descriptor_shape::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).language).shapes;
  }
  descriptor_shape *descriptor_shape::find(int id_) {
    std::vector<descriptor_shape*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<engraving*>& engraving::get_vector() {
    return _toref(df::global::world).engravings;
  }
  engraving *engraving::find(int id_) {
    std::vector<engraving*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int entity_population::binsearch_index(const std::vector<entity_population*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &entity_population::id, key, exact);
  }
  int entity_population::binsearch_index(const std::vector<entity_population*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<entity_population*>& entity_population::get_vector() {
    return _toref(df::global::world).entity_populations;
  }
  entity_population *entity_population::find(key_field_type id_) {
    std::vector<entity_population*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int entity_position::binsearch_index(const std::vector<entity_position*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &entity_position::id, key, exact);
  }
  int entity_position::binsearch_index(const std::vector<entity_position*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int entity_position_assignment::binsearch_index(const std::vector<entity_position_assignment*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &entity_position_assignment::id, key, exact);
  }
  int entity_position_assignment::binsearch_index(const std::vector<entity_position_assignment*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<entity_raw*>& entity_raw::get_vector() {
    return _toref(_toref(df::global::world).raws).entities;
  }
  entity_raw *entity_raw::find(int id_) {
    std::vector<entity_raw*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int entity_tissue_style::binsearch_index(const std::vector<entity_tissue_style*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &entity_tissue_style::id, key, exact);
  }
  int entity_tissue_style::binsearch_index(const std::vector<entity_tissue_style*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int entity_uniform::binsearch_index(const std::vector<entity_uniform*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &entity_uniform::id, key, exact);
  }
  int entity_uniform::binsearch_index(const std::vector<entity_uniform*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int flow_guide::binsearch_index(const std::vector<flow_guide*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &flow_guide::id, key, exact);
  }
  int flow_guide::binsearch_index(const std::vector<flow_guide*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<flow_guide*>& flow_guide::get_vector() {
    return _toref(_toref(df::global::world).flow_guides).all;
  }
  flow_guide *flow_guide::find(key_field_type id_) {
    std::vector<flow_guide*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int hauling_route::binsearch_index(const std::vector<hauling_route*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &hauling_route::id, key, exact);
  }
  int hauling_route::binsearch_index(const std::vector<hauling_route*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<hauling_route*>& hauling_route::get_vector() {
    return _toref(_toref(df::global::ui).hauling).routes;
  }
  hauling_route *hauling_route::find(key_field_type id_) {
    std::vector<hauling_route*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int hauling_stop::binsearch_index(const std::vector<hauling_stop*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &hauling_stop::id, key, exact);
  }
  int hauling_stop::binsearch_index(const std::vector<hauling_stop*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int historical_entity::binsearch_index(const std::vector<historical_entity*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &historical_entity::id, key, exact);
  }
  int historical_entity::binsearch_index(const std::vector<historical_entity*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<historical_entity*>& historical_entity::get_vector() {
    return _toref(_toref(df::global::world).entities).all;
  }
  historical_entity *historical_entity::find(key_field_type id_) {
    std::vector<historical_entity*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int historical_figure::binsearch_index(const std::vector<historical_figure*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &historical_figure::id, key, exact);
  }
  int historical_figure::binsearch_index(const std::vector<historical_figure*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<historical_figure*>& historical_figure::get_vector() {
    return _toref(_toref(df::global::world).history).figures;
  }
  historical_figure *historical_figure::find(key_field_type id_) {
    std::vector<historical_figure*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int history_event::binsearch_index(const std::vector<history_event*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &history_event::id, key, exact);
  }
  int history_event::binsearch_index(const std::vector<history_event*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<history_event*>& history_event::get_vector() {
    return _toref(_toref(df::global::world).history).events;
  }
  history_event *history_event::find(key_field_type id_) {
    std::vector<history_event*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int history_event_collection::binsearch_index(const std::vector<history_event_collection*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &history_event_collection::id, key, exact);
  }
  int history_event_collection::binsearch_index(const std::vector<history_event_collection*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<history_event_collection*>& history_event_collection::get_vector() {
    return _toref(_toref(_toref(df::global::world).history).event_collections).all;
  }
  history_event_collection *history_event_collection::find(key_field_type id_) {
    std::vector<history_event_collection*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int identity::binsearch_index(const std::vector<identity*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &identity::id, key, exact);
  }
  int identity::binsearch_index(const std::vector<identity*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<identity*>& identity::get_vector() {
    return _toref(_toref(df::global::world).identities).all;
  }
  identity *identity::find(key_field_type id_) {
    std::vector<identity*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int incident::binsearch_index(const std::vector<incident*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &incident::id, key, exact);
  }
  int incident::binsearch_index(const std::vector<incident*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<incident*>& incident::get_vector() {
    return _toref(_toref(df::global::world).incidents).all;
  }
  incident *incident::find(key_field_type id_) {
    std::vector<incident*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<inorganic_raw*>& inorganic_raw::get_vector() {
    return _toref(_toref(df::global::world).raws).inorganics;
  }
  inorganic_raw *inorganic_raw::find(int id_) {
    std::vector<inorganic_raw*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int interaction::binsearch_index(const std::vector<interaction*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &interaction::id, key, exact);
  }
  int interaction::binsearch_index(const std::vector<interaction*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<interaction*>& interaction::get_vector() {
    return _toref(_toref(df::global::world).raws).interactions;
  }
  interaction *interaction::find(key_field_type id_) {
    std::vector<interaction*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int interaction_instance::binsearch_index(const std::vector<interaction_instance*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &interaction_instance::id, key, exact);
  }
  int interaction_instance::binsearch_index(const std::vector<interaction_instance*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<interaction_instance*>& interaction_instance::get_vector() {
    return _toref(_toref(df::global::world).interaction_instances).all;
  }
  interaction_instance *interaction_instance::find(key_field_type id_) {
    std::vector<interaction_instance*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int invasion_info::binsearch_index(const std::vector<invasion_info*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &invasion_info::id, key, exact);
  }
  int invasion_info::binsearch_index(const std::vector<invasion_info*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<invasion_info*>& invasion_info::get_vector() {
    return _toref(_toref(df::global::ui).invasions).list;
  }
  invasion_info *invasion_info::find(key_field_type id_) {
    std::vector<invasion_info*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int item::binsearch_index(const std::vector<item*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &item::id, key, exact);
  }
  int item::binsearch_index(const std::vector<item*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<item*>& item::get_vector() {
    return _toref(_toref(df::global::world).items).all;
  }
  item *item::find(key_field_type id_) {
    std::vector<item*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<itemdef_ammost*>& itemdef_ammost::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).ammo;
  }
  itemdef_ammost *itemdef_ammost::find(int id_) {
    std::vector<itemdef_ammost*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_armorst*>& itemdef_armorst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).armor;
  }
  itemdef_armorst *itemdef_armorst::find(int id_) {
    std::vector<itemdef_armorst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_foodst*>& itemdef_foodst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).food;
  }
  itemdef_foodst *itemdef_foodst::find(int id_) {
    std::vector<itemdef_foodst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_glovesst*>& itemdef_glovesst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).gloves;
  }
  itemdef_glovesst *itemdef_glovesst::find(int id_) {
    std::vector<itemdef_glovesst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_helmst*>& itemdef_helmst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).helms;
  }
  itemdef_helmst *itemdef_helmst::find(int id_) {
    std::vector<itemdef_helmst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_instrumentst*>& itemdef_instrumentst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).instruments;
  }
  itemdef_instrumentst *itemdef_instrumentst::find(int id_) {
    std::vector<itemdef_instrumentst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_pantsst*>& itemdef_pantsst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).pants;
  }
  itemdef_pantsst *itemdef_pantsst::find(int id_) {
    std::vector<itemdef_pantsst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_shieldst*>& itemdef_shieldst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).shields;
  }
  itemdef_shieldst *itemdef_shieldst::find(int id_) {
    std::vector<itemdef_shieldst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_shoesst*>& itemdef_shoesst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).shoes;
  }
  itemdef_shoesst *itemdef_shoesst::find(int id_) {
    std::vector<itemdef_shoesst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_siegeammost*>& itemdef_siegeammost::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).siege_ammo;
  }
  itemdef_siegeammost *itemdef_siegeammost::find(int id_) {
    std::vector<itemdef_siegeammost*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_toolst*>& itemdef_toolst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).tools;
  }
  itemdef_toolst *itemdef_toolst::find(int id_) {
    std::vector<itemdef_toolst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_toyst*>& itemdef_toyst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).toys;
  }
  itemdef_toyst *itemdef_toyst::find(int id_) {
    std::vector<itemdef_toyst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_trapcompst*>& itemdef_trapcompst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).trapcomps;
  }
  itemdef_trapcompst *itemdef_trapcompst::find(int id_) {
    std::vector<itemdef_trapcompst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<itemdef_weaponst*>& itemdef_weaponst::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).itemdefs).weapons;
  }
  itemdef_weaponst *itemdef_weaponst::find(int id_) {
    std::vector<itemdef_weaponst*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int job::binsearch_index(const std::vector<job*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &job::id, key, exact);
  }
  int job::binsearch_index(const std::vector<job*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<language_symbol*>& language_symbol::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).language).symbols;
  }
  language_symbol *language_symbol::find(int id_) {
    std::vector<language_symbol*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<language_translation*>& language_translation::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).language).translations;
  }
  language_translation *language_translation::find(int id_) {
    std::vector<language_translation*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<language_word*>& language_word::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).language).words;
  }
  language_word *language_word::find(int id_) {
    std::vector<language_word*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int machine::binsearch_index(const std::vector<machine*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &machine::id, key, exact);
  }
  int machine::binsearch_index(const std::vector<machine*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<machine*>& machine::get_vector() {
    return _toref(_toref(df::global::world).machines).all;
  }
  machine *machine::find(key_field_type id_) {
    std::vector<machine*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int nemesis_record::binsearch_index(const std::vector<nemesis_record*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &nemesis_record::id, key, exact);
  }
  int nemesis_record::binsearch_index(const std::vector<nemesis_record*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<nemesis_record*>& nemesis_record::get_vector() {
    return _toref(_toref(df::global::world).nemesis).all;
  }
  nemesis_record *nemesis_record::find(key_field_type id_) {
    std::vector<nemesis_record*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<plant*>& plant::get_vector() {
    return _toref(_toref(df::global::world).plants).all;
  }
  plant *plant::find(int id_) {
    std::vector<plant*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<plant_raw*>& plant_raw::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).plants).all;
  }
  plant_raw *plant_raw::find(int id_) {
    std::vector<plant_raw*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int projectile::binsearch_index(const std::vector<projectile*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &projectile::id, key, exact);
  }
  int projectile::binsearch_index(const std::vector<projectile*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<reaction*>& reaction::get_vector() {
    return _toref(_toref(df::global::world).raws).reactions;
  }
  reaction *reaction::find(int id_) {
    std::vector<reaction*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int report::binsearch_index(const std::vector<report*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &report::id, key, exact);
  }
  int report::binsearch_index(const std::vector<report*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<report*>& report::get_vector() {
    return _toref(_toref(df::global::world).status).reports;
  }
  report *report::find(key_field_type id_) {
    std::vector<report*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<resource_allotment_data*>& resource_allotment_data::get_vector() {
    return _toref(_toref(df::global::world).world_data).resource_allotments;
  }
  resource_allotment_data *resource_allotment_data::find(int id_) {
    std::vector<resource_allotment_data*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int schedule_info::binsearch_index(const std::vector<schedule_info*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &schedule_info::id, key, exact);
  }
  int schedule_info::binsearch_index(const std::vector<schedule_info*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<schedule_info*>& schedule_info::get_vector() {
    return _toref(_toref(df::global::world).schedules).all;
  }
  schedule_info *schedule_info::find(key_field_type id_) {
    std::vector<schedule_info*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int site_realization_building::binsearch_index(const std::vector<site_realization_building*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &site_realization_building::id, key, exact);
  }
  int site_realization_building::binsearch_index(const std::vector<site_realization_building*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int squad::binsearch_index(const std::vector<squad*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &squad::id, key, exact);
  }
  int squad::binsearch_index(const std::vector<squad*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<squad*>& squad::get_vector() {
    return _toref(_toref(df::global::world).squads).all;
  }
  squad *squad::find(key_field_type id_) {
    std::vector<squad*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<syndrome*>& syndrome::get_vector() {
    return _toref(_toref(_toref(df::global::world).raws).syndromes).all;
  }
  syndrome *syndrome::find(int id_) {
    std::vector<syndrome*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int tile_page::binsearch_index(const std::vector<tile_page*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &tile_page::token, key, exact);
  }
  int tile_page::binsearch_index(const std::vector<tile_page*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->token, exact);
  }
  int tissue::binsearch_index(const std::vector<tissue*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &tissue::id, key, exact);
  }
  int tissue::binsearch_index(const std::vector<tissue*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int tissue_style_raw::binsearch_index(const std::vector<tissue_style_raw*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &tissue_style_raw::id, key, exact);
  }
  int tissue_style_raw::binsearch_index(const std::vector<tissue_style_raw*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<tissue_template*>& tissue_template::get_vector() {
    return _toref(_toref(df::global::world).raws).tissue_templates;
  }
  tissue_template *tissue_template::find(int id_) {
    std::vector<tissue_template*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int training_assignment::binsearch_index(const std::vector<training_assignment*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &training_assignment::animal_id, key, exact);
  }
  int training_assignment::binsearch_index(const std::vector<training_assignment*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->animal_id, exact);
  }
  std::vector<training_assignment*>& training_assignment::get_vector() {
    return _toref(_toref(df::global::ui).equipment).training_assignments;
  }
  training_assignment *training_assignment::find(key_field_type id_) {
    std::vector<training_assignment*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int unit::binsearch_index(const std::vector<unit*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &unit::id, key, exact);
  }
  int unit::binsearch_index(const std::vector<unit*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<unit*>& unit::get_vector() {
    return _toref(_toref(df::global::world).units).all;
  }
  unit *unit::find(key_field_type id_) {
    std::vector<unit*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int unit_chunk::binsearch_index(const std::vector<unit_chunk*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &unit_chunk::id, key, exact);
  }
  int unit_chunk::binsearch_index(const std::vector<unit_chunk*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<unit_chunk*>& unit_chunk::get_vector() {
    return _toref(df::global::world).unit_chunks;
  }
  unit_chunk *unit_chunk::find(key_field_type id_) {
    std::vector<unit_chunk*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  int unit_item_use::binsearch_index(const std::vector<unit_item_use*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &unit_item_use::id, key, exact);
  }
  int unit_item_use::binsearch_index(const std::vector<unit_item_use*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int unit_syndrome::binsearch_index(const std::vector<unit_syndrome*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &unit_syndrome::type, key, exact);
  }
  int unit_syndrome::binsearch_index(const std::vector<unit_syndrome*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->type, exact);
  }
  int unit_wound::binsearch_index(const std::vector<unit_wound*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &unit_wound::id, key, exact);
  }
  int unit_wound::binsearch_index(const std::vector<unit_wound*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  int vehicle::binsearch_index(const std::vector<vehicle*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &vehicle::id, key, exact);
  }
  int vehicle::binsearch_index(const std::vector<vehicle*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<vehicle*>& vehicle::get_vector() {
    return _toref(_toref(df::global::world).vehicles).all;
  }
  vehicle *vehicle::find(key_field_type id_) {
    std::vector<vehicle*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<vermin*>& vermin::get_vector() {
    return _toref(_toref(df::global::world).vermin).all;
  }
  vermin *vermin::find(int id_) {
    std::vector<vermin*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int world_construction::binsearch_index(const std::vector<world_construction*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &world_construction::id, key, exact);
  }
  int world_construction::binsearch_index(const std::vector<world_construction*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<world_construction*>& world_construction::get_vector() {
    return _toref(_toref(_toref(df::global::world).world_data).constructions).list;
  }
  world_construction *world_construction::find(key_field_type id_) {
    std::vector<world_construction*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<world_geo_biome*>& world_geo_biome::get_vector() {
    return _toref(_toref(df::global::world).world_data).geo_biomes;
  }
  world_geo_biome *world_geo_biome::find(int id_) {
    std::vector<world_geo_biome*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  std::vector<world_landmass*>& world_landmass::get_vector() {
    return _toref(_toref(df::global::world).world_data).landmasses;
  }
  world_landmass *world_landmass::find(int id_) {
    std::vector<world_landmass*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int world_object_data::binsearch_index(const std::vector<world_object_data*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &world_object_data::id, key, exact);
  }
  int world_object_data::binsearch_index(const std::vector<world_object_data*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<world_object_data*>& world_object_data::get_vector() {
    return _toref(_toref(df::global::world).world_data).object_data;
  }
  world_object_data *world_object_data::find(key_field_type id_) {
    std::vector<world_object_data*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<world_region*>& world_region::get_vector() {
    return _toref(_toref(df::global::world).world_data).regions;
  }
  world_region *world_region::find(int id_) {
    std::vector<world_region*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int world_site::binsearch_index(const std::vector<world_site*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &world_site::id, key, exact);
  }
  int world_site::binsearch_index(const std::vector<world_site*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<world_site*>& world_site::get_vector() {
    return _toref(_toref(df::global::world).world_data).sites;
  }
  world_site *world_site::find(key_field_type id_) {
    std::vector<world_site*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  std::vector<world_underground_region*>& world_underground_region::get_vector() {
    return _toref(_toref(df::global::world).world_data).underground_regions;
  }
  world_underground_region *world_underground_region::find(int id_) {
    std::vector<world_underground_region*> &vec_ = get_vector();
    return (size_t(id_) < vec_.size()) ? vec_[id_] : NULL;
  }
  int written_content::binsearch_index(const std::vector<written_content*> &vec, key_field_type key, bool exact) {
    return ::binsearch_index(vec, &written_content::id, key, exact);
  }
  int written_content::binsearch_index(const std::vector<written_content*> &vec, key_pointer_type key, bool exact) {
    return binsearch_index(vec, key->id, exact);
  }
  std::vector<written_content*>& written_content::get_vector() {
    return _toref(_toref(df::global::world).written_contents).all;
  }
  written_content *written_content::find(key_field_type id_) {
    std::vector<written_content*> &vec_ = get_vector();
    return binsearch_in_vector(vec_, id_);
  }
  namespace global {
    int32_t *activity_next_id = NULL;
    df::announcements *announcements = NULL;
    int32_t *art_image_chunk_next_id = NULL;
    int32_t *artifact_next_id = NULL;
    int32_t *building_next_id = NULL;
    std::vector<int32_t > *created_item_count = NULL;
    std::vector<int16_t > *created_item_matindex = NULL;
    std::vector<int16_t > *created_item_mattype = NULL;
    std::vector<int16_t > *created_item_subtype = NULL;
    std::vector<df::item_type > *created_item_type = NULL;
    int32_t *crime_next_id = NULL;
    int8_t *cur_season = NULL;
    int32_t *cur_season_tick = NULL;
    int32_t *cur_year = NULL;
    int32_t *cur_year_tick = NULL;
    int32_t *cur_year_tick_advmode = NULL;
    T_current_weather *current_weather = NULL;
    T_cursor *cursor = NULL;
    df::d_init *d_init = NULL;
    bool *debug_combat = NULL;
    bool *debug_fastmining = NULL;
    bool *debug_noberserk = NULL;
    bool *debug_nodrink = NULL;
    bool *debug_noeat = NULL;
    bool *debug_nomoods = NULL;
    bool *debug_nopause = NULL;
    bool *debug_nosleep = NULL;
    bool *debug_showambush = NULL;
    bool *debug_turbospeed = NULL;
    bool *debug_wildlife = NULL;
    df::enabler *enabler = NULL;
    int32_t *entity_next_id = NULL;
    int32_t *flow_guide_next_id = NULL;
    std::vector<df::flow_info* > *flows = NULL;
    int32_t *formation_next_id = NULL;
    df::game_mode *gamemode = NULL;
    df::game_type *gametype = NULL;
    df::graphic *gps = NULL;
    df::interfacest *gview = NULL;
    int32_t *hist_event_collection_next_id = NULL;
    int32_t *hist_event_next_id = NULL;
    int32_t *hist_figure_next_id = NULL;
    int32_t *identity_next_id = NULL;
    int32_t *incident_next_id = NULL;
    df::init *init = NULL;
    int32_t *interaction_instance_next_id = NULL;
    int32_t *item_next_id = NULL;
    int32_t *job_next_id = NULL;
    int32_t *machine_next_id = NULL;
    df::map_renderer *map_renderer = NULL;
    int32_t *nemesis_next_id = NULL;
    bool *pause_state = NULL;
    bool *process_dig = NULL;
    bool *process_jobs = NULL;
    int32_t *proj_next_id = NULL;
    bool *save_on_exit = NULL;
    int32_t *schedule_next_id = NULL;
    T_selection_rect *selection_rect = NULL;
    int32_t *squad_next_id = NULL;
    uint8_t *standing_orders_auto_butcher = NULL;
    uint8_t *standing_orders_auto_collect_webs = NULL;
    uint8_t *standing_orders_auto_fishery = NULL;
    uint8_t *standing_orders_auto_kiln = NULL;
    uint8_t *standing_orders_auto_kitchen = NULL;
    uint8_t *standing_orders_auto_loom = NULL;
    uint8_t *standing_orders_auto_other = NULL;
    uint8_t *standing_orders_auto_slaughter = NULL;
    uint8_t *standing_orders_auto_smelter = NULL;
    uint8_t *standing_orders_auto_tan = NULL;
    uint8_t *standing_orders_dump_bones = NULL;
    uint8_t *standing_orders_dump_corpses = NULL;
    uint8_t *standing_orders_dump_hair = NULL;
    uint8_t *standing_orders_dump_other = NULL;
    uint8_t *standing_orders_dump_shells = NULL;
    uint8_t *standing_orders_dump_skins = NULL;
    uint8_t *standing_orders_dump_skulls = NULL;
    uint8_t *standing_orders_farmer_harvest = NULL;
    uint8_t *standing_orders_forbid_other_dead_items = NULL;
    uint8_t *standing_orders_forbid_other_nohunt = NULL;
    uint8_t *standing_orders_forbid_own_dead = NULL;
    uint8_t *standing_orders_forbid_own_dead_items = NULL;
    uint8_t *standing_orders_forbid_used_ammo = NULL;
    uint8_t *standing_orders_gather_animals = NULL;
    uint8_t *standing_orders_gather_bodies = NULL;
    uint8_t *standing_orders_gather_food = NULL;
    uint8_t *standing_orders_gather_furniture = NULL;
    uint8_t *standing_orders_gather_minerals = NULL;
    uint8_t *standing_orders_gather_refuse = NULL;
    uint8_t *standing_orders_gather_refuse_outside = NULL;
    uint8_t *standing_orders_gather_vermin_remains = NULL;
    uint8_t *standing_orders_gather_wood = NULL;
    uint8_t *standing_orders_job_cancel_announce = NULL;
    uint8_t *standing_orders_mix_food = NULL;
    uint8_t *standing_orders_use_dyed_cloth = NULL;
    uint8_t *standing_orders_zoneonly_drink = NULL;
    uint8_t *standing_orders_zoneonly_fish = NULL;
    int32_t *task_next_id = NULL;
    df::texture_handler *texture = NULL;
    std::vector<df::timed_event* > *timed_events = NULL;
    df::ui *ui = NULL;
    df::ui_advmode *ui_advmode = NULL;
    int8_t *ui_area_map_width = NULL;
    df::ui_build_selector *ui_build_selector = NULL;
    std::vector<char > *ui_building_assign_is_marked = NULL;
    std::vector<df::item* > *ui_building_assign_items = NULL;
    std::vector<int8_t > *ui_building_assign_type = NULL;
    std::vector<df::unit* > *ui_building_assign_units = NULL;
    bool *ui_building_in_assign = NULL;
    bool *ui_building_in_resize = NULL;
    int32_t *ui_building_item_cursor = NULL;
    int32_t *ui_look_cursor = NULL;
    df::ui_look_list *ui_look_list = NULL;
    int8_t *ui_menu_width = NULL;
    int32_t *ui_selected_unit = NULL;
    df::ui_sidebar_menus *ui_sidebar_menus = NULL;
    df::ui_unit_view_mode *ui_unit_view_mode = NULL;
    bool *ui_workshop_in_add = NULL;
    int32_t *ui_workshop_job_cursor = NULL;
    int32_t *unit_chunk_next_id = NULL;
    int32_t *unit_next_id = NULL;
    int32_t *vehicle_next_id = NULL;
    int32_t *window_x = NULL;
    int32_t *window_y = NULL;
    int32_t *window_z = NULL;
    df::world *world = NULL;
    int32_t *written_content_next_id = NULL;
    void InitGlobals() {
      INIT_GLOBAL_FUNCTION_PREFIX
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, activity_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(df::announcements, announcements);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, art_image_chunk_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, artifact_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, building_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<int32_t >, created_item_count);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<int16_t >, created_item_matindex);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<int16_t >, created_item_mattype);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<int16_t >, created_item_subtype);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<df::item_type >, created_item_type);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, crime_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int8_t, cur_season);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, cur_season_tick);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, cur_year);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, cur_year_tick);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, cur_year_tick_advmode);
      INIT_GLOBAL_FUNCTION_ITEM(T_current_weather, current_weather);
      INIT_GLOBAL_FUNCTION_ITEM(T_cursor, cursor);
      INIT_GLOBAL_FUNCTION_ITEM(df::d_init, d_init);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_combat);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_fastmining);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_noberserk);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_nodrink);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_noeat);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_nomoods);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_nopause);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_nosleep);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_showambush);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_turbospeed);
      INIT_GLOBAL_FUNCTION_ITEM(bool, debug_wildlife);
      INIT_GLOBAL_FUNCTION_ITEM(df::enabler, enabler);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, entity_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, flow_guide_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<df::flow_info* >, flows);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, formation_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(df::game_mode, gamemode);
      INIT_GLOBAL_FUNCTION_ITEM(df::game_type, gametype);
      INIT_GLOBAL_FUNCTION_ITEM(df::graphic, gps);
      INIT_GLOBAL_FUNCTION_ITEM(df::interfacest, gview);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, hist_event_collection_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, hist_event_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, hist_figure_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, identity_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, incident_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(df::init, init);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, interaction_instance_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, item_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, job_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, machine_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(df::map_renderer, map_renderer);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, nemesis_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(bool, pause_state);
      INIT_GLOBAL_FUNCTION_ITEM(bool, process_dig);
      INIT_GLOBAL_FUNCTION_ITEM(bool, process_jobs);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, proj_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(bool, save_on_exit);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, schedule_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(T_selection_rect, selection_rect);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, squad_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_butcher);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_collect_webs);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_fishery);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_kiln);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_kitchen);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_loom);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_other);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_slaughter);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_smelter);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_auto_tan);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_dump_bones);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_dump_corpses);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_dump_hair);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_dump_other);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_dump_shells);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_dump_skins);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_dump_skulls);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_farmer_harvest);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_forbid_other_dead_items);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_forbid_other_nohunt);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_forbid_own_dead);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_forbid_own_dead_items);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_forbid_used_ammo);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_gather_animals);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_gather_bodies);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_gather_food);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_gather_furniture);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_gather_minerals);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_gather_refuse);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_gather_refuse_outside);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_gather_vermin_remains);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_gather_wood);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_job_cancel_announce);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_mix_food);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_use_dyed_cloth);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_zoneonly_drink);
      INIT_GLOBAL_FUNCTION_ITEM(uint8_t, standing_orders_zoneonly_fish);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, task_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(df::texture_handler, texture);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<df::timed_event* >, timed_events);
      INIT_GLOBAL_FUNCTION_ITEM(df::ui, ui);
      INIT_GLOBAL_FUNCTION_ITEM(df::ui_advmode, ui_advmode);
      INIT_GLOBAL_FUNCTION_ITEM(int8_t, ui_area_map_width);
      INIT_GLOBAL_FUNCTION_ITEM(df::ui_build_selector, ui_build_selector);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<char >, ui_building_assign_is_marked);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<df::item* >, ui_building_assign_items);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<int8_t >, ui_building_assign_type);
      INIT_GLOBAL_FUNCTION_ITEM(std::vector<df::unit* >, ui_building_assign_units);
      INIT_GLOBAL_FUNCTION_ITEM(bool, ui_building_in_assign);
      INIT_GLOBAL_FUNCTION_ITEM(bool, ui_building_in_resize);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, ui_building_item_cursor);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, ui_look_cursor);
      INIT_GLOBAL_FUNCTION_ITEM(df::ui_look_list, ui_look_list);
      INIT_GLOBAL_FUNCTION_ITEM(int8_t, ui_menu_width);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, ui_selected_unit);
      INIT_GLOBAL_FUNCTION_ITEM(df::ui_sidebar_menus, ui_sidebar_menus);
      INIT_GLOBAL_FUNCTION_ITEM(df::ui_unit_view_mode, ui_unit_view_mode);
      INIT_GLOBAL_FUNCTION_ITEM(bool, ui_workshop_in_add);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, ui_workshop_job_cursor);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, unit_chunk_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, unit_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, vehicle_next_id);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, window_x);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, window_y);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, window_z);
      INIT_GLOBAL_FUNCTION_ITEM(df::world, world);
      INIT_GLOBAL_FUNCTION_ITEM(int32_t, written_content_next_id);
    }
  }
}
