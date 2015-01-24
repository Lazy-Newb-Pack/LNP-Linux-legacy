/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#include "abstract_building.h"
#include "abstract_building_dark_towerst.h"
#include "abstract_building_dungeonst.h"
#include "abstract_building_keepst.h"
#include "abstract_building_marketst.h"
#include "abstract_building_mead_hallst.h"
#include "abstract_building_templest.h"
#include "abstract_building_tombst.h"
#include "abstract_building_underworld_spirest.h"
#include "abstract_building_unk.h"
#include "active_script_var_longst.h"
#include "active_script_var_unitst.h"
#include "active_script_varst.h"
#include "activity_entry.h"
#include "activity_event.h"
#include "activity_event_combat_trainingst.h"
#include "activity_event_conflictst.h"
#include "activity_event_conversationst.h"
#include "activity_event_guardst.h"
#include "activity_event_harassmentst.h"
#include "activity_event_individual_skill_drillst.h"
#include "activity_event_participants.h"
#include "activity_event_ranged_practicest.h"
#include "activity_event_reunionst.h"
#include "activity_event_skill_demonstrationst.h"
#include "activity_event_sparringst.h"
#include "activity_event_training_sessionst.h"
#include "activity_info.h"
#include "adventure_log_item.h"
#include "adventure_movement_option.h"
#include "announcements.h"
#include "armor_properties.h"
#include "army.h"
#include "army_controller.h"
#include "art_image.h"
#include "art_image_chunk.h"
#include "art_image_element.h"
#include "art_image_element_creaturest.h"
#include "art_image_element_itemst.h"
#include "art_image_element_plantst.h"
#include "art_image_element_shapest.h"
#include "art_image_element_treest.h"
#include "art_image_property.h"
#include "art_image_property_intransitive_verbst.h"
#include "art_image_property_transitive_verbst.h"
#include "art_image_ref.h"
#include "artifact_record.h"
#include "assign_trade_status.h"
#include "block_burrow.h"
#include "block_burrow_link.h"
#include "block_square_event.h"
#include "block_square_event_designation_priorityst.h"
#include "block_square_event_frozen_liquidst.h"
#include "block_square_event_grassst.h"
#include "block_square_event_item_spatterst.h"
#include "block_square_event_material_spatterst.h"
#include "block_square_event_mineralst.h"
#include "block_square_event_spoorst.h"
#include "block_square_event_world_constructionst.h"
#include "body_appearance_modifier.h"
#include "body_component_info.h"
#include "body_detail_plan.h"
#include "body_part_layer_raw.h"
#include "body_part_raw.h"
#include "body_part_template.h"
#include "body_size_info.h"
#include "body_template.h"
#include "bp_appearance_modifier.h"
#include "build_req_choice_genst.h"
#include "build_req_choice_specst.h"
#include "build_req_choicest.h"
#include "building.h"
#include "building_actual.h"
#include "building_animaltrapst.h"
#include "building_archerytargetst.h"
#include "building_armorstandst.h"
#include "building_axle_horizontalst.h"
#include "building_axle_verticalst.h"
#include "building_bars_floorst.h"
#include "building_bars_verticalst.h"
#include "building_bedst.h"
#include "building_boxst.h"
#include "building_bridgest.h"
#include "building_cabinetst.h"
#include "building_cagest.h"
#include "building_chainst.h"
#include "building_chairst.h"
#include "building_civzonest.h"
#include "building_coffinst.h"
#include "building_constructionst.h"
#include "building_def.h"
#include "building_def_furnacest.h"
#include "building_def_item.h"
#include "building_def_workshopst.h"
#include "building_design.h"
#include "building_doorst.h"
#include "building_drawbuffer.h"
#include "building_extents.h"
#include "building_farmplotst.h"
#include "building_floodgatest.h"
#include "building_furnacest.h"
#include "building_gear_assemblyst.h"
#include "building_grate_floorst.h"
#include "building_grate_wallst.h"
#include "building_hatchst.h"
#include "building_hivest.h"
#include "building_nest_boxst.h"
#include "building_nestst.h"
#include "building_road_dirtst.h"
#include "building_road_pavedst.h"
#include "building_roadst.h"
#include "building_rollersst.h"
#include "building_screw_pumpst.h"
#include "building_shopst.h"
#include "building_siegeenginest.h"
#include "building_slabst.h"
#include "building_squad_use.h"
#include "building_statuest.h"
#include "building_stockpilest.h"
#include "building_supportst.h"
#include "building_tablest.h"
#include "building_traction_benchst.h"
#include "building_tradedepotst.h"
#include "building_trapst.h"
#include "building_users.h"
#include "building_wagonst.h"
#include "building_water_wheelst.h"
#include "building_weaponrackst.h"
#include "building_weaponst.h"
#include "building_wellst.h"
#include "building_windmillst.h"
#include "building_window_gemst.h"
#include "building_window_glassst.h"
#include "building_windowst.h"
#include "building_workshopst.h"
#include "burrow.h"
#include "campfire.h"
#include "caravan_state.h"
#include "caste_attack.h"
#include "caste_body_info.h"
#include "caste_clothing_item.h"
#include "caste_raw.h"
#include "cave_column.h"
#include "cave_column_link.h"
#include "cave_column_rectangle.h"
#include "coin_batch.h"
#include "color_modifier_raw.h"
#include "construction.h"
#include "conversation.h"
#include "coord.h"
#include "coord2d.h"
#include "coord2d_path.h"
#include "coord_path.h"
#include "creature_graphics_appointment.h"
#include "creature_interaction_effect.h"
#include "creature_interaction_effect_add_simple_flagst.h"
#include "creature_interaction_effect_bleedingst.h"
#include "creature_interaction_effect_blistersst.h"
#include "creature_interaction_effect_body_mat_interactionst.h"
#include "creature_interaction_effect_body_transformationst.h"
#include "creature_interaction_effect_bp_appearance_modifierst.h"
#include "creature_interaction_effect_bruisingst.h"
#include "creature_interaction_effect_can_do_interactionst.h"
#include "creature_interaction_effect_cough_bloodst.h"
#include "creature_interaction_effect_display_namest.h"
#include "creature_interaction_effect_display_symbolst.h"
#include "creature_interaction_effect_dizzinessst.h"
#include "creature_interaction_effect_drowsinessst.h"
#include "creature_interaction_effect_feverst.h"
#include "creature_interaction_effect_flash_symbolst.h"
#include "creature_interaction_effect_impair_functionst.h"
#include "creature_interaction_effect_material_force_adjustst.h"
#include "creature_interaction_effect_ment_att_changest.h"
#include "creature_interaction_effect_nauseast.h"
#include "creature_interaction_effect_necrosisst.h"
#include "creature_interaction_effect_numbnessst.h"
#include "creature_interaction_effect_oozingst.h"
#include "creature_interaction_effect_painst.h"
#include "creature_interaction_effect_paralysisst.h"
#include "creature_interaction_effect_phys_att_changest.h"
#include "creature_interaction_effect_remove_simple_flagst.h"
#include "creature_interaction_effect_sense_creature_classst.h"
#include "creature_interaction_effect_skill_roll_adjustst.h"
#include "creature_interaction_effect_speed_changest.h"
#include "creature_interaction_effect_swellingst.h"
#include "creature_interaction_effect_target.h"
#include "creature_interaction_effect_unconsciousnessst.h"
#include "creature_interaction_effect_vomit_bloodst.h"
#include "creature_raw.h"
#include "creature_variation.h"
#include "creature_variation_convert_tag.h"
#include "crime.h"
#include "cultural_identity.h"
#include "curse_attr_change.h"
#include "d_init.h"
#include "deep_vein_hollow.h"
#include "descriptor_color.h"
#include "descriptor_pattern.h"
#include "descriptor_shape.h"
#include "dipscript_info.h"
#include "dipscript_popup.h"
#include "dye_info.h"
#include "effect_info.h"
#include "embark_item_choice.h"
#include "embark_location.h"
#include "enabler.h"
#include "engraving.h"
#include "entity_activity_statistics.h"
#include "entity_buy_prices.h"
#include "entity_buy_requests.h"
#include "entity_claim_mask.h"
#include "entity_entity_link.h"
#include "entity_event.h"
#include "entity_population.h"
#include "entity_population_unk4.h"
#include "entity_position.h"
#include "entity_position_assignment.h"
#include "entity_position_raw.h"
#include "entity_raw.h"
#include "entity_recipe.h"
#include "entity_sell_prices.h"
#include "entity_sell_requests.h"
#include "entity_site_link.h"
#include "entity_tissue_style.h"
#include "entity_uniform.h"
#include "entity_uniform_item.h"
#include "feature.h"
#include "feature_alteration.h"
#include "feature_alteration_new_lava_fill_zst.h"
#include "feature_alteration_new_pop_maxst.h"
#include "feature_cavest.h"
#include "feature_deep_special_tubest.h"
#include "feature_deep_surface_portalst.h"
#include "feature_init.h"
#include "feature_init_cavest.h"
#include "feature_init_deep_special_tubest.h"
#include "feature_init_deep_surface_portalst.h"
#include "feature_init_magma_core_from_layerst.h"
#include "feature_init_magma_poolst.h"
#include "feature_init_outdoor_riverst.h"
#include "feature_init_pitst.h"
#include "feature_init_subterranean_from_layerst.h"
#include "feature_init_underworld_from_layerst.h"
#include "feature_init_volcanost.h"
#include "feature_magma_core_from_layerst.h"
#include "feature_magma_poolst.h"
#include "feature_outdoor_riverst.h"
#include "feature_pitst.h"
#include "feature_subterranean_from_layerst.h"
#include "feature_underworld_from_layerst.h"
#include "feature_volcanost.h"
#include "file_compressorst.h"
#include "fire.h"
#include "flow_guide.h"
#include "flow_guide_item_cloudst.h"
#include "flow_guide_trailing_flowst.h"
#include "flow_info.h"
#include "flow_reuse_pool.h"
#include "gait_info.h"
#include "general_ref.h"
#include "general_ref_abstract_buildingst.h"
#include "general_ref_artifact.h"
#include "general_ref_building.h"
#include "general_ref_building_cagedst.h"
#include "general_ref_building_chainst.h"
#include "general_ref_building_civzone_assignedst.h"
#include "general_ref_building_destinationst.h"
#include "general_ref_building_holderst.h"
#include "general_ref_building_nest_boxst.h"
#include "general_ref_building_triggerst.h"
#include "general_ref_building_triggertargetst.h"
#include "general_ref_building_use_target_1st.h"
#include "general_ref_building_use_target_2st.h"
#include "general_ref_building_well_tag.h"
#include "general_ref_coinbatch.h"
#include "general_ref_contained_in_itemst.h"
#include "general_ref_contains_itemst.h"
#include "general_ref_contains_unitst.h"
#include "general_ref_creaturest.h"
#include "general_ref_entity.h"
#include "general_ref_entity_art_image.h"
#include "general_ref_entity_itemownerst.h"
#include "general_ref_entity_offeredst.h"
#include "general_ref_entity_popst.h"
#include "general_ref_entity_stolenst.h"
#include "general_ref_feature_layerst.h"
#include "general_ref_historical_eventst.h"
#include "general_ref_historical_figurest.h"
#include "general_ref_interactionst.h"
#include "general_ref_is_artifactst.h"
#include "general_ref_is_nemesisst.h"
#include "general_ref_item.h"
#include "general_ref_item_type.h"
#include "general_ref_locationst.h"
#include "general_ref_mapsquare.h"
#include "general_ref_nemesis.h"
#include "general_ref_projectile.h"
#include "general_ref_sitest.h"
#include "general_ref_spherest.h"
#include "general_ref_subregionst.h"
#include "general_ref_unit.h"
#include "general_ref_unit_beateest.h"
#include "general_ref_unit_cageest.h"
#include "general_ref_unit_foodreceiverst.h"
#include "general_ref_unit_holderst.h"
#include "general_ref_unit_infantst.h"
#include "general_ref_unit_itemownerst.h"
#include "general_ref_unit_kidnapeest.h"
#include "general_ref_unit_milkeest.h"
#include "general_ref_unit_patientst.h"
#include "general_ref_unit_reporteest.h"
#include "general_ref_unit_riderst.h"
#include "general_ref_unit_sheareest.h"
#include "general_ref_unit_slaughtereest.h"
#include "general_ref_unit_suckeest.h"
#include "general_ref_unit_tradebringerst.h"
#include "general_ref_unit_traineest.h"
#include "general_ref_unit_workerst.h"
#include "global_objects.h"
#include "glowing_barrier.h"
#include "graphic.h"
#include "hauling_route.h"
#include "hauling_stop.h"
#include "histfig_entity_link.h"
#include "histfig_entity_link_criminalst.h"
#include "histfig_entity_link_enemyst.h"
#include "histfig_entity_link_former_memberst.h"
#include "histfig_entity_link_former_mercenaryst.h"
#include "histfig_entity_link_former_positionst.h"
#include "histfig_entity_link_former_prisonerst.h"
#include "histfig_entity_link_former_slavest.h"
#include "histfig_entity_link_former_squadst.h"
#include "histfig_entity_link_memberst.h"
#include "histfig_entity_link_mercenaryst.h"
#include "histfig_entity_link_position_claimst.h"
#include "histfig_entity_link_positionst.h"
#include "histfig_entity_link_prisonerst.h"
#include "histfig_entity_link_slavest.h"
#include "histfig_entity_link_squadst.h"
#include "histfig_hf_link.h"
#include "histfig_hf_link_apprenticest.h"
#include "histfig_hf_link_childst.h"
#include "histfig_hf_link_companionst.h"
#include "histfig_hf_link_deityst.h"
#include "histfig_hf_link_fatherst.h"
#include "histfig_hf_link_imprisonerst.h"
#include "histfig_hf_link_loverst.h"
#include "histfig_hf_link_masterst.h"
#include "histfig_hf_link_motherst.h"
#include "histfig_hf_link_prisonerst.h"
#include "histfig_hf_link_spousest.h"
#include "histfig_site_link.h"
#include "histfig_site_link_hangoutst.h"
#include "histfig_site_link_home_site_abstract_buildingst.h"
#include "histfig_site_link_home_site_realization_buildingst.h"
#include "histfig_site_link_home_site_realization_sulst.h"
#include "histfig_site_link_lairst.h"
#include "histfig_site_link_seat_of_powerst.h"
#include "historical_entity.h"
#include "historical_figure.h"
#include "historical_figure_info.h"
#include "historical_kills.h"
#include "history_era.h"
#include "history_event.h"
#include "history_event_add_hf_entity_linkst.h"
#include "history_event_add_hf_hf_linkst.h"
#include "history_event_add_hf_site_linkst.h"
#include "history_event_agreement_concludedst.h"
#include "history_event_agreement_formedst.h"
#include "history_event_agreements_voidedst.h"
#include "history_event_artifact_createdst.h"
#include "history_event_artifact_droppedst.h"
#include "history_event_artifact_foundst.h"
#include "history_event_artifact_hiddenst.h"
#include "history_event_artifact_lostst.h"
#include "history_event_artifact_possessedst.h"
#include "history_event_artifact_recoveredst.h"
#include "history_event_artifact_storedst.h"
#include "history_event_assume_identityst.h"
#include "history_event_body_abusedst.h"
#include "history_event_change_creature_typest.h"
#include "history_event_change_hf_body_statest.h"
#include "history_event_change_hf_jobst.h"
#include "history_event_change_hf_statest.h"
#include "history_event_collection.h"
#include "history_event_collection_abductionst.h"
#include "history_event_collection_battlest.h"
#include "history_event_collection_beast_attackst.h"
#include "history_event_collection_duelst.h"
#include "history_event_collection_insurrectionst.h"
#include "history_event_collection_journeyst.h"
#include "history_event_collection_site_conqueredst.h"
#include "history_event_collection_theftst.h"
#include "history_event_collection_warst.h"
#include "history_event_context.h"
#include "history_event_create_entity_positionst.h"
#include "history_event_created_buildingst.h"
#include "history_event_created_sitest.h"
#include "history_event_created_world_constructionst.h"
#include "history_event_creature_devouredst.h"
#include "history_event_diplomat_lostst.h"
#include "history_event_entity_actionst.h"
#include "history_event_entity_createdst.h"
#include "history_event_entity_incorporatedst.h"
#include "history_event_entity_lawst.h"
#include "history_event_entity_razed_buildingst.h"
#include "history_event_first_contact_failedst.h"
#include "history_event_first_contactst.h"
#include "history_event_hf_act_on_buildingst.h"
#include "history_event_hf_attacked_sitest.h"
#include "history_event_hf_confrontedst.h"
#include "history_event_hf_destroyed_sitest.h"
#include "history_event_hf_does_interactionst.h"
#include "history_event_hf_gains_secret_goalst.h"
#include "history_event_hf_learns_secretst.h"
#include "history_event_hf_razed_buildingst.h"
#include "history_event_hist_figure_abductedst.h"
#include "history_event_hist_figure_diedst.h"
#include "history_event_hist_figure_new_petst.h"
#include "history_event_hist_figure_reach_summitst.h"
#include "history_event_hist_figure_reunionst.h"
#include "history_event_hist_figure_revivedst.h"
#include "history_event_hist_figure_simple_battle_eventst.h"
#include "history_event_hist_figure_travelst.h"
#include "history_event_hist_figure_woundedst.h"
#include "history_event_insurrection_endedst.h"
#include "history_event_insurrection_startedst.h"
#include "history_event_item_stolenst.h"
#include "history_event_masterpiece_created_arch_constructst.h"
#include "history_event_masterpiece_created_arch_designst.h"
#include "history_event_masterpiece_created_dye_itemst.h"
#include "history_event_masterpiece_created_engravingst.h"
#include "history_event_masterpiece_created_foodst.h"
#include "history_event_masterpiece_created_item_improvementst.h"
#include "history_event_masterpiece_created_itemst.h"
#include "history_event_masterpiece_createdst.h"
#include "history_event_masterpiece_lostst.h"
#include "history_event_merchantst.h"
#include "history_event_reclaim_sitest.h"
#include "history_event_remove_hf_entity_linkst.h"
#include "history_event_remove_hf_hf_linkst.h"
#include "history_event_remove_hf_site_linkst.h"
#include "history_event_replaced_buildingst.h"
#include "history_event_site_diedst.h"
#include "history_event_site_disputest.h"
#include "history_event_site_retiredst.h"
#include "history_event_topicagreement_concludedst.h"
#include "history_event_topicagreement_madest.h"
#include "history_event_topicagreement_rejectedst.h"
#include "history_event_war_attacked_sitest.h"
#include "history_event_war_destroyed_sitest.h"
#include "history_event_war_field_battlest.h"
#include "history_event_war_peace_acceptedst.h"
#include "history_event_war_peace_rejectedst.h"
#include "history_event_war_plundered_sitest.h"
#include "history_event_war_site_new_leaderst.h"
#include "history_event_war_site_taken_overst.h"
#include "history_event_war_site_tribute_forcedst.h"
#include "history_hit_item.h"
#include "hospital_supplies.h"
#include "identity.h"
#include "incident.h"
#include "init.h"
#include "init_display.h"
#include "init_font.h"
#include "init_input.h"
#include "init_media.h"
#include "init_window.h"
#include "inorganic_raw.h"
#include "interaction.h"
#include "interaction_effect.h"
#include "interaction_effect_add_syndromest.h"
#include "interaction_effect_animatest.h"
#include "interaction_effect_cleanst.h"
#include "interaction_effect_contactst.h"
#include "interaction_effect_hidest.h"
#include "interaction_effect_material_emissionst.h"
#include "interaction_effect_resurrectst.h"
#include "interaction_instance.h"
#include "interaction_source.h"
#include "interaction_source_attackst.h"
#include "interaction_source_creature_actionst.h"
#include "interaction_source_deityst.h"
#include "interaction_source_disturbancest.h"
#include "interaction_source_ingestionst.h"
#include "interaction_source_regionst.h"
#include "interaction_source_secretst.h"
#include "interaction_source_underground_specialst.h"
#include "interaction_target.h"
#include "interaction_target_corpsest.h"
#include "interaction_target_creaturest.h"
#include "interaction_target_info.h"
#include "interaction_target_locationst.h"
#include "interaction_target_materialst.h"
#include "interface_button.h"
#include "interface_button_building_category_selectorst.h"
#include "interface_button_building_material_selectorst.h"
#include "interface_button_building_new_jobst.h"
#include "interface_button_buildingst.h"
#include "interface_button_construction_building_selectorst.h"
#include "interface_button_construction_category_selectorst.h"
#include "interface_button_construction_donest.h"
#include "interface_button_constructionst.h"
#include "interfacest.h"
#include "invasion_info.h"
#include "item.h"
#include "item_actual.h"
#include "item_ammost.h"
#include "item_amuletst.h"
#include "item_animaltrapst.h"
#include "item_anvilst.h"
#include "item_armorst.h"
#include "item_armorstandst.h"
#include "item_backpackst.h"
#include "item_ballistaarrowheadst.h"
#include "item_ballistapartsst.h"
#include "item_barrelst.h"
#include "item_barst.h"
#include "item_bedst.h"
#include "item_binst.h"
#include "item_blocksst.h"
#include "item_body_component.h"
#include "item_bookst.h"
#include "item_boulderst.h"
#include "item_boxst.h"
#include "item_braceletst.h"
#include "item_bucketst.h"
#include "item_cabinetst.h"
#include "item_cagest.h"
#include "item_catapultpartsst.h"
#include "item_chainst.h"
#include "item_chairst.h"
#include "item_cheesest.h"
#include "item_clothst.h"
#include "item_coffinst.h"
#include "item_coinst.h"
#include "item_constructed.h"
#include "item_corpsepiecest.h"
#include "item_corpsest.h"
#include "item_crafted.h"
#include "item_critter.h"
#include "item_crownst.h"
#include "item_crutchst.h"
#include "item_doorst.h"
#include "item_drinkst.h"
#include "item_earringst.h"
#include "item_eggst.h"
#include "item_figurinest.h"
#include "item_filter_spec.h"
#include "item_fish_rawst.h"
#include "item_fishst.h"
#include "item_flaskst.h"
#include "item_floodgatest.h"
#include "item_foodst.h"
#include "item_gemst.h"
#include "item_globst.h"
#include "item_glovesst.h"
#include "item_gobletst.h"
#include "item_gratest.h"
#include "item_hatch_coverst.h"
#include "item_helmst.h"
#include "item_history_info.h"
#include "item_instrumentst.h"
#include "item_kill_info.h"
#include "item_liquid.h"
#include "item_liquid_miscst.h"
#include "item_liquipowder.h"
#include "item_magicness.h"
#include "item_meatst.h"
#include "item_millstonest.h"
#include "item_orthopedic_castst.h"
#include "item_pantsst.h"
#include "item_petst.h"
#include "item_pipe_sectionst.h"
#include "item_plant_growthst.h"
#include "item_plantst.h"
#include "item_powder.h"
#include "item_powder_miscst.h"
#include "item_quernst.h"
#include "item_quiverst.h"
#include "item_remainsst.h"
#include "item_ringst.h"
#include "item_rockst.h"
#include "item_roughst.h"
#include "item_scepterst.h"
#include "item_seedsst.h"
#include "item_shieldst.h"
#include "item_shoesst.h"
#include "item_siegeammost.h"
#include "item_skin_tannedst.h"
#include "item_slabst.h"
#include "item_smallgemst.h"
#include "item_splintst.h"
#include "item_statuest.h"
#include "item_stockpile_ref.h"
#include "item_tablest.h"
#include "item_threadst.h"
#include "item_toolst.h"
#include "item_totemst.h"
#include "item_toyst.h"
#include "item_traction_benchst.h"
#include "item_trapcompst.h"
#include "item_trappartsst.h"
#include "item_verminst.h"
#include "item_weaponrackst.h"
#include "item_weaponst.h"
#include "item_windowst.h"
#include "item_woodst.h"
#include "itemdef.h"
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
#include "itemimprovement.h"
#include "itemimprovement_art_imagest.h"
#include "itemimprovement_bandsst.h"
#include "itemimprovement_clothst.h"
#include "itemimprovement_coveredst.h"
#include "itemimprovement_illustrationst.h"
#include "itemimprovement_itemspecificst.h"
#include "itemimprovement_pagesst.h"
#include "itemimprovement_rings_hangingst.h"
#include "itemimprovement_sewn_imagest.h"
#include "itemimprovement_spikesst.h"
#include "itemimprovement_threadst.h"
#include "job.h"
#include "job_item.h"
#include "job_item_filter.h"
#include "job_item_ref.h"
#include "job_list_link.h"
#include "language_name.h"
#include "language_symbol.h"
#include "language_translation.h"
#include "language_word.h"
#include "language_word_table.h"
#include "layer_object.h"
#include "layer_object_buttonst.h"
#include "layer_object_listst.h"
#include "loadgame_save_info.h"
#include "local_population.h"
#include "machine.h"
#include "machine_info.h"
#include "machine_standardst.h"
#include "machine_tile_set.h"
#include "manager_order.h"
#include "manager_order_template.h"
#include "mandate.h"
#include "map_block.h"
#include "map_block_column.h"
#include "map_renderer.h"
#include "map_viewport.h"
#include "material.h"
#include "material_common.h"
#include "material_template.h"
#include "material_vec_ref.h"
#include "matgloss_list.h"
#include "meeting_context.h"
#include "meeting_diplomat_info.h"
#include "meeting_event.h"
#include "meeting_variable.h"
#include "moving_party.h"
#include "nemesis_record.h"
#include "ocean_wave.h"
#include "party_info.h"
#include "plant.h"
#include "plant_growth.h"
#include "plant_growth_print.h"
#include "plant_raw.h"
#include "plant_tree_info.h"
#include "popup_message.h"
#include "power_info.h"
#include "pressure_plate_info.h"
#include "proj_itemst.h"
#include "proj_list_link.h"
#include "proj_magicst.h"
#include "proj_unitst.h"
#include "projectile.h"
#include "punishment.h"
#include "reaction.h"
#include "reaction_product.h"
#include "reaction_product_item_improvementst.h"
#include "reaction_product_itemst.h"
#include "reaction_reagent.h"
#include "reaction_reagent_itemst.h"
#include "region_map_entry.h"
#include "renderer.h"
#include "report.h"
#include "resource_allotment_data.h"
#include "resource_allotment_specifier.h"
#include "resource_allotment_specifier_ammost.h"
#include "resource_allotment_specifier_anvilst.h"
#include "resource_allotment_specifier_armor_bodyst.h"
#include "resource_allotment_specifier_armor_bootsst.h"
#include "resource_allotment_specifier_armor_glovesst.h"
#include "resource_allotment_specifier_armor_helmst.h"
#include "resource_allotment_specifier_armor_pantsst.h"
#include "resource_allotment_specifier_backpackst.h"
#include "resource_allotment_specifier_bagst.h"
#include "resource_allotment_specifier_bedst.h"
#include "resource_allotment_specifier_bonest.h"
#include "resource_allotment_specifier_boxst.h"
#include "resource_allotment_specifier_cabinetst.h"
#include "resource_allotment_specifier_chairst.h"
#include "resource_allotment_specifier_cheesest.h"
#include "resource_allotment_specifier_clothing_bodyst.h"
#include "resource_allotment_specifier_clothing_bootsst.h"
#include "resource_allotment_specifier_clothing_glovesst.h"
#include "resource_allotment_specifier_clothing_helmst.h"
#include "resource_allotment_specifier_clothing_pantsst.h"
#include "resource_allotment_specifier_clothst.h"
#include "resource_allotment_specifier_craftsst.h"
#include "resource_allotment_specifier_cropst.h"
#include "resource_allotment_specifier_extractst.h"
#include "resource_allotment_specifier_flaskst.h"
#include "resource_allotment_specifier_gemsst.h"
#include "resource_allotment_specifier_hornst.h"
#include "resource_allotment_specifier_leatherst.h"
#include "resource_allotment_specifier_meatst.h"
#include "resource_allotment_specifier_metalst.h"
#include "resource_allotment_specifier_pearlst.h"
#include "resource_allotment_specifier_powderst.h"
#include "resource_allotment_specifier_quiverst.h"
#include "resource_allotment_specifier_shellst.h"
#include "resource_allotment_specifier_skinst.h"
#include "resource_allotment_specifier_soapst.h"
#include "resource_allotment_specifier_stonest.h"
#include "resource_allotment_specifier_tablest.h"
#include "resource_allotment_specifier_tallowst.h"
#include "resource_allotment_specifier_threadst.h"
#include "resource_allotment_specifier_toothst.h"
#include "resource_allotment_specifier_weapon_meleest.h"
#include "resource_allotment_specifier_weapon_rangedst.h"
#include "resource_allotment_specifier_woodst.h"
#include "room_rent_info.h"
#include "route_stockpile_link.h"
#include "schedule_info.h"
#include "schedule_slot.h"
#include "script_step_conditionalst.h"
#include "script_step_constructtopiclistst.h"
#include "script_step_dipeventst.h"
#include "script_step_diphistoryst.h"
#include "script_step_discussst.h"
#include "script_step_eventst.h"
#include "script_step_invasionst.h"
#include "script_step_setvarst.h"
#include "script_step_simpleactionst.h"
#include "script_step_textviewerst.h"
#include "script_step_topicdiscussionst.h"
#include "script_stepst.h"
#include "script_var_longst.h"
#include "script_var_unitst.h"
#include "script_varst.h"
#include "site_building_item.h"
#include "site_realization_building.h"
#include "site_realization_building_info_castle_courtyardst.h"
#include "site_realization_building_info_castle_towerst.h"
#include "site_realization_building_info_castle_wallst.h"
#include "site_realization_building_info_hillock_housest.h"
#include "site_realization_building_info_market_squarest.h"
#include "site_realization_building_info_shop_housest.h"
#include "site_realization_building_info_tree_housest.h"
#include "site_realization_building_info_trenchesst.h"
#include "site_realization_building_infost.h"
#include "site_realization_crossroads.h"
#include "spatter.h"
#include "spatter_common.h"
#include "special_mat_table.h"
#include "specific_ref.h"
#include "squad.h"
#include "squad_ammo_spec.h"
#include "squad_order.h"
#include "squad_order_cause_trouble_for_entityst.h"
#include "squad_order_defend_burrowsst.h"
#include "squad_order_drive_entity_off_sitest.h"
#include "squad_order_kill_listst.h"
#include "squad_order_movest.h"
#include "squad_order_patrol_routest.h"
#include "squad_order_trainst.h"
#include "squad_position.h"
#include "squad_schedule_entry.h"
#include "squad_schedule_order.h"
#include "squad_uniform_spec.h"
#include "stockpile_links.h"
#include "stockpile_settings.h"
#include "stop_depart_condition.h"
#include "syndrome.h"
#include "talk_choice.h"
#include "temperaturest.h"
#include "texture_handler.h"
#include "tile_bitmask.h"
#include "tile_page.h"
#include "timed_event.h"
#include "tissue.h"
#include "tissue_style_raw.h"
#include "tissue_template.h"
#include "training_assignment.h"
#include "ui.h"
#include "ui_advmode.h"
#include "ui_build_item_req.h"
#include "ui_build_selector.h"
#include "ui_hotkey.h"
#include "ui_look_list.h"
#include "ui_sidebar_menus.h"
#include "ui_unit_view_mode.h"
#include "unit.h"
#include "unit_action.h"
#include "unit_attribute.h"
#include "unit_chunk.h"
#include "unit_coin_debt.h"
#include "unit_complaint.h"
#include "unit_demand.h"
#include "unit_genes.h"
#include "unit_ghost_info.h"
#include "unit_health_info.h"
#include "unit_inventory_item.h"
#include "unit_item_use.h"
#include "unit_item_wrestle.h"
#include "unit_misc_trait.h"
#include "unit_personality.h"
#include "unit_preference.h"
#include "unit_request.h"
#include "unit_skill.h"
#include "unit_soul.h"
#include "unit_syndrome.h"
#include "unit_wound.h"
#include "vehicle.h"
#include "vermin.h"
#include "viewscreen.h"
#include "viewscreen_adventure_logst.h"
#include "viewscreen_announcelistst.h"
#include "viewscreen_barterst.h"
#include "viewscreen_buildinglistst.h"
#include "viewscreen_buildingst.h"
#include "viewscreen_choose_start_sitest.h"
#include "viewscreen_civlistst.h"
#include "viewscreen_conversationst.h"
#include "viewscreen_createquotast.h"
#include "viewscreen_customize_unitst.h"
#include "viewscreen_dungeon_monsterstatusst.h"
#include "viewscreen_dungeon_wrestlest.h"
#include "viewscreen_dungeonmodest.h"
#include "viewscreen_dwarfmodest.h"
#include "viewscreen_entityst.h"
#include "viewscreen_export_graphical_mapst.h"
#include "viewscreen_export_regionst.h"
#include "viewscreen_game_cleanerst.h"
#include "viewscreen_itemst.h"
#include "viewscreen_joblistst.h"
#include "viewscreen_jobmanagementst.h"
#include "viewscreen_jobst.h"
#include "viewscreen_justicest.h"
#include "viewscreen_kitchenprefst.h"
#include "viewscreen_layer.h"
#include "viewscreen_layer_arena_creaturest.h"
#include "viewscreen_layer_assigntradest.h"
#include "viewscreen_layer_choose_language_namest.h"
#include "viewscreen_layer_currencyst.h"
#include "viewscreen_layer_export_play_mapst.h"
#include "viewscreen_layer_militaryst.h"
#include "viewscreen_layer_musicsoundst.h"
#include "viewscreen_layer_noblelistst.h"
#include "viewscreen_layer_overall_healthst.h"
#include "viewscreen_layer_reactionst.h"
#include "viewscreen_layer_squad_schedulest.h"
#include "viewscreen_layer_stockpilest.h"
#include "viewscreen_layer_stone_restrictionst.h"
#include "viewscreen_layer_unit_actionst.h"
#include "viewscreen_layer_unit_healthst.h"
#include "viewscreen_layer_unit_relationshipst.h"
#include "viewscreen_layer_workshop_profilest.h"
#include "viewscreen_layer_world_gen_param_presetst.h"
#include "viewscreen_layer_world_gen_paramst.h"
#include "viewscreen_legendsst.h"
#include "viewscreen_loadgamest.h"
#include "viewscreen_meetingst.h"
#include "viewscreen_movieplayerst.h"
#include "viewscreen_new_regionst.h"
#include "viewscreen_noblest.h"
#include "viewscreen_optionst.h"
#include "viewscreen_overallstatusst.h"
#include "viewscreen_petst.h"
#include "viewscreen_pricest.h"
#include "viewscreen_reportlistst.h"
#include "viewscreen_requestagreementst.h"
#include "viewscreen_savegamest.h"
#include "viewscreen_selectitemst.h"
#include "viewscreen_setupadventurest.h"
#include "viewscreen_setupdwarfgamest.h"
#include "viewscreen_storesst.h"
#include "viewscreen_textviewerst.h"
#include "viewscreen_titlest.h"
#include "viewscreen_topicmeeting_fill_land_holder_positionst.h"
#include "viewscreen_topicmeeting_takerequestsst.h"
#include "viewscreen_topicmeetingst.h"
#include "viewscreen_tradeagreementst.h"
#include "viewscreen_tradegoodsst.h"
#include "viewscreen_tradelistst.h"
#include "viewscreen_treasurelistst.h"
#include "viewscreen_unitlistst.h"
#include "viewscreen_unitst.h"
#include "viewscreen_update_regionst.h"
#include "viewscreen_wagesst.h"
#include "weapon_attack.h"
#include "web_cluster.h"
#include "workshop_profile.h"
#include "world.h"
#include "world_construction.h"
#include "world_construction_bridgest.h"
#include "world_construction_roadst.h"
#include "world_construction_square.h"
#include "world_construction_square_bridgest.h"
#include "world_construction_square_roadst.h"
#include "world_construction_square_tunnelst.h"
#include "world_construction_square_wallst.h"
#include "world_construction_tunnelst.h"
#include "world_construction_wallst.h"
#include "world_data.h"
#include "world_geo_biome.h"
#include "world_geo_layer.h"
#include "world_history.h"
#include "world_landmass.h"
#include "world_object_data.h"
#include "world_population.h"
#include "world_population_ref.h"
#include "world_raws.h"
#include "world_region.h"
#include "world_region_details.h"
#include "world_region_feature.h"
#include "world_river.h"
#include "world_site.h"
#include "world_site_inhabitant.h"
#include "world_site_realization.h"
#include "world_site_unk130.h"
#include "world_underground_region.h"
#include "world_unk_20.h"
#include "world_unk_6c.h"
#include "world_unk_90.h"
#include "world_unk_9c.h"
#include "world_unk_a8.h"
#include "world_unk_b4.h"
#include "world_unk_c0.h"
#include "wound_curse_info.h"
#include "written_content.h"
namespace df {
  df::abstract_building::T_inhabitants::T_inhabitants()
    :  anon_1(0), anon_2(-1)
  {
  }
  df::abstract_building::T_unk1::T_unk1()
    :  anon_1(0), mat_type(-1), mat_index(0)
  {
  }
  df::abstract_building::abstract_building(virtual_identity *_id)
    :  id(0), unk1(0), unk3(0), site_owner_id(-1), site_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::abstract_building_dark_towerst::abstract_building_dark_towerst(virtual_identity *_id)
    :  abstract_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::abstract_building_dungeonst::abstract_building_dungeonst(virtual_identity *_id)
    :  abstract_building(_id), dungeon_type(DUNGEON), anon_1(0), anon_2(0), anon_3(0), anon_4(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::abstract_building_keepst::abstract_building_keepst(virtual_identity *_id)
    :  abstract_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::abstract_building_marketst::abstract_building_marketst(virtual_identity *_id)
    :  abstract_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::abstract_building_mead_hallst::abstract_building_mead_hallst(virtual_identity *_id)
    :  abstract_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::abstract_building_templest::abstract_building_templest(virtual_identity *_id)
    :  abstract_building(_id), deity(-1), religion(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::abstract_building_tombst::abstract_building_tombst(virtual_identity *_id)
    :  abstract_building(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::abstract_building_underworld_spirest::abstract_building_underworld_spirest(virtual_identity *_id)
    :  abstract_building(_id), unk_88(0), unk_8c(0), unk_90(0), unk_94(0), unk_98(0), unk_9c(0), unk_a0(0), unk_a4(0), unk_a8(0), unk_ac(0), unk_b0(0), unk_b4(0), unk_b8(0), unk_ba(0), unk_bc(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::abstract_building_unk::T_anon_1::T_anon_1()
    :  anon_1(0), race(-1), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0)
  {
  }
  df::abstract_building_unk::abstract_building_unk()
  {
  }
  df::active_script_var_longst::active_script_var_longst(virtual_identity *_id)
    :  active_script_varst(_id), value(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::active_script_var_unitst::active_script_var_unitst(virtual_identity *_id)
    :  active_script_varst(_id), unit(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::active_script_varst::active_script_varst(virtual_identity *_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_entry::activity_entry()
    :  id(0), type(0), next_event_id(0), army_controller(-1)
  {
  }
  df::activity_event::activity_event(virtual_identity *_id)
    :  event_id(0), activity_id(-1), parent_event_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_combat_trainingst::activity_event_combat_trainingst(virtual_identity *_id)
    :  activity_event(_id), building_id(-1), hist_figure_id(-1), unit_id(-1), organize_counter(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_conflictst::T_anon_1::T_anon_3::T_anon_3()
    :  anon_1(0), anon_2(0)
  {
  }
  df::activity_event_conflictst::T_anon_1::T_anon_1()
    :  id(0), anon_4(0), anon_5(0)
  {
  }
  df::activity_event_conflictst::activity_event_conflictst(virtual_identity *_id)
    :  activity_event(_id), anon_2(0), anon_3(0), anon_4(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_conversationst::T_anon_1::T_anon_1()
    :  anon_1(0), anon_2(0)
  {
  }
  df::activity_event_conversationst::T_anon_9::T_anon_9()
    :  anon_1(0), anon_2(0), anon_3(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0), anon_11(0), anon_12(0), anon_13(0), unk_v4014_1(0)
  {
  }
  df::activity_event_conversationst::T_unk2::T_unk2()
    :  anon_2(0), anon_3(0), anon_18(0), anon_19(0), anon_20(0), anon_21(0), anon_22(0), anon_23(0), anon_24(0), anon_25(0), anon_26(0), anon_27(0), anon_28(0), anon_29(0)
  {
  }
  df::activity_event_conversationst::activity_event_conversationst(virtual_identity *_id)
    :  activity_event(_id), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_10(0), anon_11(0), anon_12(0), anon_13(0), anon_15(-1), anon_16(0), anon_17(0), anon_18(0), anon_19(0), anon_20(0), anon_21(0), anon_22(0), anon_23(0), anon_24(0), anon_25(0), anon_26(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_guardst::activity_event_guardst(virtual_identity *_id)
    :  activity_event(_id), anon_2(0), anon_3(0), anon_4(0), anon_5(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_harassmentst::T_anon_2::T_anon_2()
    :  anon_1(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0), anon_12(0), anon_13(0)
  {
    for (int anon_14 = 0; anon_14 < 3; anon_14++) {
      anon_2[anon_14] = 0;
    }
  }
  df::activity_event_harassmentst::activity_event_harassmentst(virtual_identity *_id)
    :  activity_event(_id), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_individual_skill_drillst::activity_event_individual_skill_drillst(virtual_identity *_id)
    :  activity_event(_id), building_id(-1), countdown(3000)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_participants::activity_event_participants()
    :  activity_id(-1), event_id(0)
  {
  }
  df::activity_event_ranged_practicest::activity_event_ranged_practicest(virtual_identity *_id)
    :  activity_event(_id), building_id(-1), uniform_lock(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_reunionst::activity_event_reunionst(virtual_identity *_id)
    :  activity_event(_id), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_skill_demonstrationst::activity_event_skill_demonstrationst(virtual_identity *_id)
    :  activity_event(_id), building_id(-1), hist_figure_id(-1), unit_id(-1), skill(ENUM_FIRST_ITEM(job_skill)), organize_counter(0), wait_countdown(100), train_rounds(15), train_countdown(20)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_sparringst::T_groups::T_groups()
    :  countdown(3000), building_id(-1)
  {
  }
  df::activity_event_sparringst::activity_event_sparringst(virtual_identity *_id)
    :  activity_event(_id), building_id(-1), countdown(3000)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_event_training_sessionst::activity_event_training_sessionst(virtual_identity *_id)
    :  activity_event(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::activity_info::activity_info()
    :  id(0), unit_actor(0), unit_noble(0), place(0), unk3(0), delay(0), tree_quota(0)
  {
  }
  df::adventure_log_item::adventure_log_item()
    :  object(0)
  {
  }
  df::adventure_movement_option::adventure_movement_option(virtual_identity *_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::announcements::announcements()
  {
  }
  df::armor_properties::armor_properties()
    :  flags(ENUM_LAST_ITEM(armor_general_flags)), layer(0), layer_size(0), layer_permit(0), coverage(0)
  {
  }
  df::army::T_unk_1c::T_unk_1c()
    :  unk_0(0), unk_4(0), unk_8(0), unk_c(0), unk_10(0), unk_14(0), unk_18(0), unk_1c(-1000000), unk_20(-1000000), unk_24(-1000000), unk_28(0), unk_2c(0), unk_30(0), unk_34(0)
  {
  }
  df::army::T_unk_2c::T_unk_2c()
    :  unk_0(0), unk_4(0), unk_8(0), unk_c(0), unk_10(0), unk_14(0), unk_18(0), unk_1c(0), unk_20(0), unk_24(0), unk_28(0)
  {
  }
  df::army::army()
    :  id(0), unk_10(0), unk_14(0), unk_18(0), unk_3c(0), controller_id(-1), controller(0), unk_90(0), unk_94(0), unk_98(0), unk_9c(0), unk_a0(0), unk_a4(0), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0)
  {
  }
  df::army_controller::army_controller()
    :  id(0), entity_id(-1), unk_8(0), pos_x(0), pos_y(0), unk_14(0), unk_18(0), year(0), year_tick(0), unk_34(0), unk_38(0), unk_3c(0), unk_40(0), unk_54(0), unk_58(0), unk_5c(0)
  {
  }
  df::art_image::art_image()
    :  event(-1), spec_ref_type(ENUM_FIRST_ITEM(specific_ref_type)), mat_type(-1), mat_index(0), quality(ENUM_FIRST_ITEM(item_quality)), artist(-1), site(-1), anon_1(0), year(0), anon_2(0), id(-1), subid(-1)
  {
  }
  df::art_image_chunk::art_image_chunk()
    :  id(0)
  {
    for (int anon_1 = 0; anon_1 < 500; anon_1++) {
      images[anon_1] = 0;
    }
  }
  df::art_image_element::art_image_element(virtual_identity *_id)
    :  count(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::art_image_element_creaturest::art_image_element_creaturest(virtual_identity *_id)
    :  art_image_element(_id), race(-1), caste(0), histfig(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::art_image_element_itemst::art_image_element_itemst(virtual_identity *_id)
    :  art_image_element(_id), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0), item_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::art_image_element_plantst::art_image_element_plantst(virtual_identity *_id)
    :  art_image_element(_id), plant_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::art_image_element_shapest::art_image_element_shapest(virtual_identity *_id)
    :  art_image_element(_id), shape_id(-1), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::art_image_element_treest::art_image_element_treest(virtual_identity *_id)
    :  art_image_element(_id), plant_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::art_image_property::art_image_property(virtual_identity *_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::art_image_property_intransitive_verbst::art_image_property_intransitive_verbst(virtual_identity *_id)
    :  art_image_property(_id), anon_1(0), verb(ENUM_FIRST_ITEM(art_image_property_verb))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::art_image_property_transitive_verbst::art_image_property_transitive_verbst(virtual_identity *_id)
    :  art_image_property(_id), subject(0), object(0), verb(ENUM_FIRST_ITEM(art_image_property_verb))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::art_image_ref::art_image_ref()
    :  id(-1), subid(-1), civ_id(-1), site_id(-1)
  {
  }
  df::artifact_record::artifact_record()
    :  id(0), item(0), anon_1(0), anon_2(0), anon_3(0)
  {
  }
  df::assign_trade_status::assign_trade_status()
    :  item(0), distance(0), status(RemoveTrading), unk(0), value(0), weight(0)
  {
  }
  df::block_burrow::block_burrow()
    :  id(-1), link(0)
  {
  }
  df::block_burrow_link::block_burrow_link()
    :  item(0), prev(0), next(0)
  {
  }
  df::block_square_event::block_square_event(virtual_identity *_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::block_square_event_designation_priorityst::block_square_event_designation_priorityst(virtual_identity *_id)
    :  block_square_event(_id)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      for (int anon_2 = 0; anon_2 < 16; anon_2++) {
        priority[anon_1][anon_2] = 0;
      }
    }
  }
  df::block_square_event_frozen_liquidst::block_square_event_frozen_liquidst(virtual_identity *_id)
    :  block_square_event(_id)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      for (int anon_2 = 0; anon_2 < 16; anon_2++) {
        tiles[anon_1][anon_2] = ENUM_FIRST_ITEM(tiletype);
      }
    }
    for (int anon_3 = 0; anon_3 < 16; anon_3++) {
      for (int anon_4 = 0; anon_4 < 16; anon_4++) {
        liquid_type[anon_3][anon_4] = ENUM_FIRST_ITEM(tile_liquid);
      }
    }
  }
  df::block_square_event_grassst::block_square_event_grassst(virtual_identity *_id)
    :  block_square_event(_id), plant_index(-1)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      for (int anon_2 = 0; anon_2 < 16; anon_2++) {
        amount[anon_1][anon_2] = 0;
      }
    }
  }
  df::block_square_event_item_spatterst::block_square_event_item_spatterst(virtual_identity *_id)
    :  block_square_event(_id), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mattype(-1), matindex(0), unk1(0), temp1(0), temp2(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      for (int anon_2 = 0; anon_2 < 16; anon_2++) {
        amount[anon_1][anon_2] = 0;
      }
    }
    for (int anon_3 = 0; anon_3 < 16; anon_3++) {
      for (int anon_4 = 0; anon_4 < 16; anon_4++) {
        unk2[anon_3][anon_4] = 0;
      }
    }
  }
  df::block_square_event_material_spatterst::block_square_event_material_spatterst(virtual_identity *_id)
    :  block_square_event(_id), mat_type(-1), mat_index(0), mat_state(0), min_temperature(0), max_temperature(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      for (int anon_2 = 0; anon_2 < 16; anon_2++) {
        amount[anon_1][anon_2] = 0;
      }
    }
  }
  df::block_square_event_mineralst::block_square_event_mineralst(virtual_identity *_id)
    :  block_square_event(_id), inorganic_mat(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::block_square_event_spoorst::block_square_event_spoorst(virtual_identity *_id)
    :  block_square_event(_id), anon_7(0), anon_8(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_9 = 0; anon_9 < 16; anon_9++) {
      for (int anon_10 = 0; anon_10 < 16; anon_10++) {
        anon_1[anon_9][anon_10] = 0;
      }
    }
    for (int anon_11 = 0; anon_11 < 16; anon_11++) {
      for (int anon_12 = 0; anon_12 < 16; anon_12++) {
        anon_2[anon_11][anon_12] = 0;
      }
    }
    for (int anon_13 = 0; anon_13 < 16; anon_13++) {
      for (int anon_14 = 0; anon_14 < 16; anon_14++) {
        anon_3[anon_13][anon_14] = 0;
      }
    }
    for (int anon_15 = 0; anon_15 < 16; anon_15++) {
      for (int anon_16 = 0; anon_16 < 16; anon_16++) {
        anon_4[anon_15][anon_16] = 0;
      }
    }
    for (int anon_17 = 0; anon_17 < 16; anon_17++) {
      for (int anon_18 = 0; anon_18 < 16; anon_18++) {
        anon_5[anon_17][anon_18] = 0;
      }
    }
    for (int anon_19 = 0; anon_19 < 16; anon_19++) {
      for (int anon_20 = 0; anon_20 < 16; anon_20++) {
        anon_6[anon_19][anon_20] = 0;
      }
    }
  }
  df::block_square_event_world_constructionst::block_square_event_world_constructionst(virtual_identity *_id)
    :  block_square_event(_id), construction_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::body_appearance_modifier::body_appearance_modifier()
    :  type(ENUM_FIRST_ITEM(appearance_modifier_type)), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), importance(0), anon_7(0), anon_8(0), id(0), id2(0)
  {
    for (int anon_9 = 0; anon_9 < 7; anon_9++) {
      ranges[anon_9] = 0;
    }
    for (int anon_10 = 0; anon_10 < 6; anon_10++) {
      desc_range[anon_10] = 0;
    }
  }
  df::body_component_info::body_component_info()
  {
  }
  df::body_detail_plan::body_detail_plan()
  {
  }
  df::body_part_layer_raw::body_part_layer_raw()
    :  tissue_id(-1), flags(ENUM_LAST_ITEM(body_part_layer_flags)), part_fraction(0), healing_rate(0), vascular(0), pain_receptors(0), unk6(0), unk7(0), layer_id(0), parent_idx(-1), parent_layer_id(0), layer_depth(0), leak_barrier_id(0), nonsolid_id(0), styleable_id(0)
  {
  }
  df::body_part_raw::body_part_raw()
    :  con_part_id(0), flags(ENUM_LAST_ITEM(body_part_raw_flags)), fraction_total(0), fraction_base(0), fraction_fat(0), fraction_muscle(0), relsize(0), number(0), unk7b(0), bp_relation_part_id(0), bp_relation_code(0), bp_relation_coverage(0), min_temp(0), max_temp(0), temp_factor(0), numbered_idx(-1), insulation_fat(0), insulation_muscle(0), insulation_base(0), clothing_item_id(-1)
  {
  }
  df::body_part_template::body_part_template()
    :  contype(ENUM_FIRST_ITEM(body_part_template_contype)), flags(ENUM_LAST_ITEM(body_part_template_flags)), default_relsize(0), number(0)
  {
  }
  df::body_size_info::body_size_info()
    :  size_cur(0), size_base(0), area_cur(0), area_base(0), length_cur(0), length_base(0)
  {
  }
  df::body_template::body_template()
  {
  }
  df::bp_appearance_modifier::bp_appearance_modifier()
    :  type(ENUM_FIRST_ITEM(appearance_modifier_type)), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), importance(0), single_plural(0), unk1(0), id1(0), id(0)
  {
    for (int anon_7 = 0; anon_7 < 7; anon_7++) {
      ranges[anon_7] = 0;
    }
    for (int anon_8 = 0; anon_8 < 6; anon_8++) {
      desc_range[anon_8] = 0;
    }
  }
  df::build_req_choice_genst::build_req_choice_genst(virtual_identity *_id)
    :  build_req_choicest(_id), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0), used_count(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::build_req_choice_specst::build_req_choice_specst(virtual_identity *_id)
    :  build_req_choicest(_id), candidate(0), candidate_id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::build_req_choicest::build_req_choicest(virtual_identity *_id)
    :  distance(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building::T_job_claim_suppress::T_job_claim_suppress()
    :  unit(0), timer(0)
  {
  }
  df::building::T_activities::T_activities()
    :  activity_id(-1), event_id(-1)
  {
  }
  df::building::building(virtual_identity *_id)
    :  x1(0), y1(0), centerx(0), x2(0), y2(0), centery(0), z(0), mat_type(-1), mat_index(-1), age(0), race(-1), id(-1), is_room(0), owner_id(-1), owner(0), world_data_id(-1), world_data_subid(-1), unk_v40_2(-1), unk_v40_3(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_actual::T_contained_items::T_contained_items()
    :  item(0), use_mode(0)
  {
  }
  df::building_actual::building_actual(virtual_identity *_id)
    :  building(_id), construction_stage(0), design(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_animaltrapst::building_animaltrapst(virtual_identity *_id)
    :  building_actual(_id), bait_type(-1), fill_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_archerytargetst::building_archerytargetst(virtual_identity *_id)
    :  building_actual(_id), archery_direction(TopToBottom)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_armorstandst::building_armorstandst(virtual_identity *_id)
    :  building_actual(_id), unk_c0(0), specific_squad(-1), specific_position(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_axle_horizontalst::building_axle_horizontalst(virtual_identity *_id)
    :  building_actual(_id), is_vertical(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_axle_verticalst::building_axle_verticalst(virtual_identity *_id)
    :  building_actual(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_bars_floorst::building_bars_floorst(virtual_identity *_id)
    :  building_actual(_id), timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_bars_verticalst::building_bars_verticalst(virtual_identity *_id)
    :  building_actual(_id), timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_bedst::building_bedst(virtual_identity *_id)
    :  building_actual(_id), specific_squad(-1), specific_position(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_boxst::building_boxst(virtual_identity *_id)
    :  building_actual(_id), anon_1(0), specific_squad(-1), specific_position(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_bridgest::building_bridgest(virtual_identity *_id)
    :  building_actual(_id), timer(0), direction(Retracting), material_amount(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_cabinetst::building_cabinetst(virtual_identity *_id)
    :  building_actual(_id), anon_1(0), specific_squad(-1), specific_position(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_cagest::building_cagest(virtual_identity *_id)
    :  building_actual(_id), fill_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_chainst::building_chainst(virtual_identity *_id)
    :  building_actual(_id), assigned(0), chained(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_chairst::building_chairst(virtual_identity *_id)
    :  building_actual(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_civzonest::building_civzonest(virtual_identity *_id)
    :  building(_id), type(ENUM_FIRST_ITEM(civzone_type)), anon_1(-1), abstract_building_id(-1), anon_2(-1), anon_3(-1), zone_num(-1), anon_4(0), fill_timer(0), unk_v4014_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_coffinst::building_coffinst(virtual_identity *_id)
    :  building_actual(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_constructionst::building_constructionst(virtual_identity *_id)
    :  building_actual(_id), type(ENUM_FIRST_ITEM(construction_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_def::building_def(virtual_identity *_id)
    :  id(0), building_type(ENUM_FIRST_ITEM(building_type)), building_subtype(0), build_key(0), needs_magma(0), dim_x(0), dim_y(0), workloc_x(0), workloc_y(0), build_stages(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 3; anon_1++) {
      name_color[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 4; anon_2++) {
      for (int anon_3 = 0; anon_3 < 31; anon_3++) {
        for (int anon_4 = 0; anon_4 < 31; anon_4++) {
          tile[anon_2][anon_3][anon_4] = 0;
        }
      }
    }
    for (int anon_5 = 0; anon_5 < 3; anon_5++) {
      for (int anon_6 = 0; anon_6 < 4; anon_6++) {
        for (int anon_7 = 0; anon_7 < 31; anon_7++) {
          for (int anon_8 = 0; anon_8 < 31; anon_8++) {
            tile_color[anon_5][anon_6][anon_7][anon_8] = 0;
          }
        }
      }
    }
    for (int anon_9 = 0; anon_9 < 31; anon_9++) {
      for (int anon_10 = 0; anon_10 < 31; anon_10++) {
        tile_block[anon_9][anon_10] = 0;
      }
    }
  }
  df::building_def_furnacest::building_def_furnacest(virtual_identity *_id)
    :  building_def(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_def_item::building_def_item()
    :  item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(-1), flags4(0), flags5(0), metal_ore(-1), min_dimension(0), quantity(0), has_tool_use(ENUM_FIRST_ITEM(tool_uses))
  {
  }
  df::building_def_workshopst::building_def_workshopst(virtual_identity *_id)
    :  building_def(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_design::building_design()
    :  architect(-1), unk2(-1), design_skill(0), builder1(-1), unk5(-1), build_skill(0), build_timer1(0), builder2(-1), build_timer2(0), quality1(ENUM_FIRST_ITEM(item_quality)), quality2(ENUM_FIRST_ITEM(item_quality)), hitpoints(0), max_hitpoints(0)
  {
  }
  df::building_doorst::building_doorst(virtual_identity *_id)
    :  building_actual(_id), close_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_drawbuffer::building_drawbuffer()
    :  x1(0), x2(0), y1(0), y2(0)
  {
    for (int anon_1 = 0; anon_1 < 31; anon_1++) {
      for (int anon_2 = 0; anon_2 < 31; anon_2++) {
        tile[anon_1][anon_2] = 0;
      }
    }
    for (int anon_3 = 0; anon_3 < 31; anon_3++) {
      for (int anon_4 = 0; anon_4 < 31; anon_4++) {
        fore[anon_3][anon_4] = 0;
      }
    }
    for (int anon_5 = 0; anon_5 < 31; anon_5++) {
      for (int anon_6 = 0; anon_6 < 31; anon_6++) {
        back[anon_5][anon_6] = 0;
      }
    }
    for (int anon_7 = 0; anon_7 < 31; anon_7++) {
      for (int anon_8 = 0; anon_8 < 31; anon_8++) {
        bright[anon_7][anon_8] = 0;
      }
    }
  }
  df::building_extents::building_extents()
    :  extents(0), x(0), y(0), width(0), height(0)
  {
  }
  df::building_farmplotst::building_farmplotst(virtual_identity *_id)
    :  building_actual(_id), material_amount(0), seasonal_fertilize(0), anon_1(-1), current_fertilization(0), max_fertilization(0), terrain_purge_timer(500)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_2 = 0; anon_2 < 4; anon_2++) {
      plant_id[anon_2] = -1;
    }
  }
  df::building_floodgatest::building_floodgatest(virtual_identity *_id)
    :  building_actual(_id), timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_furnacest::building_furnacest(virtual_identity *_id)
    :  building_actual(_id), unk_108(0), type(ENUM_FIRST_ITEM(furnace_type)), custom_type(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_gear_assemblyst::building_gear_assemblyst(virtual_identity *_id)
    :  building_actual(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_grate_floorst::building_grate_floorst(virtual_identity *_id)
    :  building_actual(_id), timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_grate_wallst::building_grate_wallst(virtual_identity *_id)
    :  building_actual(_id), timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_hatchst::building_hatchst(virtual_identity *_id)
    :  building_actual(_id), close_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_hivest::building_hivest(virtual_identity *_id)
    :  building_actual(_id), split_timer(0), activity_timer(0), install_timer(0), gather_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_nest_boxst::building_nest_boxst(virtual_identity *_id)
    :  building_actual(_id), claimed_by(-1), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_nestst::building_nestst(virtual_identity *_id)
    :  building_actual(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_road_dirtst::building_road_dirtst(virtual_identity *_id)
    :  building_roadst(_id), material_amount(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_road_pavedst::building_road_pavedst(virtual_identity *_id)
    :  building_roadst(_id), material_amount(0), terrain_purge_timer(500)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_roadst::building_roadst(virtual_identity *_id)
    :  building_actual(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_rollersst::building_rollersst(virtual_identity *_id)
    :  building_actual(_id), direction(ENUM_FIRST_ITEM(screw_pump_direction)), speed(50000)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_screw_pumpst::building_screw_pumpst(virtual_identity *_id)
    :  building_actual(_id), pump_energy(0), direction(ENUM_FIRST_ITEM(screw_pump_direction)), pump_manually(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_shopst::building_shopst(virtual_identity *_id)
    :  building_actual(_id), owner(0), timer(0), type(ENUM_FIRST_ITEM(shop_type))
  {
    _identity.adjust_vtable(this, _id);
    shop_flags.whole = 1;
  }
  df::building_siegeenginest::building_siegeenginest(virtual_identity *_id)
    :  building_actual(_id), type(ENUM_FIRST_ITEM(siegeengine_type)), facing(Left), action(NotInUse), fire_timer(0), fill_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_slabst::building_slabst(virtual_identity *_id)
    :  building_actual(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_squad_use::building_squad_use()
    :  squad_id(-1)
  {
  }
  df::building_statuest::building_statuest(virtual_identity *_id)
    :  building_actual(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_stockpilest::building_stockpilest(virtual_identity *_id)
    :  building(_id), max_barrels(0), max_bins(0), max_wheelbarrows(0), use_links_only(0), stockpile_number(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_supportst::building_supportst(virtual_identity *_id)
    :  building_actual(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_tablest::building_tablest(virtual_identity *_id)
    :  building_actual(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_traction_benchst::building_traction_benchst(virtual_identity *_id)
    :  building_actual(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_tradedepotst::building_tradedepotst(virtual_identity *_id)
    :  building_actual(_id), accessible(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_trapst::building_trapst(virtual_identity *_id)
    :  building_actual(_id), trap_type(ENUM_FIRST_ITEM(trap_type)), state(0), ready_timeout(0), fill_timer(0), friction(50000), use_dump(0), dump_x_shift(0), dump_y_shift(0), stop_trigger_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_users::building_users()
  {
  }
  df::building_wagonst::building_wagonst(virtual_identity *_id)
    :  building_actual(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_water_wheelst::building_water_wheelst(virtual_identity *_id)
    :  building_actual(_id), is_vertical(0), gives_power(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_weaponrackst::building_weaponrackst(virtual_identity *_id)
    :  building_actual(_id), unk_c0(0), specific_squad(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_weaponst::building_weaponst(virtual_identity *_id)
    :  building_actual(_id), timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_wellst::building_wellst(virtual_identity *_id)
    :  building_actual(_id), anon_1(0), bucket_z(0), bucket_timer(0), check_water_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_windmillst::building_windmillst(virtual_identity *_id)
    :  building_actual(_id), orient_angle(-1), orient_mode(0), is_working(0), visual_rotated(0), rotate_timer(0), orient_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_window_gemst::building_window_gemst(virtual_identity *_id)
    :  building_windowst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_window_glassst::building_window_glassst(virtual_identity *_id)
    :  building_windowst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_windowst::building_windowst(virtual_identity *_id)
    :  building_actual(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::building_workshopst::building_workshopst(virtual_identity *_id)
    :  building_actual(_id), type(ENUM_FIRST_ITEM(workshop_type)), custom_type(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::burrow::burrow()
    :  id(0), tile(0), fg_color(0), bg_color(0), anon_1(0)
  {
  }
  df::campfire::campfire()
    :  timer(0)
  {
  }
  df::caravan_state::caravan_state()
    :  total_capacity(0), anon_1(0), trade_state(0), depot_notified(0), time_remaining(0), entity(-1), import_value(0), export_value_total(0), export_value_personal(0), offer_value(0), sell_prices(0), buy_prices(0), anon_2(0), anon_3(0)
  {
  }
  df::caste_attack::caste_attack()
    :  contact_perc(0), penetration_perc(0), unk_v40_1(0), unk_v40_2(0), skill(ENUM_FIRST_ITEM(job_skill)), velocity_modifier(0), unk_v40_3(0), unk_v40_4(0)
  {
  }
  df::caste_body_info::T_interactions::T_unk::T_unk()
    :  material_breath(ENUM_FIRST_ITEM(breath_attack_type)), anon_7(0), anon_8(0), wait_period(0)
  {
  }
  df::caste_body_info::T_interactions::T_interactions()
    :  type(0)
  {
  }
  df::caste_body_info::T_extra_butcher_objects::T_extra_butcher_objects()
    :  anon_1(0), anon_3(0), anon_9(0), anon_10(0), anon_11(0), anon_12(0), anon_13(0)
  {
  }
  df::caste_body_info::caste_body_info()
    :  total_relsize(0), fraction_total(0), fraction_base(0), fraction_fat(0), fraction_muscle(0)
  {
    for (int anon_2 = 0; anon_2 < 11; anon_2++) {
      unk_v40_2[anon_2] = 0;
    }
  }
  df::caste_clothing_item::caste_clothing_item()
    :  body_part_id(0), unk_4(0)
  {
    for (int anon_1 = 0; anon_1 < 3; anon_1++) {
      item[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 3; anon_2++) {
      unk_14[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 3; anon_3++) {
      size[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 3; anon_4++) {
      permit[anon_4] = 0;
    }
    for (int anon_5 = 0; anon_5 < 3; anon_5++) {
      unk_38[anon_5] = 0;
    }
  }
  df::caste_raw::T_misc::T_misc()
    :  litter_size_min(0), litter_size_max(0), penetratepower(0), vermin_bite_chance(0), grasstrample(0), buildingdestroyer(0), itemcorpse_itemtype(ENUM_FIRST_ITEM(item_type)), itemcorpse_itemsubtype(0), itemcorpse_materialtype(-1), itemcorpse_materialindex(0), itemcorpse_quality(0), difficulty(0), beach_frequency(0), clutch_size_min(0), clutch_size_max(0), vision_arc_min(0), vision_arc_max(0), speed(0), modvalue(0), petvalue(0), milkable(0), viewrange(0), maxage_min(0), maxage_max(0), baby_age(0), child_age(0), swim_speed(0), trade_capacity(0), unk4(0), pop_ratio(0), adult_size(0), bone_mat(-1), bone_matidx(0), fish_mat_index(-1), egg_mat_index(-1), egg_size(0), grazer(0), petvalue_divisor(0), prone_to_rage(0)
  {
    for (int anon_1 = 0; anon_1 < 3; anon_1++) {
      remains_color[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 3; anon_2++) {
      caste_glowcolor[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 3; anon_3++) {
      attack_trigger[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 29; anon_4++) {
      unk6[anon_4] = 0;
    }
  }
  df::caste_raw::T_personality::T_personality()
  {
    for (int anon_1 = 0; anon_1 < 50; anon_1++) {
      a[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 50; anon_2++) {
      b[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 50; anon_3++) {
      c[anon_3] = 0;
    }
  }
  df::caste_raw::T_attributes::T_attributes()
  {
    for (int anon_1 = 0; anon_1 < 6; anon_1++) {
      for (int anon_2 = 0; anon_2 < 7; anon_2++) {
        phys_att_range[anon_1][anon_2] = 0;
      }
    }
    for (int anon_3 = 0; anon_3 < 13; anon_3++) {
      for (int anon_4 = 0; anon_4 < 7; anon_4++) {
        ment_att_range[anon_3][anon_4] = 0;
      }
    }
    for (int anon_5 = 0; anon_5 < 6; anon_5++) {
      for (int anon_6 = 0; anon_6 < 4; anon_6++) {
        phys_att_rates[anon_5][anon_6] = 0;
      }
    }
    for (int anon_7 = 0; anon_7 < 13; anon_7++) {
      for (int anon_8 = 0; anon_8 < 4; anon_8++) {
        ment_att_rates[anon_7][anon_8] = 0;
      }
    }
    for (int anon_9 = 0; anon_9 < 6; anon_9++) {
      phys_att_cap_perc[anon_9] = 0;
    }
    for (int anon_10 = 0; anon_10 < 13; anon_10++) {
      ment_att_cap_perc[anon_10] = 0;
    }
  }
  df::caste_raw::T_bp_appearance::T_bp_appearance()
  {
  }
  df::caste_raw::T_shearable_tissue_layer::T_shearable_tissue_layer()
    :  unk_0(0), unk_1(0), length(0)
  {
  }
  df::caste_raw::T_caste_profession_name::T_caste_profession_name()
  {
  }
  df::caste_raw::T_extracts::T_extracts()
    :  milkable_mat(0), milkable_matidx(0), webber_mat(0), webber_matidx(0), vermin_bite_mat(0), vermin_bite_matidx(0), vermin_bite_chance(0), tendons_mat(0), tendons_matidx(0), tendons_heal(0), ligaments_mat(0), ligaments_matidx(0), ligaments_heal(0), blood_state(0), blood_mat(0), blood_matidx(0), pus_state(0), pus_mat(0), pus_matidx(0)
  {
  }
  df::caste_raw::T_secretion::T_secretion()
    :  mat_type(-1), mat_index(0), mat_state(ENUM_FIRST_ITEM(matter_state)), cause(0)
  {
  }
  df::caste_raw::T_unknown2::T_unknown2()
    :  helm_size(0), mat_type(-1), mat_index(0)
  {
    for (int anon_1 = 0; anon_1 < 4; anon_1++) {
      for (int anon_2 = 0; anon_2 < 4; anon_2++) {
        armor_sizes[anon_1][anon_2] = 0;
      }
    }
    for (int anon_3 = 0; anon_3 < 4; anon_3++) {
      pants_sizes[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 4; anon_4++) {
      shield_sizes[anon_4] = 0;
    }
    for (int anon_5 = 0; anon_5 < 4; anon_5++) {
      shoes_sizes[anon_5] = 0;
    }
    for (int anon_6 = 0; anon_6 < 4; anon_6++) {
      gloves_sizes[anon_6] = 0;
    }
  }
  df::caste_raw::caste_raw()
    :  caste_tile(0), caste_soldier_tile(0), caste_alttile(0), caste_soldier_alttile(0), caste_glowtile(0), homeotherm(0), min_temp(0), max_temp(0), fixed_temp(0), flags(ENUM_LAST_ITEM(caste_raw_flags)), index(0), gender(0), smell_trigger(0), odor_level(0), low_light_vision(0)
  {
    for (int anon_8 = 0; anon_8 < 3; anon_8++) {
      caste_color[anon_8] = 0;
    }
    for (int anon_9 = 0; anon_9 < 4; anon_9++) {
      for (int anon_10 = 0; anon_10 < 118; anon_10++) {
        skill_rates[anon_9][anon_10] = 0;
      }
    }
    for (int anon_11 = 0; anon_11 < 3; anon_11++) {
      orientation_male[anon_11] = 0;
    }
    for (int anon_12 = 0; anon_12 < 3; anon_12++) {
      orientation_female[anon_12] = 0;
    }
    for (int anon_15 = 0; anon_15 < 2; anon_15++) {
      unk18[anon_15] = 0;
    }
    for (int anon_16 = 0; anon_16 < 2; anon_16++) {
      habit_num[anon_16] = 0;
    }
  }
  df::cave_column::cave_column(virtual_identity *_id)
    :  anon_1(0), anon_2(0), anon_3(30000), anon_4(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::cave_column_link::cave_column_link()
    :  item(0), prev(0), next(0)
  {
  }
  df::cave_column_rectangle::cave_column_rectangle(virtual_identity *_id)
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_10(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::coin_batch::T_image_front::T_image_front()
    :  id(-1), subid(-1)
  {
  }
  df::coin_batch::T_image_back::T_image_back()
    :  id(-1), subid(-1)
  {
  }
  df::coin_batch::coin_batch()
    :  year(0), mat_type(-1), mat_index(0), entity(-1), ruler(-1)
  {
  }
  df::color_modifier_raw::color_modifier_raw()
    :  unk5(0), start_date(0), end_date(0), unk6(0), unk_6c(0), unk_6e(0), unk_70(0), id(0)
  {
  }
  df::construction::construction()
    :  item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0), original_tile(ENUM_FIRST_ITEM(tiletype))
  {
  }
  df::conversation::T_speech::T_speech()
    :  speaker(-1), unk_14(0), unk_18(0), fg(0), bg(0), bright(0)
  {
  }
  df::conversation::conversation()
    :  state(started), unk_30(-1), unk_34(-1), unk_38(0), unk_3c(-1), unk_40(-1), unk_44(0), unk_48(-1), unk_4c(-1), unk_50(0), unk_74(0), unk_78(0), unk_7c(0), unk_80(0), location(0), unk_b8(0), unk_bc(0)
  {
  }
  df::coord::coord()
    :  x(-30000), y(-30000), z(-30000)
  {
  }
  df::coord2d::coord2d()
    :  x(-30000), y(-30000)
  {
  }
  df::coord2d_path::coord2d_path()
  {
  }
  df::coord_path::coord_path()
  {
  }
  df::creature_graphics_appointment::creature_graphics_appointment()
  {
    for (int anon_1 = 0; anon_1 < 6; anon_1++) {
      texpos[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 6; anon_2++) {
      texpos_gs[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 6; anon_3++) {
      add_color[anon_3] = 0;
    }
  }
  df::creature_interaction_effect::T_counter_trigger::T_counter_trigger()
  {
  }
  df::creature_interaction_effect::creature_interaction_effect(virtual_identity *_id)
    :  prob(0), start(0), peak(0), end(0), syn_id(-1), id(0), syn_index(0), moon_phase_min(0), moon_phase_max(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_add_simple_flagst::creature_interaction_effect_add_simple_flagst(virtual_identity *_id)
    :  creature_interaction_effect(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_bleedingst::creature_interaction_effect_bleedingst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_blistersst::creature_interaction_effect_blistersst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_body_mat_interactionst::creature_interaction_effect_body_mat_interactionst(virtual_identity *_id)
    :  creature_interaction_effect(_id), unk_88(0), unk_8c(0), unk_90(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_body_transformationst::creature_interaction_effect_body_transformationst(virtual_identity *_id)
    :  creature_interaction_effect(_id), chance(0), race(-1), caste(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_bp_appearance_modifierst::creature_interaction_effect_bp_appearance_modifierst(virtual_identity *_id)
    :  creature_interaction_effect(_id), unk_6c(0), value(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_bruisingst::creature_interaction_effect_bruisingst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_can_do_interactionst::creature_interaction_effect_can_do_interactionst(virtual_identity *_id)
    :  creature_interaction_effect(_id), unk_e0(0), type_id(-1), unk_1e8(0), usage_delay(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(unk_e2, 0, sizeof(unk_e2));
  }
  df::creature_interaction_effect_cough_bloodst::creature_interaction_effect_cough_bloodst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_display_namest::creature_interaction_effect_display_namest(virtual_identity *_id)
    :  creature_interaction_effect(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_display_symbolst::creature_interaction_effect_display_symbolst(virtual_identity *_id)
    :  creature_interaction_effect(_id), tile(0), color(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_dizzinessst::creature_interaction_effect_dizzinessst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_drowsinessst::creature_interaction_effect_drowsinessst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_feverst::creature_interaction_effect_feverst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_flash_symbolst::creature_interaction_effect_flash_symbolst(virtual_identity *_id)
    :  creature_interaction_effect(_id), period(0), time(0), unk_78(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 4; anon_1++) {
      sym_color[anon_1] = 0;
    }
  }
  df::creature_interaction_effect_impair_functionst::creature_interaction_effect_impair_functionst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_material_force_adjustst::creature_interaction_effect_material_force_adjustst(virtual_identity *_id)
    :  creature_interaction_effect(_id), mat_type(-1), mat_index(0), fraction_mul(0), fraction_div(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_ment_att_changest::creature_interaction_effect_ment_att_changest(virtual_identity *_id)
    :  creature_interaction_effect(_id)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 13; anon_1++) {
      ment_att_perc[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 13; anon_2++) {
      ment_att_add[anon_2] = 0;
    }
  }
  df::creature_interaction_effect_nauseast::creature_interaction_effect_nauseast(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_necrosisst::creature_interaction_effect_necrosisst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_numbnessst::creature_interaction_effect_numbnessst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_oozingst::creature_interaction_effect_oozingst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_painst::creature_interaction_effect_painst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_paralysisst::creature_interaction_effect_paralysisst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_phys_att_changest::creature_interaction_effect_phys_att_changest(virtual_identity *_id)
    :  creature_interaction_effect(_id)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 6; anon_1++) {
      phys_att_perc[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 6; anon_2++) {
      phys_att_add[anon_2] = 0;
    }
  }
  df::creature_interaction_effect_remove_simple_flagst::creature_interaction_effect_remove_simple_flagst(virtual_identity *_id)
    :  creature_interaction_effect(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_sense_creature_classst::creature_interaction_effect_sense_creature_classst(virtual_identity *_id)
    :  creature_interaction_effect(_id), unk_88(0), unk_8a(0), unk_8c(0), unk_8e(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_skill_roll_adjustst::creature_interaction_effect_skill_roll_adjustst(virtual_identity *_id)
    :  creature_interaction_effect(_id), multiplier(0), chance(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_speed_changest::creature_interaction_effect_speed_changest(virtual_identity *_id)
    :  creature_interaction_effect(_id), bonus_add(0), bonus_perc(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_swellingst::creature_interaction_effect_swellingst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_target::creature_interaction_effect_target()
  {
  }
  df::creature_interaction_effect_unconsciousnessst::creature_interaction_effect_unconsciousnessst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_interaction_effect_vomit_bloodst::creature_interaction_effect_vomit_bloodst(virtual_identity *_id)
    :  creature_interaction_effect(_id), sev(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::creature_raw::T_graphics::T_graphics()
  {
    for (int anon_1 = 0; anon_1 < 6; anon_1++) {
      texpos[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 6; anon_2++) {
      texpos_gs[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 6; anon_3++) {
      for (int anon_4 = 0; anon_4 < 15; anon_4++) {
        entity_link_texpos[anon_3][anon_4] = 0;
      }
    }
    for (int anon_5 = 0; anon_5 < 6; anon_5++) {
      for (int anon_6 = 0; anon_6 < 15; anon_6++) {
        entity_link_texpos_gs[anon_5][anon_6] = 0;
      }
    }
    for (int anon_7 = 0; anon_7 < 6; anon_7++) {
      for (int anon_8 = 0; anon_8 < 7; anon_8++) {
        site_link_texpos[anon_7][anon_8] = 0;
      }
    }
    for (int anon_9 = 0; anon_9 < 6; anon_9++) {
      for (int anon_10 = 0; anon_10 < 7; anon_10++) {
        site_link_texpos_gs[anon_9][anon_10] = 0;
      }
    }
    for (int anon_11 = 0; anon_11 < 6; anon_11++) {
      for (int anon_12 = 0; anon_12 < 112; anon_12++) {
        profession_texpos[anon_11][anon_12] = 0;
      }
    }
    for (int anon_13 = 0; anon_13 < 6; anon_13++) {
      for (int anon_14 = 0; anon_14 < 112; anon_14++) {
        profession_texpos_gs[anon_13][anon_14] = 0;
      }
    }
    for (int anon_15 = 0; anon_15 < 6; anon_15++) {
      add_color[anon_15] = 0;
    }
    for (int anon_16 = 0; anon_16 < 6; anon_16++) {
      for (int anon_17 = 0; anon_17 < 15; anon_17++) {
        entity_link_add_color[anon_16][anon_17] = 0;
      }
    }
    for (int anon_18 = 0; anon_18 < 6; anon_18++) {
      for (int anon_19 = 0; anon_19 < 7; anon_19++) {
        site_link_add_color[anon_18][anon_19] = 0;
      }
    }
    for (int anon_20 = 0; anon_20 < 6; anon_20++) {
      for (int anon_21 = 0; anon_21 < 112; anon_21++) {
        profession_add_color[anon_20][anon_21] = 0;
      }
    }
  }
  df::creature_raw::T_profession_name::T_profession_name()
  {
  }
  df::creature_raw::T_hive_product::T_hive_product()
  {
  }
  df::creature_raw::creature_raw()
    :  creature_tile(0), creature_soldier_tile(0), alttile(0), soldier_alttile(0), glowtile(0), temperature1(0), temperature2(0), frequency(0), adultsize(0), flags(ENUM_LAST_ITEM(creature_raw_flags)), underground_layer_min(0), underground_layer_max(0), source_hfid(-1), next_modifier_id(0)
  {
    for (int anon_4 = 0; anon_4 < 2; anon_4++) {
      population_number[anon_4] = 0;
    }
    for (int anon_5 = 0; anon_5 < 2; anon_5++) {
      cluster_number[anon_5] = 0;
    }
    for (int anon_6 = 0; anon_6 < 2; anon_6++) {
      triggerable_group[anon_6] = 0;
    }
    for (int anon_7 = 0; anon_7 < 3; anon_7++) {
      color[anon_7] = 0;
    }
    for (int anon_8 = 0; anon_8 < 3; anon_8++) {
      glowcolor[anon_8] = 0;
    }
  }
  df::creature_variation::creature_variation()
  {
  }
  df::creature_variation_convert_tag::creature_variation_convert_tag()
    :  unk_v40_1(-1)
  {
  }
  df::crime::T_punishment::T_punishment()
    :  hammerstrikes(0), prison_time(0), give_beating(0)
  {
  }
  df::crime::T_anon_1::T_anon_1()
    :  death_id(-1), crime_id(-1), unk1(0), event_year(0), event_time(0), witness(-1), accuses(-1), report_year(0), report_time(0)
  {
  }
  df::crime::crime()
    :  id(0), mode(ProductionOrderViolation), criminal(-1), convicted(-1), victim(-1), death_id(-1), event_year(0), event_time(0), discovered_year(0), discovered_time(0), site(-1), entity(-1)
  {
  }
  df::cultural_identity::T_unk_c::T_unk_c()
    :  group_id(-1), unk_4(-1), unk_8(-1), unk_c(-1), unk_10(-1), unk_14(-1), unk_18(-1), unk_1c(0), unk_20(0), unk_44(100)
  {
  }
  df::cultural_identity::cultural_identity()
    :  id(0), site_id(-1), civ_id(-1), unk_d8(0), unk_ec(0), unk_f0(0), unk_f4(0), unk_f8(0)
  {
    for (int anon_1 = 0; anon_1 < 22; anon_1++) {
      unk_1c[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 32; anon_2++) {
      unk_48[anon_2] = 0;
    }
  }
  df::curse_attr_change::curse_attr_change()
  {
    for (int anon_1 = 0; anon_1 < 6; anon_1++) {
      phys_att_perc[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 6; anon_2++) {
      phys_att_add[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 13; anon_3++) {
      ment_att_perc[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 13; anon_4++) {
      ment_att_add[anon_4] = 0;
    }
  }
  df::d_init::T_wound_color::T_wound_color()
  {
    for (int anon_1 = 0; anon_1 < 3; anon_1++) {
      none[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 3; anon_2++) {
      minor[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 3; anon_3++) {
      inhibited[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 3; anon_4++) {
      function_loss[anon_4] = 0;
    }
    for (int anon_5 = 0; anon_5 < 3; anon_5++) {
      broken[anon_5] = 0;
    }
    for (int anon_6 = 0; anon_6 < 3; anon_6++) {
      missing[anon_6] = 0;
    }
  }
  df::d_init::T_store_dist::T_store_dist()
    :  item_decrease(0), seed_combine(0), bucket_combine(0), barrel_combine(0), bin_combine(0)
  {
  }
  df::d_init::d_init()
    :  flags1(ENUM_LAST_ITEM(d_init_flags1)), sky_tile(0), chasm_tile(0), pillar_tile(0), idlers(ENUM_FIRST_ITEM(d_init_idlers)), show_embark_tunnel(ENUM_FIRST_ITEM(d_init_tunnel)), flags2(ENUM_LAST_ITEM(d_init_flags2)), display_length(0), adventurer_z_view(ENUM_FIRST_ITEM(d_init_z_view)), adventurer_z_view_size(0), flags3(ENUM_LAST_ITEM(d_init_flags3)), population_cap(0), strict_population_cap(0), baby_cap_absolute(0), baby_cap_percent(0), specific_seed_cap(0), fortress_seed_cap(0), graze_coefficient(0), flags4(ENUM_LAST_ITEM(d_init_flags4)), post_prepare_embark_confirmation(ENUM_FIRST_ITEM(d_init_embark_confirm))
  {
    for (int anon_1 = 0; anon_1 < 10; anon_1++) {
      nickname[anon_1] = ENUM_FIRST_ITEM(d_init_nickname);
    }
    for (int anon_2 = 0; anon_2 < 3; anon_2++) {
      sky_color[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 15; anon_3++) {
      track_tiles[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 15; anon_4++) {
      track_tile_invert[anon_4] = 0;
    }
    for (int anon_5 = 0; anon_5 < 15; anon_5++) {
      track_ramp_tiles[anon_5] = 0;
    }
    for (int anon_6 = 0; anon_6 < 15; anon_6++) {
      track_ramp_invert[anon_6] = 0;
    }
    for (int anon_7 = 0; anon_7 < 104; anon_7++) {
      tree_tiles[anon_7] = 0;
    }
    for (int anon_8 = 0; anon_8 < 3; anon_8++) {
      chasm_color[anon_8] = 0;
    }
    for (int anon_9 = 0; anon_9 < 4; anon_9++) {
      path_cost[anon_9] = 0;
    }
    for (int anon_10 = 0; anon_10 < 2; anon_10++) {
      embark_rect[anon_10] = 0;
    }
    for (int anon_11 = 0; anon_11 < 2; anon_11++) {
      set_labor_lists[anon_11] = 0;
    }
  }
  df::deep_vein_hollow::deep_vein_hollow()
    :  anon_1(0), anon_2(0)
  {
  }
  df::descriptor_color::descriptor_color()
    :  color(0), bold(0), red(0), green(0), blue(0)
  {
  }
  df::descriptor_pattern::descriptor_pattern()
    :  pattern(ENUM_FIRST_ITEM(pattern_type))
  {
  }
  df::descriptor_shape::descriptor_shape()
    :  tile(0)
  {
  }
  df::dipscript_info::dipscript_info()
    :  id(0)
  {
  }
  df::dipscript_popup::dipscript_popup()
    :  meeting_holder(0), activity(0)
  {
  }
  df::dye_info::dye_info()
    :  mat_type(-1), mat_index(0), dyer(-1), quality(ENUM_FIRST_ITEM(item_quality)), skill_rating(ENUM_FIRST_ITEM(skill_rating)), anon_1(0)
  {
  }
  df::effect_info::effect_info()
    :  id(0), anon_1(0), type(0), foreground(0), background(0), bright(0), timer(0)
  {
  }
  df::embark_item_choice::T_list::T_list()
    :  item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mattype(-1), matindex(0), unk_c(0)
  {
  }
  df::embark_item_choice::embark_item_choice()
  {
  }
  df::embark_location::embark_location()
    :  reclaim_site(-1), reclaim_idx(0)
  {
  }
  df::enabler::T_overridden_grid_sizes::T_overridden_grid_sizes()
    :  anon_1(0), anon_2(0)
  {
  }
  df::enabler::T_async_tobox::T_queue::T_queue()
    :  cmd(pause), val(0)
  {
  }
  df::enabler::T_async_tobox::T_async_tobox()
    :  sem(0), sem_fill(0)
  {
  }
  df::enabler::T_async_frombox::T_queue::T_queue()
    :  msg(quit)
  {
    fps = 0;
  }
  df::enabler::T_async_frombox::T_async_frombox()
    :  sem(0), sem_fill(0)
  {
  }
  df::enabler::T_async_zoom::T_async_zoom()
    :  sem(0), sem_fill(0)
  {
  }
  df::enabler::T_textures::T_textures()
    :  uploaded(0), gl_catalog(0), gl_texpos(0)
  {
  }
  df::enabler::T_simticks::T_simticks()
    :  sem(0), value(0)
  {
  }
  df::enabler::T_gputicks::T_gputicks()
    :  sem(0), value(0)
  {
  }
  df::enabler::enabler()
    :  fullscreen(0), renderer(0), calculated_fps(0), calculated_gfps(0), frame_sum(0), gframe_sum(0), frame_last(0), gframe_last(0), fps(0), gfps(0), fps_per_gfps(0), last_tick(0), outstanding_frames(0), outstanding_gframes(0), async_frames(0), async_paused(0), async_fromcomplete(0), renderer_threadid(0), mouse_lbut(0), mouse_rbut(0), mouse_lbut_down(0), mouse_rbut_down(0), mouse_lbut_lift(0), mouse_rbut_lift(0), tracking_on(0), sync(0), clock(0)
  {
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      for (int anon_2 = 0; anon_2 < 3; anon_2++) {
        ccolor[anon_1][anon_2] = 0;
      }
    }
  }
  df::engraving::engraving()
    :  artist(-1), masterpiece_event(-1), skill_rating(ENUM_FIRST_ITEM(skill_rating)), tile(0), art_id(-1), art_subid(-1), quality(ENUM_FIRST_ITEM(item_quality)), unk1(-1), unk2(-1)
  {
  }
  df::entity_activity_statistics::T_food::T_food()
    :  total(0), meat(0), fish(0), other(0), seeds(0), plant(0), drink(0)
  {
  }
  df::entity_activity_statistics::T_wealth::T_wealth()
    :  total(0), weapons(0), armor(0), furniture(0), other(0), architecture(0), displayed(0), held(0), imported(0), anon_1(0), exported(0)
  {
  }
  df::entity_activity_statistics::entity_activity_statistics()
    :  population(0), anon_1(0), anon_2(0), anon_3(0), trained_animals(0), other_animals(0), anon_4(0), anon_5(0), excavated_tiles(0), total_deaths(0), total_insanities(0), total_executions(0), num_artifacts(0), anon_6(0), discovered_water_features(0), discovered_subterranean_features(0), discovered_chasm_features(0), discovered_magma_features(0), discovered_feature_layers(0), migrant_wave_idx(0)
  {
    for (int anon_7 = 0; anon_7 < 152; anon_7++) {
      unit_counts[anon_7] = 0;
    }
    for (int anon_8 = 0; anon_8 < 112; anon_8++) {
      item_counts[anon_8] = 0;
    }
    for (int anon_9 = 0; anon_9 < 7; anon_9++) {
      for (int anon_10 = 0; anon_10 < 260; anon_10++) {
        recent_jobs[anon_9][anon_10] = 0;
      }
    }
    for (int anon_11 = 0; anon_11 < 5; anon_11++) {
      death_history[anon_11] = 0;
    }
    for (int anon_12 = 0; anon_12 < 5; anon_12++) {
      insanity_history[anon_12] = 0;
    }
    for (int anon_13 = 0; anon_13 < 5; anon_13++) {
      execution_history[anon_13] = 0;
    }
    for (int anon_14 = 0; anon_14 < 5; anon_14++) {
      noble_death_history[anon_14] = 0;
    }
  }
  df::entity_buy_prices::entity_buy_prices()
    :  items(0)
  {
  }
  df::entity_buy_requests::entity_buy_requests()
  {
  }
  df::entity_claim_mask::T_map::T_map()
  {
  }
  df::entity_claim_mask::entity_claim_mask()
    :  map(0), width(0), height(0)
  {
  }
  df::entity_entity_link::entity_entity_link()
    :  type(ENUM_FIRST_ITEM(entity_entity_link_type)), target(-1), strength(0)
  {
  }
  df::entity_event::entity_event()
    :  year(0), year_tick(0), anon_1(0), anon_2(0), anon_3(0), type(ENUM_FIRST_ITEM(entity_event_type))
  {
    data.invasion.entity_id = -1;
    data.invasion.site_id = -1;
    data.invasion.anon_1 = 0;
    data.invasion.anon_2 = 0;
  }
  df::entity_population::entity_population()
    :  unk5(0), unk6(0), id(0), flags(0), civ_id(-1)
  {
  }
  df::entity_population_unk4::T_anon_1::T_anon_1()
    :  idx(0), unk1(0), unk2(0)
  {
  }
  df::entity_population_unk4::T_anon_3::T_anon_3()
    :  idx(0), unk1(0)
  {
  }
  df::entity_population_unk4::entity_population_unk4()
  {
  }
  df::entity_position::entity_position()
    :  id(0), flags(ENUM_LAST_ITEM(entity_position_flags)), squad_size(0), land_holder(0), requires_population(0), anon_1(0), precedence(30001), replaced_by(-1), number(1), required_boxes(0), required_cabinets(0), required_racks(0), required_stands(0), required_office(0), required_bedroom(0), required_dining(0), required_tomb(0), mandate_max(0), demand_max(0)
  {
    for (int anon_9 = 0; anon_9 < 25; anon_9++) {
      responsibilities[anon_9] = 0;
    }
    for (int anon_10 = 0; anon_10 < 3; anon_10++) {
      color[anon_10] = 0;
    }
  }
  df::entity_position_assignment::entity_position_assignment()
    :  id(0), histfig(-1), histfig2(-1), position_id(-1), squad_id(-1), anon_1(-1), anon_2(-1), anon_3(-1), anon_4(-1)
  {
  }
  df::entity_position_raw::entity_position_raw()
    :  id(0), flags(ENUM_LAST_ITEM(entity_position_raw_flags)), squad_size(0), land_holder(0), number(0), execution_skill(ENUM_FIRST_ITEM(job_skill)), precedence(0), replaced_by(0), required_boxes(0), required_cabinets(0), required_racks(0), required_stands(0), required_office(0), required_bedroom(0), required_dining(0), required_tomb(0), mandate_max(0), demand_max(0)
  {
    for (int anon_10 = 0; anon_10 < 25; anon_10++) {
      responsibilities[anon_10] = 0;
    }
    for (int anon_11 = 0; anon_11 < 3; anon_11++) {
      color[anon_11] = 0;
    }
  }
  df::entity_raw::T_equipment::T_equipment()
  {
  }
  df::entity_raw::T_symbols::T_symbols()
  {
  }
  df::entity_raw::T_progress_trigger::T_progress_trigger()
    :  population(0), production(0), trade(0), pop_siege(0), prod_siege(0), trade_siege(0)
  {
  }
  df::entity_raw::T_jobs::T_jobs()
  {
    for (int anon_1 = 0; anon_1 < 112; anon_1++) {
      permitted_job[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 94; anon_2++) {
      permitted_labor[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 118; anon_3++) {
      permitted_skill[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 4; anon_4++) {
      world_construction[anon_4] = 0;
    }
  }
  df::entity_raw::T_tissue_styles::T_tissue_styles()
    :  maintain_length_min(0), maintain_length_max(0)
  {
  }
  df::entity_raw::T_workshops::T_workshops()
  {
  }
  df::entity_raw::T_land_holder_trigger::T_land_holder_trigger()
  {
    for (int anon_1 = 0; anon_1 < 10; anon_1++) {
      num[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 10; anon_2++) {
      population[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 10; anon_3++) {
      wealth[anon_3] = 0;
    }
  }
  df::entity_raw::entity_raw()
    :  anon_1(0), flags(ENUM_LAST_ITEM(entity_raw_flags)), adventure_tier(0), default_site_type(0), max_site_pop_number(0), max_pop_number(0), max_starting_civ_number(0), banditry(0), source_hfid(-1)
  {
    for (int anon_3 = 0; anon_3 < 130; anon_3++) {
      sphere_alignment[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 4; anon_4++) {
      art_facet_modifier[anon_4] = 0;
    }
    for (int anon_5 = 0; anon_5 < 5; anon_5++) {
      art_image_element_modifier[anon_5] = 0;
    }
    for (int anon_6 = 0; anon_6 < 11; anon_6++) {
      item_improvement_modifier[anon_6] = 0;
    }
    for (int anon_7 = 0; anon_7 < 3; anon_7++) {
      friendly_color[anon_7] = 0;
    }
    for (int anon_8 = 0; anon_8 < 11; anon_8++) {
      likes_site[anon_8] = 0;
    }
    for (int anon_9 = 0; anon_9 < 11; anon_9++) {
      tolerates_site[anon_9] = 0;
    }
    for (int anon_10 = 0; anon_10 < 51; anon_10++) {
      biome_support[anon_10] = 0;
    }
    for (int anon_11 = 0; anon_11 < 51; anon_11++) {
      start_biome[anon_11] = 0;
    }
    for (int anon_12 = 0; anon_12 < 51; anon_12++) {
      settlement_biome[anon_12] = 0;
    }
    for (int anon_13 = 0; anon_13 < 4; anon_13++) {
      active_season[anon_13] = 0;
    }
    for (int anon_14 = 0; anon_14 < 22; anon_14++) {
      ethic[anon_14] = ENUM_FIRST_ITEM(ethic_response);
    }
    for (int anon_15 = 0; anon_15 < 32; anon_15++) {
      values[anon_15] = 0;
    }
    for (int anon_16 = 0; anon_16 < 25; anon_16++) {
      variable_positions[anon_16] = 0;
    }
    for (int anon_17 = 0; anon_17 < 25; anon_17++) {
      site_variable_positions[anon_17] = 0;
    }
  }
  df::entity_recipe::entity_recipe()
    :  subtype(-1)
  {
  }
  df::entity_sell_prices::entity_sell_prices()
    :  items(0)
  {
  }
  df::entity_sell_requests::entity_sell_requests()
  {
  }
  df::entity_site_link::T_anon_12::T_anon_12()
    :  anon_1(-1), anon_2(0)
  {
  }
  df::entity_site_link::entity_site_link()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(100), anon_10(0), anon_11(0), anon_13(0), anon_14(0)
  {
  }
  df::entity_tissue_style::entity_tissue_style()
    :  maintain_length_min(0), maintain_length_max(0), id(0)
  {
  }
  df::entity_uniform::entity_uniform()
    :  id(0), unk_4(0)
  {
  }
  df::entity_uniform_item::entity_uniform_item()
    :  random_dye(0), armorlevel(0), item_color(-1), art_image_id(0), art_image_subid(0), image_thread_color(-1), image_material_class(ENUM_FIRST_ITEM(entity_material_category)), maker_race(0), mattype(-1), matindex(0), material_class(ENUM_FIRST_ITEM(entity_material_category))
  {
  }
  df::feature::feature(virtual_identity *_id)
    :  anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_alteration::feature_alteration(virtual_identity *_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_alteration_new_lava_fill_zst::feature_alteration_new_lava_fill_zst(virtual_identity *_id)
    :  feature_alteration(_id), magma_fill_z(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_alteration_new_pop_maxst::feature_alteration_new_pop_maxst(virtual_identity *_id)
    :  feature_alteration(_id), anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_cavest::feature_cavest(virtual_identity *_id)
    :  feature(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_deep_special_tubest::feature_deep_special_tubest(virtual_identity *_id)
    :  feature(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_deep_surface_portalst::feature_deep_surface_portalst(virtual_identity *_id)
    :  feature(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init::feature_init(virtual_identity *_id)
    :  flags(ENUM_LAST_ITEM(feature_init_flags)), start_x(0), start_y(0), end_x(0), end_y(0), start_depth(0), end_depth(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_cavest::feature_init_cavest(virtual_identity *_id)
    :  feature_init(_id), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_deep_special_tubest::feature_init_deep_special_tubest(virtual_identity *_id)
    :  feature_init(_id), mat_type(-1), mat_index(0), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_deep_surface_portalst::feature_init_deep_surface_portalst(virtual_identity *_id)
    :  feature_init(_id), mat_type(-1), mat_index(0), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_magma_core_from_layerst::feature_init_magma_core_from_layerst(virtual_identity *_id)
    :  feature_init(_id), layer(-1), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_magma_poolst::feature_init_magma_poolst(virtual_identity *_id)
    :  feature_init(_id), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_outdoor_riverst::feature_init_outdoor_riverst(virtual_identity *_id)
    :  feature_init(_id), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_pitst::feature_init_pitst(virtual_identity *_id)
    :  feature_init(_id), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_subterranean_from_layerst::feature_init_subterranean_from_layerst(virtual_identity *_id)
    :  feature_init(_id), layer(-1), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_underworld_from_layerst::feature_init_underworld_from_layerst(virtual_identity *_id)
    :  feature_init(_id), layer(-1), mat_type(-1), mat_index(0), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_init_volcanost::feature_init_volcanost(virtual_identity *_id)
    :  feature_init(_id), feature(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_magma_core_from_layerst::feature_magma_core_from_layerst(virtual_identity *_id)
    :  feature(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_magma_poolst::feature_magma_poolst(virtual_identity *_id)
    :  feature(_id), magma_fill_z(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_outdoor_riverst::feature_outdoor_riverst(virtual_identity *_id)
    :  feature(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_pitst::feature_pitst(virtual_identity *_id)
    :  feature(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_subterranean_from_layerst::feature_subterranean_from_layerst(virtual_identity *_id)
    :  feature(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_underworld_from_layerst::feature_underworld_from_layerst(virtual_identity *_id)
    :  feature(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::feature_volcanost::feature_volcanost(virtual_identity *_id)
    :  feature(_id), magma_fill_z(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::file_compressorst::file_compressorst()
    :  compressed(0), in_buffer(0), in_buffersize(0), in_buffer_amount_loaded(0), in_buffer_position(0), out_buffer(0), out_buffersize(0), out_buffer_amount_written(0)
  {
  }
  df::fire::fire()
    :  timer(0), temperature(0), unk1(0), unk2(0), unk3(0)
  {
  }
  df::flow_guide::flow_guide(virtual_identity *_id)
    :  id(0), unk_8(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::flow_guide_item_cloudst::flow_guide_item_cloudst(virtual_identity *_id)
    :  flow_guide(_id), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mattype(-1), matindex(0), unk_18(0), unk_1c(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::flow_guide_trailing_flowst::flow_guide_trailing_flowst(virtual_identity *_id)
    :  flow_guide(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::flow_info::flow_info()
    :  type(ENUM_FIRST_ITEM(flow_type)), mat_type(-1), mat_index(-1), density(0), expanding(1), reuse(0), guide_id(-1)
  {
  }
  df::flow_reuse_pool::flow_reuse_pool()
    :  reuse_idx(-1)
  {
  }
  df::gait_info::gait_info()
    :  action_string_idx(-1), full_speed(0), buildup_time(0), turn_max(0), start_speed(0), energy_use(0), stealth_slows(0)
  {
  }
  df::general_ref::general_ref(virtual_identity *_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_abstract_buildingst::general_ref_abstract_buildingst(virtual_identity *_id)
    :  general_ref(_id), site_id(-1), building_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_artifact::general_ref_artifact(virtual_identity *_id)
    :  general_ref(_id), artifact_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building::general_ref_building(virtual_identity *_id)
    :  general_ref(_id), building_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_cagedst::general_ref_building_cagedst(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_chainst::general_ref_building_chainst(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_civzone_assignedst::general_ref_building_civzone_assignedst(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_destinationst::general_ref_building_destinationst(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_holderst::general_ref_building_holderst(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_nest_boxst::general_ref_building_nest_boxst(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_triggerst::general_ref_building_triggerst(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_triggertargetst::general_ref_building_triggertargetst(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_use_target_1st::general_ref_building_use_target_1st(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_use_target_2st::general_ref_building_use_target_2st(virtual_identity *_id)
    :  general_ref_building(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_building_well_tag::general_ref_building_well_tag(virtual_identity *_id)
    :  general_ref_building(_id), direction(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_coinbatch::general_ref_coinbatch(virtual_identity *_id)
    :  general_ref(_id), batch(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_contained_in_itemst::general_ref_contained_in_itemst(virtual_identity *_id)
    :  general_ref_item(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_contains_itemst::general_ref_contains_itemst(virtual_identity *_id)
    :  general_ref_item(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_contains_unitst::general_ref_contains_unitst(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_creaturest::general_ref_creaturest(virtual_identity *_id)
    :  general_ref(_id), race(-1), caste(-1), anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_entity::general_ref_entity(virtual_identity *_id)
    :  general_ref(_id), entity_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_entity_art_image::general_ref_entity_art_image(virtual_identity *_id)
    :  general_ref(_id), entity_id(-1), index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_entity_itemownerst::general_ref_entity_itemownerst(virtual_identity *_id)
    :  general_ref_entity(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_entity_offeredst::general_ref_entity_offeredst(virtual_identity *_id)
    :  general_ref_entity(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_entity_popst::general_ref_entity_popst(virtual_identity *_id)
    :  general_ref(_id), anon_1(0), race(-1), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_entity_stolenst::general_ref_entity_stolenst(virtual_identity *_id)
    :  general_ref_entity(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_feature_layerst::general_ref_feature_layerst(virtual_identity *_id)
    :  general_ref(_id), underground_region_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_historical_eventst::general_ref_historical_eventst(virtual_identity *_id)
    :  general_ref(_id), event_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_historical_figurest::general_ref_historical_figurest(virtual_identity *_id)
    :  general_ref(_id), hist_figure_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_interactionst::general_ref_interactionst(virtual_identity *_id)
    :  general_ref(_id), anon_1(0), anon_2(0), anon_3(0), anon_4(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_is_artifactst::general_ref_is_artifactst(virtual_identity *_id)
    :  general_ref_artifact(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_is_nemesisst::general_ref_is_nemesisst(virtual_identity *_id)
    :  general_ref_nemesis(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_item::general_ref_item(virtual_identity *_id)
    :  general_ref(_id), item_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_item_type::general_ref_item_type(virtual_identity *_id)
    :  general_ref(_id), type(ENUM_FIRST_ITEM(item_type)), subtype(-1), mat_type(-1), mat_index(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_locationst::general_ref_locationst(virtual_identity *_id)
    :  general_ref(_id), anon_1(0), anon_2(0), anon_3(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_mapsquare::general_ref_mapsquare(virtual_identity *_id)
    :  general_ref(_id), tiletype(ENUM_FIRST_ITEM(tiletype)), mat_type(-1), mat_index(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_nemesis::general_ref_nemesis(virtual_identity *_id)
    :  general_ref(_id), nemesis_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_projectile::general_ref_projectile(virtual_identity *_id)
    :  general_ref(_id), projectile_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_sitest::general_ref_sitest(virtual_identity *_id)
    :  general_ref(_id), site_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_spherest::general_ref_spherest(virtual_identity *_id)
    :  general_ref(_id), sphere_type(ENUM_FIRST_ITEM(sphere_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_subregionst::general_ref_subregionst(virtual_identity *_id)
    :  general_ref(_id), region_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit::general_ref_unit(virtual_identity *_id)
    :  general_ref(_id), unit_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_beateest::general_ref_unit_beateest(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_cageest::general_ref_unit_cageest(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_foodreceiverst::general_ref_unit_foodreceiverst(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_holderst::general_ref_unit_holderst(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_infantst::general_ref_unit_infantst(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_itemownerst::general_ref_unit_itemownerst(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_kidnapeest::general_ref_unit_kidnapeest(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_milkeest::general_ref_unit_milkeest(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_patientst::general_ref_unit_patientst(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_reporteest::general_ref_unit_reporteest(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_riderst::general_ref_unit_riderst(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_sheareest::general_ref_unit_sheareest(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_slaughtereest::general_ref_unit_slaughtereest(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_suckeest::general_ref_unit_suckeest(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_tradebringerst::general_ref_unit_tradebringerst(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_traineest::general_ref_unit_traineest(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::general_ref_unit_workerst::general_ref_unit_workerst(virtual_identity *_id)
    :  general_ref_unit(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::glowing_barrier::glowing_barrier()
    :  anon_1(0), anon_2(0)
  {
  }
  df::graphic::graphic()
    :  screenx(0), screeny(0), screenf(0), screenb(0), screenbright(0), screen(0), screentexpos(0), screentexpos_addcolor(0), screentexpos_grayscale(0), screentexpos_cf(0), screentexpos_cbr(0), rect_id(0), print_index(0), display_frames(0), force_full_display_count(0), original_rect(0), dimx(0), dimy(0), mouse_x(0), mouse_y(0), screen_limit(0)
  {
    for (int anon_1 = 0; anon_1 < 2; anon_1++) {
      clipx[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 2; anon_2++) {
      clipy[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 1; anon_3++) {
      tex_pos[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 100; anon_4++) {
      print_time[anon_4] = 0;
    }
  }
  df::hauling_route::hauling_route()
    :  id(0)
  {
  }
  df::hauling_stop::hauling_stop()
    :  id(0), time_waiting(0), cart_id(-1)
  {
  }
  df::histfig_entity_link::histfig_entity_link(virtual_identity *_id)
    :  entity_id(-1), link_strength(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_criminalst::histfig_entity_link_criminalst(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_enemyst::histfig_entity_link_enemyst(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_former_memberst::histfig_entity_link_former_memberst(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_former_mercenaryst::histfig_entity_link_former_mercenaryst(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_former_positionst::histfig_entity_link_former_positionst(virtual_identity *_id)
    :  histfig_entity_link(_id), assignment_id(-1), start_year(0), end_year(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_former_prisonerst::histfig_entity_link_former_prisonerst(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_former_slavest::histfig_entity_link_former_slavest(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_former_squadst::histfig_entity_link_former_squadst(virtual_identity *_id)
    :  histfig_entity_link(_id), squad_id(0), start_year(0), end_year(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_memberst::histfig_entity_link_memberst(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_mercenaryst::histfig_entity_link_mercenaryst(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_position_claimst::histfig_entity_link_position_claimst(virtual_identity *_id)
    :  histfig_entity_link(_id), assignment_id(-1), start_year(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_positionst::histfig_entity_link_positionst(virtual_identity *_id)
    :  histfig_entity_link(_id), assignment_id(-1), start_year(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_prisonerst::histfig_entity_link_prisonerst(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_slavest::histfig_entity_link_slavest(virtual_identity *_id)
    :  histfig_entity_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_entity_link_squadst::histfig_entity_link_squadst(virtual_identity *_id)
    :  histfig_entity_link(_id), squad_id(0), squad_position(0), start_year(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link::histfig_hf_link(virtual_identity *_id)
    :  target_hf(-1), link_strength(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_apprenticest::histfig_hf_link_apprenticest(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_childst::histfig_hf_link_childst(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_companionst::histfig_hf_link_companionst(virtual_identity *_id)
    :  histfig_hf_link(_id), anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_deityst::histfig_hf_link_deityst(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_fatherst::histfig_hf_link_fatherst(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_imprisonerst::histfig_hf_link_imprisonerst(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_loverst::histfig_hf_link_loverst(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_masterst::histfig_hf_link_masterst(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_motherst::histfig_hf_link_motherst(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_prisonerst::histfig_hf_link_prisonerst(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_hf_link_spousest::histfig_hf_link_spousest(virtual_identity *_id)
    :  histfig_hf_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_site_link::histfig_site_link(virtual_identity *_id)
    :  site(-1), sub_id(0), entity(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_site_link_hangoutst::histfig_site_link_hangoutst(virtual_identity *_id)
    :  histfig_site_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_site_link_home_site_abstract_buildingst::histfig_site_link_home_site_abstract_buildingst(virtual_identity *_id)
    :  histfig_site_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_site_link_home_site_realization_buildingst::histfig_site_link_home_site_realization_buildingst(virtual_identity *_id)
    :  histfig_site_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_site_link_home_site_realization_sulst::histfig_site_link_home_site_realization_sulst(virtual_identity *_id)
    :  histfig_site_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_site_link_lairst::histfig_site_link_lairst(virtual_identity *_id)
    :  histfig_site_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::histfig_site_link_seat_of_powerst::histfig_site_link_seat_of_powerst(virtual_identity *_id)
    :  histfig_site_link(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::historical_entity::T_resources::T_metal::T_metal()
  {
  }
  df::historical_entity::T_resources::T_organic::T_organic()
  {
  }
  df::historical_entity::T_resources::T_refuse::T_refuse()
  {
  }
  df::historical_entity::T_resources::T_misc_mat::T_misc_mat()
  {
  }
  df::historical_entity::T_resources::T_wood_products::T_wood_products()
  {
  }
  df::historical_entity::T_resources::T_animals::T_animals()
  {
  }
  df::historical_entity::T_resources::T_unk13::T_unk13()
    :  unk1(-1), unk2(0)
  {
  }
  df::historical_entity::T_resources::T_resources()
    :  unk15a(0), unk15b(0)
  {
    for (int anon_2 = 0; anon_2 < 22; anon_2++) {
      ethic[anon_2] = ENUM_FIRST_ITEM(ethic_response);
    }
    for (int anon_3 = 0; anon_3 < 32; anon_3++) {
      values[anon_3] = 0;
    }
  }
  df::historical_entity::T_unknown1b::T_unk32e::T_unk32e()
    :  anon_3(0), anon_4(0), anon_6(0), anon_7(0)
  {
  }
  df::historical_entity::T_unknown1b::T_diplomacy::T_diplomacy()
    :  group_id(-1), relation(0), anon_1(0), anon_4(0)
  {
  }
  df::historical_entity::T_unknown1b::T_unknown1b()
    :  unk33(0)
  {
  }
  df::historical_entity::T_positions::T_positions()
    :  next_position_id(0), next_assignment_id(0)
  {
  }
  df::historical_entity::T_tissue_styles::T_tissue_styles()
    :  next_style_id(0)
  {
  }
  df::historical_entity::T_unknown1d::T_unknown1d()
    :  unk42(0), unk44(0), unk44a(0)
  {
    for (int anon_1 = 0; anon_1 < 15; anon_1++) {
      unk44b[anon_1] = 0;
    }
  }
  df::historical_entity::T_training_knowledge::T_training_knowledge()
  {
  }
  df::historical_entity::T_unknown1e::T_unknown1e()
    :  unk47(0), unk48(0), unk49a(0), unk49b(0), unk49c(0), unk49e(0), unk49f(0), anon_1(0)
  {
    for (int anon_2 = 0; anon_2 < 10; anon_2++) {
      unk49d[anon_2] = 0;
    }
  }
  df::historical_entity::T_derived_resources::T_derived_resources()
  {
  }
  df::historical_entity::T_claims::T_claims()
  {
  }
  df::historical_entity::T_unknown2::T_unknown2()
    :  metal_proficiency(0), resource_allotment(0), unk12a(-1), unk12b(0), unk13(0), unk14(0), unk15(0), unk16(0), unk17(0), unk20(0), unk21(0), unk22(0), unk23(0)
  {
    for (int anon_1 = 0; anon_1 < 177; anon_1++) {
      unk26[anon_1] = 0;
    }
  }
  df::historical_entity::historical_entity()
    :  type(ENUM_FIRST_ITEM(historical_entity_type)), id(0), entity_raw(0), save_file_id(0), next_member_idx(0), race(-1), next_uniform_id(0), training_knowledge(0), unk_v40_1a(0), unk_v40_1b(0), unk_v40_1c(0), unk_v40_1d(0), unk_v40_1e(0), activity_stats(0)
  {
  }
  df::historical_figure::T_worldgen::T_unk_c::T_unk_c()
  {
  }
  df::historical_figure::T_worldgen::T_worldgen()
    :  unk_0(0), unk_4(0), unk_8(0), unk_c(0), unk_10(0)
  {
  }
  df::historical_figure::historical_figure()
    :  profession(ENUM_FIRST_ITEM(profession)), race(-1), caste(-1), sex(0), appeared_year(0), born_year(0), born_seconds(0), curse_year(0), curse_seconds(0), birth_year_bias(0), birth_time_bias(0), old_year(0), old_seconds(0), died_year(0), died_seconds(0), civ_id(-1), population_id(-1), breed_id(0), cultural_identity(-1), flags(ENUM_LAST_ITEM(histfig_flags)), unit_id(-1), unit_id2(-1), id(0), unk4(0), info(0), unk_v4019_1(-1)
  {
  }
  df::historical_figure_info::T_skills::T_skills()
    :  unk_60(0)
  {
  }
  df::historical_figure_info::T_masterpieces::T_masterpieces()
  {
  }
  df::historical_figure_info::T_unk_14::T_unk_14()
    :  unk_0(0), site(-1), region_id(-1), beast_id(-1), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), unk_14(0), unk_18(0), unk_1c(0)
  {
  }
  df::historical_figure_info::T_wounds::T_wounds()
    :  anon_1(0), anon_2(0), anon_3(0)
  {
  }
  df::historical_figure_info::T_secret::T_anon_3::T_anon_3()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0)
  {
  }
  df::historical_figure_info::T_secret::T_anon_9::T_anon_9()
    :  anon_1(0), anon_2(0)
  {
  }
  df::historical_figure_info::T_secret::T_secret()
    :  unk_10(0)
  {
  }
  df::historical_figure_info::T_curse::T_curse()
    :  unk_30(0), unk_34(0), unk_38(0), unk_3c(0), unk_40(0), race(-1), caste(-1), unk_d0(0), unk_d4(0), unk_d8(0), unk_dc(0), unk_fc(0)
  {
  }
  df::historical_figure_info::T_reputation::T_wanted::T_wanted()
    :  entity_id(-1), discovered_year(0), discovered_time(0), unsolved_murders(0)
  {
  }
  df::historical_figure_info::T_reputation::T_anon_1::T_anon_1()
    :  entity_id(-1), discovered_year(0), discovered_time(0), unsolved_murders(0)
  {
  }
  df::historical_figure_info::T_reputation::T_reputation()
    :  cur_identity(-1), anon_2(0)
  {
  }
  df::historical_figure_info::T_relationships::T_anon_1::T_anon_1()
    :  anon_1(-1), anon_2(0), anon_6(0), anon_7(0), anon_8(0)
  {
  }
  df::historical_figure_info::T_relationships::T_relationships()
  {
  }
  df::historical_figure_info::historical_figure_info()
    :  spheres(0), skills(0), pets(0), personality(0), masterpieces(0), unk_14(0), kills(0), wounds(0), secret(0), curse(0), books(0), reputation(0), relationships(0)
  {
  }
  df::historical_kills::historical_kills()
  {
  }
  df::history_era::T_title::T_title()
    :  type(ENUM_FIRST_ITEM(era_type)), histfig_1(-1), histfig_2(-1), ordinal(0), percent(0)
  {
  }
  df::history_era::T_details::T_details()
    :  living_powers(0), living_megabeasts(0), living_semimegabeasts(0), power_hf1(-1), power_hf2(-1), power_hf3(-1), civilized_total(0), civilized_mundane(0)
  {
  }
  df::history_era::history_era()
    :  year(0)
  {
  }
  df::history_event::history_event(virtual_identity *_id)
    :  year(0), seconds(0), id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_add_hf_entity_linkst::history_event_add_hf_entity_linkst(virtual_identity *_id)
    :  history_event(_id), civ(-1), histfig(-1), link_type(ENUM_FIRST_ITEM(histfig_entity_link_type)), position_id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_add_hf_hf_linkst::history_event_add_hf_hf_linkst(virtual_identity *_id)
    :  history_event(_id), hf(-1), hf_target(-1), type(ENUM_FIRST_ITEM(histfig_hf_link_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_add_hf_site_linkst::history_event_add_hf_site_linkst(virtual_identity *_id)
    :  history_event(_id), site(-1), structure(-1), histfig(-1), civ(-1), type(ENUM_FIRST_ITEM(histfig_site_link_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_agreement_concludedst::history_event_agreement_concludedst(virtual_identity *_id)
    :  history_event(_id), agreement_id(0), subject_id(0), reason(ENUM_FIRST_ITEM(agreement_conclusion_reason)), concluder_hf(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_agreement_formedst::history_event_agreement_formedst(virtual_identity *_id)
    :  history_event(_id), agreement_id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_agreements_voidedst::history_event_agreements_voidedst(virtual_identity *_id)
    :  history_event(_id), source(-1), destination(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_artifact_createdst::history_event_artifact_createdst(virtual_identity *_id)
    :  history_event(_id), artifact_id(-1), unit_id(-1), hfid(-1), site(-1), flags2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_artifact_droppedst::history_event_artifact_droppedst(virtual_identity *_id)
    :  history_event(_id), artifact(-1), unit(-1), histfig(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_artifact_foundst::history_event_artifact_foundst(virtual_identity *_id)
    :  history_event(_id), artifact(-1), unit(-1), histfig(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_artifact_hiddenst::history_event_artifact_hiddenst(virtual_identity *_id)
    :  history_event(_id), artifact(-1), unit(-1), histfig(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_artifact_lostst::history_event_artifact_lostst(virtual_identity *_id)
    :  history_event(_id), artifact(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_artifact_possessedst::history_event_artifact_possessedst(virtual_identity *_id)
    :  history_event(_id), artifact(-1), unit(-1), histfig(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_artifact_recoveredst::history_event_artifact_recoveredst(virtual_identity *_id)
    :  history_event(_id), artifact(-1), unit(-1), histfig(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_artifact_storedst::history_event_artifact_storedst(virtual_identity *_id)
    :  history_event(_id), artifact(-1), unit(-1), histfig(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_assume_identityst::history_event_assume_identityst(virtual_identity *_id)
    :  history_event(_id), trickster(-1), identity(-1), target(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_body_abusedst::history_event_body_abusedst(virtual_identity *_id)
    :  history_event(_id), anon_1(0), civ(-1), histfig(-1), site(-1), region(-1), layer(-1), abuse_type(0)
  {
    _identity.adjust_vtable(this, _id);
    props.item.item_type = ENUM_FIRST_ITEM(item_type);
    props.item.item_subtype = -1;
    props.item.mat_type = -1;
    props.item.mat_index = 0;
  }
  df::history_event_change_creature_typest::history_event_change_creature_typest(virtual_identity *_id)
    :  history_event(_id), changee(-1), changer(-1), old_race(-1), old_caste(-1), new_race(-1), new_caste(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_change_hf_body_statest::history_event_change_hf_body_statest(virtual_identity *_id)
    :  history_event(_id), histfig(-1), body_state(ENUM_FIRST_ITEM(histfig_body_state)), site(-1), structure(-1), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_change_hf_jobst::history_event_change_hf_jobst(virtual_identity *_id)
    :  history_event(_id), hfid(-1), new_job(ENUM_FIRST_ITEM(profession)), old_job(ENUM_FIRST_ITEM(profession)), site(-1), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_change_hf_statest::history_event_change_hf_statest(virtual_identity *_id)
    :  history_event(_id), hfid(-1), state(0), substate(0), site(-1), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection::history_event_collection(virtual_identity *_id)
    :  start_year(0), end_year(0), start_seconds(0), end_seconds(0), id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection_abductionst::history_event_collection_abductionst(virtual_identity *_id)
    :  history_event_collection(_id), parent_collection(-1), region(-1), layer(-1), site(-1), attacker_civ(-1), defender_civ(-1), ordinal(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection_battlest::history_event_collection_battlest(virtual_identity *_id)
    :  history_event_collection(_id), parent_collection(-1), region(-1), layer(-1), site(-1), outcome(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection_beast_attackst::history_event_collection_beast_attackst(virtual_identity *_id)
    :  history_event_collection(_id), parent_collection(-1), region(-1), layer(-1), site(-1), defender_civ(-1), ordinal(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection_duelst::history_event_collection_duelst(virtual_identity *_id)
    :  history_event_collection(_id), parent_collection(-1), region(-1), layer(-1), site(-1), attacker_hf(-1), defender_hf(-1), ordinal(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection_insurrectionst::history_event_collection_insurrectionst(virtual_identity *_id)
    :  history_event_collection(_id), site(-1), target_civ(-1), ordinal(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection_journeyst::history_event_collection_journeyst(virtual_identity *_id)
    :  history_event_collection(_id), ordinal(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection_site_conqueredst::history_event_collection_site_conqueredst(virtual_identity *_id)
    :  history_event_collection(_id), parent_collection(-1), site(-1), anon_1(0), ordinal(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection_theftst::history_event_collection_theftst(virtual_identity *_id)
    :  history_event_collection(_id), parent_collection(-1), region(-1), layer(-1), site(-1), thief_civ(-1), victim_civ(-1), ordinal(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_collection_warst::T_unk::T_unk()
    :  anon_6(0), worst_severity(0), anon_10(0)
  {
  }
  df::history_event_collection_warst::history_event_collection_warst(virtual_identity *_id)
    :  history_event_collection(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_context::history_event_context()
    :  anon_1(0), anon_2(0), histfig_id_talker(-1), histfig_id_listener(-1)
  {
  }
  df::history_event_create_entity_positionst::history_event_create_entity_positionst(virtual_identity *_id)
    :  history_event(_id), histfig(-1), civ(-1), site_civ(-1), position(0), reason(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_created_buildingst::history_event_created_buildingst(virtual_identity *_id)
    :  history_event(_id), civ(-1), site_civ(-1), site(-1), structure(-1), builder_hf(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_created_sitest::history_event_created_sitest(virtual_identity *_id)
    :  history_event(_id), civ(-1), site_civ(-1), site(-1), builder_hf(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_created_world_constructionst::history_event_created_world_constructionst(virtual_identity *_id)
    :  history_event(_id), civ(-1), site_civ(-1), construction(0), master_construction(0), site1(-1), site2(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_creature_devouredst::history_event_creature_devouredst(virtual_identity *_id)
    :  history_event(_id), victim(-1), race(-1), caste(-1), eater(-1), entity(-1), site(-1), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_diplomat_lostst::history_event_diplomat_lostst(virtual_identity *_id)
    :  history_event(_id), entity(-1), involved(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_entity_actionst::history_event_entity_actionst(virtual_identity *_id)
    :  history_event(_id), entity(-1), site(-1), structure(-1), action(ENUM_FIRST_ITEM(entity_action_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_entity_createdst::history_event_entity_createdst(virtual_identity *_id)
    :  history_event(_id), entity(-1), site(-1), structure(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_entity_incorporatedst::history_event_entity_incorporatedst(virtual_identity *_id)
    :  history_event(_id), migrant_entity(-1), join_entity(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_entity_lawst::history_event_entity_lawst(virtual_identity *_id)
    :  history_event(_id), entity(-1), histfig(-1), add_flags(0), remove_flags(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_entity_razed_buildingst::history_event_entity_razed_buildingst(virtual_identity *_id)
    :  history_event(_id), civ(-1), site(-1), structure(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_first_contact_failedst::history_event_first_contact_failedst(virtual_identity *_id)
    :  history_event(_id), contactor(-1), rejector(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_first_contactst::history_event_first_contactst(virtual_identity *_id)
    :  history_event(_id), contactor(-1), contacted(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hf_act_on_buildingst::history_event_hf_act_on_buildingst(virtual_identity *_id)
    :  history_event(_id), action(0), histfig(-1), site(-1), structure(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hf_attacked_sitest::history_event_hf_attacked_sitest(virtual_identity *_id)
    :  history_event(_id), attacker_hf(-1), defender_civ(-1), site_civ(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hf_confrontedst::history_event_hf_confrontedst(virtual_identity *_id)
    :  history_event(_id), target(-1), accuser(-1), site(-1), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hf_destroyed_sitest::history_event_hf_destroyed_sitest(virtual_identity *_id)
    :  history_event(_id), attacker_hf(-1), defender_civ(-1), site_civ(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hf_does_interactionst::history_event_hf_does_interactionst(virtual_identity *_id)
    :  history_event(_id), doer(-1), target(-1), interaction(-1), anon_1(0), site(-1), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hf_gains_secret_goalst::history_event_hf_gains_secret_goalst(virtual_identity *_id)
    :  history_event(_id), histfig(-1), goal(ENUM_FIRST_ITEM(goal_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hf_learns_secretst::history_event_hf_learns_secretst(virtual_identity *_id)
    :  history_event(_id), student(-1), teacher(-1), artifact(-1), interaction(-1), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hf_razed_buildingst::history_event_hf_razed_buildingst(virtual_identity *_id)
    :  history_event(_id), histfig(-1), site(-1), structure(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hist_figure_abductedst::history_event_hist_figure_abductedst(virtual_identity *_id)
    :  history_event(_id), target(-1), snatcher(-1), site(-1), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hist_figure_diedst::history_event_hist_figure_diedst(virtual_identity *_id)
    :  history_event(_id), victim_hf(-1), slayer_hf(-1), slayer_race(-1), slayer_caste(-1), site(-1), subregion(-1), feature_layer(-1), death_cause(ENUM_FIRST_ITEM(death_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hist_figure_new_petst::history_event_hist_figure_new_petst(virtual_identity *_id)
    :  history_event(_id), site(-1), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hist_figure_reach_summitst::history_event_hist_figure_reach_summitst(virtual_identity *_id)
    :  history_event(_id), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hist_figure_reunionst::history_event_hist_figure_reunionst(virtual_identity *_id)
    :  history_event(_id), assistant(-1), site(-1), region(-1), layer(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hist_figure_revivedst::history_event_hist_figure_revivedst(virtual_identity *_id)
    :  history_event(_id), histfig(-1), site(-1), region(-1), layer(-1), ghost_type(ENUM_FIRST_ITEM(ghost_type)), flags(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hist_figure_simple_battle_eventst::history_event_hist_figure_simple_battle_eventst(virtual_identity *_id)
    :  history_event(_id), site(-1), region(-1), layer(-1), subtype(ENUM_FIRST_ITEM(history_event_simple_battle_subtype))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hist_figure_travelst::history_event_hist_figure_travelst(virtual_identity *_id)
    :  history_event(_id), site(-1), region(-1), layer(-1), reason(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_hist_figure_woundedst::history_event_hist_figure_woundedst(virtual_identity *_id)
    :  history_event(_id), woundee(-1), wounder(-1), site(-1), region(-1), layer(-1), woundee_race(-1), woundee_caste(-1), body_part(0), injury_type(0), part_lost(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_insurrection_endedst::history_event_insurrection_endedst(virtual_identity *_id)
    :  history_event(_id), target_civ(-1), site(-1), outcome(ENUM_FIRST_ITEM(insurrection_outcome))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_insurrection_startedst::history_event_insurrection_startedst(virtual_identity *_id)
    :  history_event(_id), target_civ(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_item_stolenst::history_event_item_stolenst(virtual_identity *_id)
    :  history_event(_id), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mattype(-1), matindex(0), item(-1), entity(-1), histfig(-1), site(-1), structure(-1), region(-1), layer(-1), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_masterpiece_created_arch_constructst::history_event_masterpiece_created_arch_constructst(virtual_identity *_id)
    :  history_event_masterpiece_createdst(_id), anon_1(0), building_type(0), building_subtype(0), building_custom(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_masterpiece_created_arch_designst::history_event_masterpiece_created_arch_designst(virtual_identity *_id)
    :  history_event_masterpiece_createdst(_id), anon_1(0), building_type(0), building_subtype(0), building_custom(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_masterpiece_created_dye_itemst::history_event_masterpiece_created_dye_itemst(virtual_identity *_id)
    :  history_event_masterpiece_createdst(_id), anon_1(0), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0), anon_2(0), dye_mat_type(-1), dye_mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_masterpiece_created_engravingst::history_event_masterpiece_created_engravingst(virtual_identity *_id)
    :  history_event_masterpiece_createdst(_id), skill_rating(ENUM_FIRST_ITEM(skill_rating)), art_id(-1), art_subid(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_masterpiece_created_foodst::history_event_masterpiece_created_foodst(virtual_identity *_id)
    :  history_event_masterpiece_createdst(_id), unk1(0), item_subtype(-1), item_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_masterpiece_created_item_improvementst::history_event_masterpiece_created_item_improvementst(virtual_identity *_id)
    :  history_event_masterpiece_createdst(_id), anon_1(0), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0), anon_2(0), improvement_type(ENUM_FIRST_ITEM(improvement_type)), improvement_subtype(0), imp_mat_type(-1), imp_mat_index(0), art_id(-1), art_subid(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_masterpiece_created_itemst::history_event_masterpiece_created_itemst(virtual_identity *_id)
    :  history_event_masterpiece_createdst(_id), skill_used(ENUM_FIRST_ITEM(job_skill)), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0), item_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_masterpiece_createdst::history_event_masterpiece_createdst(virtual_identity *_id)
    :  history_event(_id), maker(-1), maker_entity(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_masterpiece_lostst::history_event_masterpiece_lostst(virtual_identity *_id)
    :  history_event(_id), creation_event(-1), histfig(-1), site(-1), method(ENUM_FIRST_ITEM(masterpiece_loss_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_merchantst::history_event_merchantst(virtual_identity *_id)
    :  history_event(_id), source(-1), destination(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_reclaim_sitest::history_event_reclaim_sitest(virtual_identity *_id)
    :  history_event(_id), civ(-1), site_civ(-1), site(-1), flags(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_remove_hf_entity_linkst::history_event_remove_hf_entity_linkst(virtual_identity *_id)
    :  history_event(_id), civ(-1), histfig(-1), link_type(ENUM_FIRST_ITEM(histfig_entity_link_type)), position_id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_remove_hf_hf_linkst::history_event_remove_hf_hf_linkst(virtual_identity *_id)
    :  history_event(_id), hf(-1), hf_target(-1), type(ENUM_FIRST_ITEM(histfig_hf_link_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_remove_hf_site_linkst::history_event_remove_hf_site_linkst(virtual_identity *_id)
    :  history_event(_id), site(-1), structure(-1), histfig(-1), civ(-1), type(ENUM_FIRST_ITEM(histfig_site_link_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_replaced_buildingst::history_event_replaced_buildingst(virtual_identity *_id)
    :  history_event(_id), civ(-1), site_civ(-1), site(-1), old_structure(-1), new_structure(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_site_diedst::history_event_site_diedst(virtual_identity *_id)
    :  history_event(_id), civ(-1), site_civ(-1), site(-1), flags(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_site_disputest::history_event_site_disputest(virtual_identity *_id)
    :  history_event(_id), dispute_type(ENUM_FIRST_ITEM(site_dispute_type)), entity_1(-1), entity_2(-1), site_1(-1), site_2(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_site_retiredst::history_event_site_retiredst(virtual_identity *_id)
    :  history_event(_id), civ(-1), site_civ(-1), site(-1), flags(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_topicagreement_concludedst::history_event_topicagreement_concludedst(virtual_identity *_id)
    :  history_event(_id), source(-1), destination(-1), site(-1), topic(ENUM_FIRST_ITEM(meeting_topic)), result(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_topicagreement_madest::history_event_topicagreement_madest(virtual_identity *_id)
    :  history_event(_id), topic(ENUM_FIRST_ITEM(meeting_topic)), source(-1), destination(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_topicagreement_rejectedst::history_event_topicagreement_rejectedst(virtual_identity *_id)
    :  history_event(_id), topic(ENUM_FIRST_ITEM(meeting_topic)), source(-1), destination(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_war_attacked_sitest::history_event_war_attacked_sitest(virtual_identity *_id)
    :  history_event(_id), attacker_civ(-1), defender_civ(-1), site_civ(-1), site(-1), attacker_general_hf(-1), defender_general_hf(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_war_destroyed_sitest::history_event_war_destroyed_sitest(virtual_identity *_id)
    :  history_event(_id), attacker_civ(-1), defender_civ(-1), site_civ(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_war_field_battlest::history_event_war_field_battlest(virtual_identity *_id)
    :  history_event(_id), attacker_civ(-1), defender_civ(-1), region(-1), layer(-1), attacker_general_hf(-1), defender_general_hf(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_war_peace_acceptedst::history_event_war_peace_acceptedst(virtual_identity *_id)
    :  history_event(_id), topic(ENUM_FIRST_ITEM(meeting_topic)), source(-1), destination(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_war_peace_rejectedst::history_event_war_peace_rejectedst(virtual_identity *_id)
    :  history_event(_id), topic(ENUM_FIRST_ITEM(meeting_topic)), source(-1), destination(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_war_plundered_sitest::history_event_war_plundered_sitest(virtual_identity *_id)
    :  history_event(_id), attacker_civ(-1), defender_civ(-1), site_civ(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_war_site_new_leaderst::history_event_war_site_new_leaderst(virtual_identity *_id)
    :  history_event(_id), attacker_civ(-1), new_site_civ(-1), defender_civ(-1), site_civ(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_war_site_taken_overst::history_event_war_site_taken_overst(virtual_identity *_id)
    :  history_event(_id), attacker_civ(-1), new_site_civ(-1), defender_civ(-1), site_civ(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_event_war_site_tribute_forcedst::history_event_war_site_tribute_forcedst(virtual_identity *_id)
    :  history_event(_id), attacker_civ(-1), defender_civ(-1), site_civ(-1), site(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::history_hit_item::history_hit_item()
    :  item(-1), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mattype(-1), matindex(0), shooter_item(-1), shooter_item_type(ENUM_FIRST_ITEM(item_type)), shooter_item_subtype(-1), shooter_mattype(-1), shooter_matindex(0)
  {
  }
  df::hospital_supplies::hospital_supplies()
    :  max_splints(5), max_thread(75000), max_cloth(50000), max_crutches(5), max_plaster(750), max_buckets(2), max_soap(750), cur_splints(0), cur_thread(0), cur_cloth(0), cur_crutches(0), cur_plaster(0), cur_buckets(0), cur_soap(0), supply_recheck_timer(0)
  {
  }
  df::identity::identity()
    :  id(0), race(-1), caste(-1), histfig_id(-1), unk_4c(0), birth_year(0), birth_second(0)
  {
  }
  df::incident::incident()
    :  id(0), unk_4(0), victim(-1), victim_hfid(-1), victim_race(-1), victim_caste(-1), unk_v40_1b(-1), unk_v40_1c(-1), killer(-1), killer_hfid(-1), killer_race(-1), killer_caste(-1), entity1(-1), unk_v40_2c(-1), crime_id(-1), site(-1), unk_v40_3a(-1), unk_v40_3b(-1), entity(-1), event_year(0), event_time(0), death_cause(ENUM_FIRST_ITEM(death_type)), unk_6c(0), unk_70(0), world_x(0), world_y(0), world_z(0), unk_80(0)
  {
  }
  df::init::init()
  {
  }
  df::init_display::init_display()
    :  flag(ENUM_LAST_ITEM(init_display_flags)), windowed(True), grid_x(0), grid_y(0), desired_fullscreen_width(0), desired_fullscreen_height(0), desired_windowed_width(0), desired_windowed_height(0), partial_print_count(0)
  {
  }
  df::init_font::init_font()
    :  small_font_adjx(0), small_font_adjy(0), large_font_adjx(0), large_font_adjy(0), small_font_dispx(0), small_font_dispy(0), large_font_dispx(0), large_font_dispy(0), use_ttf(TTF_OFF), ttf_limit(0)
  {
    for (int anon_1 = 0; anon_1 < 256; anon_1++) {
      small_font_texpos[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 256; anon_2++) {
      large_font_texpos[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 256; anon_3++) {
      small_font_datapos[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 256; anon_4++) {
      large_font_datapos[anon_4] = 0;
    }
  }
  df::init_input::init_input()
    :  hold_time(0), repeat_time(0), macro_time(0), pause_zoom_no_interface_ms(0), flag(ENUM_LAST_ITEM(init_input_flags)), zoom_speed(0), repeat_accel_start(0), repeat_accel_limit(0)
  {
  }
  df::init_media::init_media()
    :  flag(ENUM_LAST_ITEM(init_media_flags)), volume(0)
  {
  }
  df::init_window::init_window()
    :  flag(ENUM_LAST_ITEM(init_window_flags))
  {
  }
  df::inorganic_raw::T_metal_ore::T_metal_ore()
  {
  }
  df::inorganic_raw::T_thread_metal::T_thread_metal()
  {
  }
  df::inorganic_raw::T_environment_spec::T_environment_spec()
  {
  }
  df::inorganic_raw::T_environment::T_environment()
  {
  }
  df::inorganic_raw::inorganic_raw()
    :  flags(ENUM_LAST_ITEM(inorganic_flags)), source_hfid(-1), unk2(0)
  {
  }
  df::interaction::interaction()
    :  id(0), source_hfid(-1)
  {
  }
  df::interaction_effect::interaction_effect(virtual_identity *_id)
    :  anon_1(0), intermittent(0), anon_3(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_effect_add_syndromest::interaction_effect_add_syndromest(virtual_identity *_id)
    :  interaction_effect(_id), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_effect_animatest::interaction_effect_animatest(virtual_identity *_id)
    :  interaction_effect(_id), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_effect_cleanst::interaction_effect_cleanst(virtual_identity *_id)
    :  interaction_effect(_id), grime_level(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_effect_contactst::interaction_effect_contactst(virtual_identity *_id)
    :  interaction_effect(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_effect_hidest::interaction_effect_hidest(virtual_identity *_id)
    :  interaction_effect(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_effect_material_emissionst::interaction_effect_material_emissionst(virtual_identity *_id)
    :  interaction_effect(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_effect_resurrectst::interaction_effect_resurrectst(virtual_identity *_id)
    :  interaction_effect(_id), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_instance::interaction_instance()
    :  id(0), anon_1(0), anon_2(0), anon_3(0)
  {
  }
  df::interaction_source::interaction_source(virtual_identity *_id)
    :  anon_1(0), frequency(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_source_attackst::interaction_source_attackst(virtual_identity *_id)
    :  interaction_source(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_source_creature_actionst::interaction_source_creature_actionst(virtual_identity *_id)
    :  interaction_source(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_source_deityst::interaction_source_deityst(virtual_identity *_id)
    :  interaction_source(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_source_disturbancest::interaction_source_disturbancest(virtual_identity *_id)
    :  interaction_source(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_source_ingestionst::interaction_source_ingestionst(virtual_identity *_id)
    :  interaction_source(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_source_regionst::interaction_source_regionst(virtual_identity *_id)
    :  interaction_source(_id)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 10; anon_1++) {
      regions[anon_1] = 0;
    }
  }
  df::interaction_source_secretst::interaction_source_secretst(virtual_identity *_id)
    :  interaction_source(_id), anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_source_underground_specialst::interaction_source_underground_specialst(virtual_identity *_id)
    :  interaction_source(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_target::interaction_target(virtual_identity *_id)
    :  index(0), location(ENUM_FIRST_ITEM(interaction_target_location_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_target_corpsest::interaction_target_corpsest(virtual_identity *_id)
    :  interaction_target(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_target_creaturest::interaction_target_creaturest(virtual_identity *_id)
    :  interaction_target(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_target_info::interaction_target_info()
    :  requires_1(0), requires_2(0), forbidden_1(0), forbidden_2(0)
  {
  }
  df::interaction_target_locationst::interaction_target_locationst(virtual_identity *_id)
    :  interaction_target(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interaction_target_materialst::interaction_target_materialst(virtual_identity *_id)
    :  interaction_target(_id), anon_1(0), anon_2(0), anon_3(0), breath_attack_type(ENUM_FIRST_ITEM(breath_attack_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interface_button::interface_button(virtual_identity *_id)
    :  hotkey_id(ENUM_FIRST_ITEM(interface_key)), is_hidden(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interface_button_building_category_selectorst::interface_button_building_category_selectorst(virtual_identity *_id)
    :  interface_button_buildingst(_id), category_id(0), unk_14(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interface_button_building_material_selectorst::interface_button_building_material_selectorst(virtual_identity *_id)
    :  interface_button_buildingst(_id), mat_type(-1), mat_index(0), unk_1c(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interface_button_building_new_jobst::interface_button_building_new_jobst(virtual_identity *_id)
    :  interface_button_buildingst(_id), job_type(ENUM_FIRST_ITEM(job_type)), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(0), mat_type(-1), mat_index(0), hist_figure_id(-1), unk_48(0), is_custom(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interface_button_buildingst::interface_button_buildingst(virtual_identity *_id)
    :  interface_button(_id), building(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interface_button_construction_building_selectorst::interface_button_construction_building_selectorst(virtual_identity *_id)
    :  interface_button_constructionst(_id), building_type(0), building_subtype(0), custom_type(-1), existing_count(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interface_button_construction_category_selectorst::interface_button_construction_category_selectorst(virtual_identity *_id)
    :  interface_button_constructionst(_id), category_id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interface_button_construction_donest::interface_button_construction_donest(virtual_identity *_id)
    :  interface_button_constructionst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interface_button_constructionst::interface_button_constructionst(virtual_identity *_id)
    :  interface_button(_id), unused_c(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::interfacest::interfacest()
    :  original_fps(0), flag(0), shutdown_interface_tickcount(0), shutdown_interface_for_ms(0), supermovie_on(0), supermovie_pos(0), supermovie_delayrate(0), supermovie_delaystep(0), currentblocksize(0), nextfilepos(0), first_movie_write(0)
  {
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      for (int anon_2 = 0; anon_2 < 200; anon_2++) {
        supermovie_sound_time[anon_1][anon_2] = 0;
      }
    }
    memset(supermoviebuffer, 0, sizeof(supermoviebuffer));
    memset(supermoviebuffer_comp, 0, sizeof(supermoviebuffer_comp));
  }
  df::invasion_info::invasion_info()
    :  id(0), civ_id(-1), active_size1(0), active_size2(0), size(0), duration_counter(0), unk4b(0)
  {
  }
  df::item::item(virtual_identity *_id)
    :  age(0), id(0), world_data_id(-1), world_data_subid(-1), stockpile_countdown(0), stockpile_delay(0), unk2(0), base_uniform_score(0), walkable_id(0), spec_heat(0), ignite_point(0), heatdam_point(0), colddam_point(0), boiling_point(0), melting_point(0), fixed_temp(0), weight(0), weight_fraction(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_actual::item_actual(virtual_identity *_id)
    :  item(_id), stack_size(1), history_info(0), magic(0), contaminants(0), wear(0), wear_timer(0), anon_1(-1), temp_updated_frame(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_ammost::item_ammost(virtual_identity *_id)
    :  item_constructed(_id), subtype(0), sharpness(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_amuletst::item_amuletst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_animaltrapst::item_animaltrapst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_anvilst::item_anvilst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_armorst::item_armorst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_armorstandst::item_armorstandst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_backpackst::item_backpackst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_ballistaarrowheadst::item_ballistaarrowheadst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), sharpness(10000)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_ballistapartsst::item_ballistapartsst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_barrelst::item_barrelst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_barst::item_barst(virtual_identity *_id)
    :  item_actual(_id), subtype(0), mat_type(-1), mat_index(0), dimension(150)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_bedst::item_bedst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_binst::item_binst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_blocksst::item_blocksst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_body_component::T_body::T_body()
    :  unk_c8(0), size_modifier(0)
  {
    for (int anon_1 = 0; anon_1 < 10; anon_1++) {
      unk_100[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 6; anon_2++) {
      physical_attr_value[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 6; anon_3++) {
      physical_attr_unk2[anon_3] = 0;
    }
  }
  df::item_body_component::T_appearance::T_appearance()
  {
  }
  df::item_body_component::T_bone1::T_bone1()
    :  mat_type(-1), mat_index(0)
  {
  }
  df::item_body_component::T_bone2::T_bone2()
    :  mat_type(-1), mat_index(0)
  {
  }
  df::item_body_component::item_body_component(virtual_identity *_id)
    :  item_actual(_id), race(-1), hist_figure_id(-1), unit_id(-1), caste(-1), sex(0), race2(-1), caste2(-1), rot_timer(0), unk_8c(0), birth_year(0), birth_time(0), curse_year(0), curse_time(0), birth_year_bias(0), birth_time_bias(0), death_year(0), death_time(0), blood_count(0), stored_fat(0), hist_figure_id2(-1), anon_1(0), unit_id2(-1)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_2 = 0; anon_2 < 19; anon_2++) {
      material_amount[anon_2] = 0;
    }
  }
  df::item_bookst::item_bookst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_boulderst::item_boulderst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_boxst::item_boxst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_braceletst::item_braceletst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_bucketst::item_bucketst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_cabinetst::item_cabinetst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_cagest::item_cagest(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_catapultpartsst::item_catapultpartsst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_chainst::item_chainst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_chairst::item_chairst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_cheesest::item_cheesest(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), rot_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_clothst::item_clothst(virtual_identity *_id)
    :  item_constructed(_id), dimension(10000)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_coffinst::item_coffinst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_coinst::item_coinst(virtual_identity *_id)
    :  item_constructed(_id), coin_batch(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_constructed::item_constructed(virtual_identity *_id)
    :  item_crafted(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_corpsepiecest::item_corpsepiecest(virtual_identity *_id)
    :  item_body_component(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_corpsest::item_corpsest(virtual_identity *_id)
    :  item_body_component(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_crafted::item_crafted(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), maker_race(-1), quality(ENUM_FIRST_ITEM(item_quality)), skill_used(ENUM_FIRST_ITEM(job_skill)), maker(-1), masterpiece_event(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_critter::item_critter(virtual_identity *_id)
    :  item_actual(_id), race(-1), caste(-1), milk_timer(0), airdrown_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_crownst::item_crownst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_crutchst::item_crutchst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_doorst::item_doorst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_drinkst::item_drinkst(virtual_identity *_id)
    :  item_liquid(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_earringst::item_earringst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_eggst::item_eggst(virtual_identity *_id)
    :  item_actual(_id), race(-1), caste(-1), unk_7c(0), incubation_counter(0), hatchling_civ_id(-1), hatchling_population_id(-1), hatchling_unit_unk_c0(-1), anon_1(0), mothers_genes(0), mothers_caste(-1), anon_2(0), fathers_genes(0), fathers_caste(-1), anon_3(0), hatchling_training_level(df::enums::animal_training_level::WildUntamed), hatchling_mother_id(-1), size(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_figurinest::item_figurinest(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_filter_spec::item_filter_spec()
    :  item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), material_class(ENUM_FIRST_ITEM(entity_material_category)), mattype(-1), matindex(0)
  {
  }
  df::item_fish_rawst::item_fish_rawst(virtual_identity *_id)
    :  item_actual(_id), race(-1), caste(-1), rot_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_fishst::item_fishst(virtual_identity *_id)
    :  item_actual(_id), race(-1), caste(-1), rot_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_flaskst::item_flaskst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_floodgatest::item_floodgatest(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_foodst::T_ingredients::T_ingredients()
    :  anon_1(0), item_type(ENUM_FIRST_ITEM(item_type)), unk_4(-1), mat_type(-1), mat_index(-1), maker(-1), unk_10(0), unk_14(0), unk_18(0)
  {
  }
  df::item_foodst::item_foodst(virtual_identity *_id)
    :  item_crafted(_id), subtype(0), entity(-1), recipe_id(0), rot_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_gemst::item_gemst(virtual_identity *_id)
    :  item_constructed(_id), shape(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_globst::item_globst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), rot_timer(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_glovesst::item_glovesst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_gobletst::item_gobletst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_gratest::item_gratest(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_hatch_coverst::item_hatch_coverst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_helmst::item_helmst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_history_info::item_history_info()
    :  kills(0), unk1(0), unk2(0)
  {
  }
  df::item_instrumentst::item_instrumentst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_kill_info::item_kill_info()
  {
  }
  df::item_liquid::item_liquid(virtual_identity *_id)
    :  item_liquipowder(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_liquid_miscst::item_liquid_miscst(virtual_identity *_id)
    :  item_liquid(_id), unk_88(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_liquipowder::item_liquipowder(virtual_identity *_id)
    :  item_actual(_id), dimension(150), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_magicness::item_magicness()
    :  type(ENUM_FIRST_ITEM(item_magicness_type)), value(0), anon_1(0), flags(0)
  {
  }
  df::item_meatst::item_meatst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), rot_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_millstonest::item_millstonest(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_orthopedic_castst::item_orthopedic_castst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_pantsst::item_pantsst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_petst::item_petst(virtual_identity *_id)
    :  item_critter(_id), anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_pipe_sectionst::item_pipe_sectionst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_plant_growthst::item_plant_growthst(virtual_identity *_id)
    :  item_actual(_id), subtype(0), anon_1(0), mat_type(-1), mat_index(0), rot_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_plantst::item_plantst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), rot_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_powder::item_powder(virtual_identity *_id)
    :  item_liquipowder(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_powder_miscst::item_powder_miscst(virtual_identity *_id)
    :  item_powder(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_quernst::item_quernst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_quiverst::item_quiverst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_remainsst::item_remainsst(virtual_identity *_id)
    :  item_actual(_id), race(-1), caste(-1), rot_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_ringst::item_ringst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_rockst::item_rockst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), sharpness(0), unk_84(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_roughst::item_roughst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_scepterst::item_scepterst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_seedsst::item_seedsst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), grow_counter(0), planting_skill(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_shieldst::item_shieldst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_shoesst::item_shoesst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_siegeammost::item_siegeammost(virtual_identity *_id)
    :  item_constructed(_id), subtype(0), sharpness(10000)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_skin_tannedst::item_skin_tannedst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), unk_80(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_slabst::item_slabst(virtual_identity *_id)
    :  item_constructed(_id), topic(-1), engraving_type(ENUM_FIRST_ITEM(slab_engraving_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_smallgemst::item_smallgemst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), shape(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_splintst::item_splintst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_statuest::item_statuest(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_stockpile_ref::item_stockpile_ref()
    :  id(-1), x(0), y(0)
  {
  }
  df::item_tablest::item_tablest(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_threadst::item_threadst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0), dye_mat_type(-1), dye_mat_index(0), unk_88(0), unk_8c(0), dye_quality(0), unk_92(0), unk_94(0), unk_98(0), dimension(15000)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_toolst::item_toolst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0), sharpness(0), vehicle_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_totemst::item_totemst(virtual_identity *_id)
    :  item_constructed(_id), unk_a0(0), unk_a2(0), unk_a4(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_toyst::item_toyst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_traction_benchst::item_traction_benchst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_trapcompst::item_trapcompst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0), sharpness(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_trappartsst::item_trappartsst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_verminst::item_verminst(virtual_identity *_id)
    :  item_critter(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_weaponrackst::item_weaponrackst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_weaponst::item_weaponst(virtual_identity *_id)
    :  item_constructed(_id), subtype(0), sharpness(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_windowst::item_windowst(virtual_identity *_id)
    :  item_constructed(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::item_woodst::item_woodst(virtual_identity *_id)
    :  item_actual(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef::itemdef(virtual_identity *_id)
    :  subtype(0), source_hfid(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_ammost::itemdef_ammost(virtual_identity *_id)
    :  itemdef(_id), flags(ENUM_LAST_ITEM(ammo_flags)), size(0), value(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_armorst::itemdef_armorst(virtual_identity *_id)
    :  itemdef(_id), value(0), armorlevel(0), ubstep(0), lbstep(0), material_size(0), flags(ENUM_LAST_ITEM(armor_flags))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_foodst::itemdef_foodst(virtual_identity *_id)
    :  itemdef(_id), level(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_glovesst::itemdef_glovesst(virtual_identity *_id)
    :  itemdef(_id), value(0), armorlevel(0), upstep(0), flags(ENUM_LAST_ITEM(gloves_flags)), material_size(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_helmst::itemdef_helmst(virtual_identity *_id)
    :  itemdef(_id), value(0), armorlevel(0), flags(ENUM_LAST_ITEM(helm_flags)), material_size(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_instrumentst::itemdef_instrumentst(virtual_identity *_id)
    :  itemdef(_id), flags(ENUM_LAST_ITEM(instrument_flags))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_pantsst::itemdef_pantsst(virtual_identity *_id)
    :  itemdef(_id), value(0), armorlevel(0), flags(ENUM_LAST_ITEM(pants_flags)), material_size(0), lbstep(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_shieldst::itemdef_shieldst(virtual_identity *_id)
    :  itemdef(_id), value(0), blockchance(0), armorlevel(0), upstep(0), material_size(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_shoesst::itemdef_shoesst(virtual_identity *_id)
    :  itemdef(_id), value(0), armorlevel(0), upstep(0), flags(ENUM_LAST_ITEM(shoes_flags)), material_size(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_siegeammost::itemdef_siegeammost(virtual_identity *_id)
    :  itemdef(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_toolst::itemdef_toolst(virtual_identity *_id)
    :  itemdef(_id), flags(ENUM_LAST_ITEM(tool_flags)), value(0), tile(0), size(0), skill_melee(ENUM_FIRST_ITEM(job_skill)), skill_ranged(ENUM_FIRST_ITEM(job_skill)), two_handed(0), minimum_size(0), material_size(0), shoot_force(0), shoot_maxvel(0), container_capacity(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_toyst::itemdef_toyst(virtual_identity *_id)
    :  itemdef(_id), flags(ENUM_LAST_ITEM(toy_flags))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_trapcompst::itemdef_trapcompst(virtual_identity *_id)
    :  itemdef(_id), size(0), value(0), hits(0), material_size(0), flags(ENUM_LAST_ITEM(trapcomp_flags))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemdef_weaponst::itemdef_weaponst(virtual_identity *_id)
    :  itemdef(_id), size(0), value(0), skill_melee(ENUM_FIRST_ITEM(job_skill)), skill_ranged(ENUM_FIRST_ITEM(job_skill)), two_handed(0), minimum_size(0), material_size(0), flags(ENUM_LAST_ITEM(weapon_flags)), shoot_force(0), shoot_maxvel(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement::itemimprovement(virtual_identity *_id)
    :  mat_type(-1), mat_index(0), maker(-1), masterpiece_event(-1), quality(ENUM_FIRST_ITEM(item_quality)), skill_rating(ENUM_FIRST_ITEM(skill_rating)), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_art_imagest::itemimprovement_art_imagest(virtual_identity *_id)
    :  itemimprovement(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_bandsst::itemimprovement_bandsst(virtual_identity *_id)
    :  itemimprovement(_id), shape(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_clothst::itemimprovement_clothst(virtual_identity *_id)
    :  itemimprovement(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_coveredst::itemimprovement_coveredst(virtual_identity *_id)
    :  itemimprovement(_id), shape(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_illustrationst::itemimprovement_illustrationst(virtual_identity *_id)
    :  itemimprovement(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_itemspecificst::itemimprovement_itemspecificst(virtual_identity *_id)
    :  itemimprovement(_id), type(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_pagesst::itemimprovement_pagesst(virtual_identity *_id)
    :  itemimprovement(_id), count(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_rings_hangingst::itemimprovement_rings_hangingst(virtual_identity *_id)
    :  itemimprovement(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_sewn_imagest::T_cloth::T_cloth()
    :  unit_id(-1), quality(0), anon_1(0)
  {
  }
  df::itemimprovement_sewn_imagest::itemimprovement_sewn_imagest(virtual_identity *_id)
    :  itemimprovement(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_spikesst::itemimprovement_spikesst(virtual_identity *_id)
    :  itemimprovement(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::itemimprovement_threadst::itemimprovement_threadst(virtual_identity *_id)
    :  itemimprovement(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::job::job()
    :  id(-1), list_link(0), unk_v4020_1(-1), job_type(ENUM_FIRST_ITEM(job_type)), job_subtype(-1), completion_timer(-1), unk4(0), mat_type(-1), mat_index(-1), unk5(-1), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), hist_figure_id(-1), expire_timer(0), recheck_cntdn(0), wait_timer(0), unk11(-1), cur_path_index(0)
  {
  }
  df::job_item::job_item()
    :  item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(-1), quantity(1), vector_id(df::enums::job_item_vector_id::IN_PLAY), flags4(0), flags5(0), metal_ore(-1), min_dimension(-1), reagent_index(-1), reaction_id(-1), has_tool_use(ENUM_FIRST_ITEM(tool_uses))
  {
  }
  df::job_item_filter::job_item_filter()
    :  item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(-1), item_vector(0), use_mat_index(0), use_flags2(0), use_flags3(0), flags4(0), use_flags4(0), flags5(0), use_flags5(0), metal_ore(-1), use_metal_ore(0), use_reaction_class(0), use_reaction_product(0), min_dimension(-1), reaction_id(-1), use_contains(0), has_tool_use(ENUM_FIRST_ITEM(tool_uses)), has_melee_skill(ENUM_FIRST_ITEM(job_skill)), unk_v40_1(0), unit(0), job(0), building(0), unk_74(0), use_burrows(0), take_from(0)
  {
  }
  df::job_item_ref::job_item_ref()
    :  item(0), role(), is_fetching(0), job_item_idx(0)
  {
  }
  df::job_list_link::job_list_link()
    :  item(0), prev(0), next(0)
  {
  }
  df::language_name::language_name()
    :  language(-1), unknown(0), has_name(0)
  {
    for (int anon_1 = 0; anon_1 < 7; anon_1++) {
      words[anon_1] = -1;
    }
    for (int anon_2 = 0; anon_2 < 7; anon_2++) {
      parts_of_speech[anon_2] = ENUM_FIRST_ITEM(part_of_speech);
    }
  }
  df::language_symbol::language_symbol()
    :  flags(0)
  {
  }
  df::language_translation::language_translation()
    :  flags(0)
  {
  }
  df::language_word::language_word()
    :  adj_dist(0)
  {
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::language_word_table::language_word_table()
  {
  }
  df::layer_object::layer_object(virtual_identity *_id)
    :  enabled(0), active(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::layer_object_buttonst::layer_object_buttonst(virtual_identity *_id)
    :  layer_object(_id), x1(0), y1(0), x2(0), y2(0), has_mouse_lclick(0), has_mouse_rclick(0), mouse_lclick_x(0), mouse_lclick_y(0), mouse_rclick_x(0), mouse_rclick_y(0), mouse_x(0), mouse_y(0), mouse_x_old(0), mouse_y_old(0), handle_mouselbtndown(0), handle_mouserbtndown(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::layer_object_listst::layer_object_listst(virtual_identity *_id)
    :  layer_object(_id), cursor(0), num_entries(0), x1(0), y1(0), page_size(0), x2(0), y2(0), mouse_l_cur(0), mouse_r_cur(0), rclick_scrolls(0), flag(0), key_lclick(ENUM_FIRST_ITEM(interface_key)), key_rclick(ENUM_FIRST_ITEM(interface_key))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::loadgame_save_info::loadgame_save_info()
    :  game_type(ENUM_FIRST_ITEM(game_type)), year(0)
  {
    for (int anon_1 = 0; anon_1 < 32; anon_1++) {
      save_info[anon_1] = 0;
    }
  }
  df::local_population::local_population()
    :  type(ENUM_FIRST_ITEM(world_population_type)), quantity(0), quantity2(0), wp_unk_10(-1), wp_unk_18(-1), wp_unk_1c(-1)
  {
    race = -1;
  }
  df::machine::T_components::T_components()
    :  building_id(-1)
  {
  }
  df::machine::machine(virtual_identity *_id)
    :  x(0), y(0), z(0), id(0), cur_power(0), min_power(0), visual_phase(0), phase_timer(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::machine_info::machine_info()
    :  machine_id(-1)
  {
  }
  df::machine_standardst::machine_standardst(virtual_identity *_id)
    :  machine(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::machine_tile_set::machine_tile_set()
  {
  }
  df::manager_order::manager_order()
    :  job_type(ENUM_FIRST_ITEM(job_type)), unk_2(0), item_subtype(0), mat_type(-1), mat_index(0), hist_figure_id(-1), amount_left(0), amount_total(0), is_validated(0)
  {
  }
  df::manager_order_template::manager_order_template()
    :  job_type(ENUM_FIRST_ITEM(job_type)), anon_1(-1), item_subtype(0), mat_type(-1), mat_index(0), anon_2(-1), anon_3(1)
  {
  }
  df::mandate::T_punishment::T_punishment()
    :  hammerstrikes(0), prison_time(0), give_beating(0)
  {
  }
  df::mandate::mandate()
    :  unit(0), mode(0), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0), amount_total(0), amount_remaining(0), timeout_counter(0), timeout_limit(0), punish_multiple(0), unk4(0)
  {
  }
  df::map_block::map_block()
    :  local_feature(-1), global_feature(-1), unk2(-1), layer_depth(0), dsgn_check_cooldown(0)
  {
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      for (int anon_2 = 0; anon_2 < 16; anon_2++) {
        tiletype[anon_1][anon_2] = df::enums::tiletype::OpenSpace;
      }
    }
    for (int anon_7 = 0; anon_7 < 16; anon_7++) {
      for (int anon_8 = 0; anon_8 < 16; anon_8++) {
        fog_of_war[anon_7][anon_8] = 0;
      }
    }
    for (int anon_9 = 0; anon_9 < 16; anon_9++) {
      for (int anon_10 = 0; anon_10 < 16; anon_10++) {
        path_cost[anon_9][anon_10] = 0;
      }
    }
    for (int anon_11 = 0; anon_11 < 16; anon_11++) {
      for (int anon_12 = 0; anon_12 < 16; anon_12++) {
        path_tag[anon_11][anon_12] = 0;
      }
    }
    for (int anon_13 = 0; anon_13 < 16; anon_13++) {
      for (int anon_14 = 0; anon_14 < 16; anon_14++) {
        walkable[anon_13][anon_14] = 0;
      }
    }
    for (int anon_15 = 0; anon_15 < 16; anon_15++) {
      for (int anon_16 = 0; anon_16 < 16; anon_16++) {
        map_edge_distance[anon_15][anon_16] = 0;
      }
    }
    for (int anon_17 = 0; anon_17 < 16; anon_17++) {
      for (int anon_18 = 0; anon_18 < 16; anon_18++) {
        temperature_1[anon_17][anon_18] = 0;
      }
    }
    for (int anon_19 = 0; anon_19 < 16; anon_19++) {
      for (int anon_20 = 0; anon_20 < 16; anon_20++) {
        temperature_2[anon_19][anon_20] = 0;
      }
    }
    for (int anon_21 = 0; anon_21 < 16; anon_21++) {
      for (int anon_22 = 0; anon_22 < 16; anon_22++) {
        unk13[anon_21][anon_22] = 0;
      }
    }
    for (int anon_25 = 0; anon_25 < 9; anon_25++) {
      region_offset[anon_25] = 0;
    }
  }
  df::map_block_column::T_unmined_glyphs::T_unmined_glyphs()
  {
    for (int anon_1 = 0; anon_1 < 4; anon_1++) {
      x[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 4; anon_2++) {
      y[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 4; anon_3++) {
      tile[anon_3] = 0;
    }
  }
  df::map_block_column::map_block_column()
    :  sink_level(0), beach_level(0), ground_level(0), z_base(0), z_shift(0), unk_c3c(0)
  {
    for (int anon_3 = 0; anon_3 < 16; anon_3++) {
      for (int anon_4 = 0; anon_4 < 16; anon_4++) {
        unk_v40_1[anon_3][anon_4] = 0;
      }
    }
  }
  df::map_renderer::T_anon_4::T_anon_4()
    :  x(0), y(0)
  {
  }
  df::map_renderer::map_renderer()
    :  cursor_guts(0), multiple_guts(0), cursor_corpse(0), cursor_corpse_cnt(0), cursor_corpsepiece(0), cursor_corpsepiece_cnt(0), cursor_bones(0), cursor_bones_cnt(0), cursor_other(0), cursor_other_cnt(0), unk_10034(0), unk_10035(0), cur_tick_count(0), tick_phase(0), dim_colors(0), anon_1(0), anon_6(0), anon_7(0)
  {
    for (int anon_8 = 0; anon_8 < 256; anon_8++) {
      for (int anon_9 = 0; anon_9 < 256; anon_9++) {
        entity[anon_8][anon_9] = 0;
      }
    }
    for (int anon_10 = 0; anon_10 < 500; anon_10++) {
      anon_2[anon_10] = 0;
    }
    for (int anon_11 = 0; anon_11 < 500; anon_11++) {
      anon_3[anon_11] = 0;
    }
    for (int anon_13 = 0; anon_13 < 500; anon_13++) {
      anon_5[anon_13] = 0;
    }
  }
  df::map_viewport::map_viewport()
    :  adv_mode(0), unk1(0), map_rotation(0), min_x(0), min_y(0), max_x(0), max_y(0), window_x(0), window_y(0), window_z(0)
  {
  }
  df::material::material()
  {
    for (int anon_1 = 0; anon_1 < 37; anon_1++) {
      food_mat_index[anon_1] = -1;
    }
  }
  df::material_common::T_heat::T_heat()
    :  spec_heat(0), heatdam_point(0), colddam_point(0), ignite_point(0), melting_point(0), boiling_point(0), mat_fixed_temp(0)
  {
  }
  df::material_common::T_strength::T_strength()
    :  absorption(0), max_edge(0)
  {
    for (int anon_1 = 0; anon_1 < 6; anon_1++) {
      yield[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 6; anon_2++) {
      fracture[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 6; anon_3++) {
      strain_at_yield[anon_3] = 0;
    }
  }
  df::material_common::T_reaction_product::T_reaction_product()
  {
  }
  df::material_common::T_hardens_with_water::T_hardens_with_water()
    :  mat_type(-1), mat_index(0)
  {
  }
  df::material_common::material_common()
    :  solid_density(0), liquid_density(0), molar_mass(0), material_value(0), flags(ENUM_LAST_ITEM(material_flags)), extract_storage(ENUM_FIRST_ITEM(item_type)), butcher_special_type(ENUM_FIRST_ITEM(item_type)), butcher_special_subtype(-1), tile(0), item_symbol(0), powder_dye(0), temp_diet_info(0), soap_level(0)
  {
    for (int anon_1 = 0; anon_1 < 6; anon_1++) {
      state_color[anon_1] = 0;
    }
    for (int anon_6 = 0; anon_6 < 2; anon_6++) {
      basic_color[anon_6] = 0;
    }
    for (int anon_7 = 0; anon_7 < 3; anon_7++) {
      build_color[anon_7] = 0;
    }
    for (int anon_8 = 0; anon_8 < 3; anon_8++) {
      tile_color[anon_8] = 0;
    }
  }
  df::material_template::material_template()
  {
  }
  df::material_vec_ref::material_vec_ref()
  {
  }
  df::matgloss_list::matgloss_list()
  {
  }
  df::meeting_context::meeting_context()
    :  meeting(0), popup(0), anon_1(0), anon_2(0)
  {
  }
  df::meeting_diplomat_info::meeting_diplomat_info()
    :  civ_id(-1), unk1(0), diplomat_id(-1), associate_id(-1), sell_requests(0), buy_requests(0), dipscript(0), cur_step(0)
  {
  }
  df::meeting_event::meeting_event()
    :  type(ENUM_FIRST_ITEM(meeting_event_type)), topic(ENUM_FIRST_ITEM(meeting_topic)), topic_parm(0), quota_total(0), quota_remaining(0), year(0), ticks(0), sell_prices(0), buy_prices(0)
  {
  }
  df::meeting_variable::meeting_variable()
    :  value(0), active_var(0)
  {
  }
  df::moving_party::T_members::T_members()
    :  nemesis_id(-1), hunger(0), thirst(0), sleepiness(0), stored_fat(0), unk_14(0), unk_18(1), unk_1c(-1000000), unk_20(-1000000), unk_24(-1000000)
  {
  }
  df::moving_party::moving_party()
    :  unk_4(0), unk_c(0), unk_10(0), entity_id(-1), unk_70(0), unk_72(-1), unk_74(-1), unk_7c(-1), region_id(-1), beast_id(-1)
  {
  }
  df::nemesis_record::nemesis_record()
    :  id(0), unit_id(-1), save_file_id(-1), member_idx(0), figure(0), unit(0), group_leader_id(-1), unk10(-1), unk11(-1), unk12(-1), flags(ENUM_LAST_ITEM(nemesis_flags))
  {
  }
  df::ocean_wave::ocean_wave()
    :  x1(0), y1(0), x2(0), y2(0), z(0), anon_1(0), anon_2(0), anon_3(0)
  {
  }
  df::party_info::party_info()
    :  location(0), timer(0), id(0)
  {
  }
  df::plant::plant()
    :  material(-1), grow_counter(0), hitpoints(0), update_order(0), site_id(-1), srb_id(-1), tree_info(0)
  {
  }
  df::plant_growth::plant_growth()
    :  item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(0), mat_type(-1), mat_index(0), timing_1(0), timing_2(0), density(0), trunk_height_perc_1(0), trunk_height_perc_2(0)
  {
  }
  df::plant_growth_print::plant_growth_print()
    :  priority(0), tile_growth(0), tile_item(0), timing_start(0), timing_end(0)
  {
    for (int anon_1 = 0; anon_1 < 3; anon_1++) {
      color[anon_1] = 0;
    }
  }
  df::plant_raw::T_tiles::T_tiles()
    :  picked_tile(0), dead_picked_tile(0), shrub_tile(0), dead_shrub_tile(0), tree_tile(0), dead_tree_tile(0), sapling_tile(0), dead_sapling_tile(0)
  {
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      grass_tiles[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 12; anon_2++) {
      alt_grass_tiles[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 104; anon_3++) {
      tree_tiles[anon_3] = 0;
    }
  }
  df::plant_raw::T_colors::T_colors()
  {
    for (int anon_1 = 0; anon_1 < 3; anon_1++) {
      picked_color[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 3; anon_2++) {
      dead_picked_color[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 3; anon_3++) {
      shrub_color[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 3; anon_4++) {
      dead_shrub_color[anon_4] = 0;
    }
    for (int anon_5 = 0; anon_5 < 3; anon_5++) {
      seed_color[anon_5] = 0;
    }
    for (int anon_6 = 0; anon_6 < 3; anon_6++) {
      tree_color[anon_6] = 0;
    }
    for (int anon_7 = 0; anon_7 < 3; anon_7++) {
      dead_tree_color[anon_7] = 0;
    }
    for (int anon_8 = 0; anon_8 < 3; anon_8++) {
      sapling_color[anon_8] = 0;
    }
    for (int anon_9 = 0; anon_9 < 3; anon_9++) {
      dead_sapling_color[anon_9] = 0;
    }
    for (int anon_10 = 0; anon_10 < 20; anon_10++) {
      grass_colors_0[anon_10] = 0;
    }
    for (int anon_11 = 0; anon_11 < 20; anon_11++) {
      grass_colors_1[anon_11] = 0;
    }
    for (int anon_12 = 0; anon_12 < 20; anon_12++) {
      grass_colors_2[anon_12] = 0;
    }
  }
  df::plant_raw::T_material_defs::T_material_defs()
    :  type_basic_mat(-1), type_tree(-1), type_drink(-1), type_seed(-1), type_thread(-1), type_mill(-1), type_extract_vial(-1), type_extract_barrel(-1), type_extract_still_vial(-1), idx_basic_mat(0), idx_tree(0), idx_drink(0), idx_seed(0), idx_thread(0), idx_mill(0), idx_extract_vial(0), idx_extract_barrel(0), idx_extract_still_vial(0)
  {
  }
  df::plant_raw::plant_raw()
    :  anon_1(0), flags(ENUM_LAST_ITEM(plant_raw_flags)), source_hfid(-1), unk1(0), unk2(0), growdur(0), value(0), shrub_drown_level(0), tree_drown_level(0), sapling_drown_level(0), frequency(0), clustersize(0), underground_depth_min(0), underground_depth_max(0), trunk_period(0), heavy_branch_density(0), light_branch_density(0), max_trunk_height(0), heavy_branch_radius(0), light_branch_radius(0), trunk_branching(0), max_trunk_diameter(0), trunk_width_period(0), cap_period(0), cap_radius(0), root_density(0), root_radius(0)
  {
    for (int anon_5 = 0; anon_5 < 2; anon_5++) {
      alt_period[anon_5] = 0;
    }
  }
  df::plant_tree_info::plant_tree_info()
    :  body(0), unk1(0), unk2(0), unk3(0), unk4(0), body_height(0), dim_x(0), dim_y(0), roots(0), roots_depth(0), unk6(0)
  {
  }
  df::popup_message::popup_message()
    :  color(7), bright(true)
  {
  }
  df::power_info::power_info()
    :  produced(0), consumed(0)
  {
  }
  df::pressure_plate_info::pressure_plate_info()
    :  unit_min(50000), unit_max(200000), water_min(1), water_max(7), magma_min(1), magma_max(7), track_min(1), track_max(2000)
  {
    flags.whole = 0x10;
  }
  df::proj_itemst::proj_itemst(virtual_identity *_id)
    :  projectile(_id), item(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::proj_list_link::proj_list_link()
    :  item(0), prev(0), next(0)
  {
  }
  df::proj_magicst::proj_magicst(virtual_identity *_id)
    :  projectile(_id), unk(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::proj_unitst::proj_unitst(virtual_identity *_id)
    :  projectile(_id), unit(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::projectile::projectile(virtual_identity *_id)
    :  link(0), id(0), firer(0), distance_flown(0), fall_threshold(0), min_hit_distance(0), min_ground_distance(0), fall_counter(0), fall_delay(0), hit_rating(0), unk21(0), unk22(0), bow_id(-1), unk_item_id(-1), unk_unit_id(-1), pos_x(0), pos_y(0), pos_z(0), speed_x(0), speed_y(0), speed_z(0), accel_x(0), accel_y(0), accel_z(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::punishment::punishment()
    :  criminal(0), officer(0), beating(0), hammer_strikes(0), prison_counter(0), unk_10(0), chain(0)
  {
  }
  df::reaction::T_building::T_building()
  {
  }
  df::reaction::reaction()
    :  flags(ENUM_LAST_ITEM(reaction_flags)), skill(ENUM_FIRST_ITEM(job_skill)), index(0)
  {
  }
  df::reaction_product::reaction_product(virtual_identity *_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::reaction_product_item_improvementst::T_get_material::T_get_material()
  {
  }
  df::reaction_product_item_improvementst::reaction_product_item_improvementst(virtual_identity *_id)
    :  reaction_product(_id), improvement_type(ENUM_FIRST_ITEM(improvement_type)), mat_type(-1), mat_index(0), probability(0), flags(ENUM_LAST_ITEM(reaction_product_improvement_flags))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::reaction_product_itemst::T_get_material::T_get_material()
  {
  }
  df::reaction_product_itemst::reaction_product_itemst(virtual_identity *_id)
    :  reaction_product(_id), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0), probability(0), count(0), product_dimension(0), flags(ENUM_LAST_ITEM(reaction_product_item_flags))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::reaction_reagent::reaction_reagent(virtual_identity *_id)
    :  quantity(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::reaction_reagent_itemst::reaction_reagent_itemst(virtual_identity *_id)
    :  reaction_reagent(_id), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0), flags4(0), flags5(0), metal_ore(-1), min_dimension(0), has_tool_use(ENUM_FIRST_ITEM(tool_uses))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::region_map_entry::region_map_entry()
    :  unk_0(0), finder_rank(-1), flags(ENUM_LAST_ITEM(region_map_entry_flags)), elevation(0), rainfall(0), vegetation(0), temperature(0), evilness(0), drainage(0), volcanism(0), savagery(0), unk_30(0), unk_32(0), unk_34(0), unk_3a(0), salinity(0), region_id(-1), landmass_id(-1), geo_index(-1)
  {
  }
  df::renderer::renderer(virtual_identity *_id)
    :  screen(0), screentexpos(0), screentexpos_addcolor(0), screentexpos_grayscale(0), screentexpos_cf(0), screentexpos_cbr(0), screen_old(0), screentexpos_old(0), screentexpos_addcolor_old(0), screentexpos_grayscale_old(0), screentexpos_cf_old(0), screentexpos_cbr_old(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::report::report()
    :  type(ENUM_FIRST_ITEM(announcement_type)), color(7), bright(true), duration(100), repeat_count(0), id(0), year(0), time(0), unk_v40_1(-1), unk_v40_2(-1), unk_v40_3(-1)
  {
  }
  df::resource_allotment_data::T_unk_654::T_unk_654()
    :  unk_0(0)
  {
  }
  df::resource_allotment_data::resource_allotment_data()
    :  index(0), unk1(0), unk2(0), unk3(0), unk_650(0)
  {
  }
  df::resource_allotment_specifier::resource_allotment_specifier(virtual_identity *_id)
    :  anon_1(0), anon_2(0), anon_3(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_ammost::resource_allotment_specifier_ammost(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_anvilst::resource_allotment_specifier_anvilst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_armor_bodyst::resource_allotment_specifier_armor_bodyst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_armor_bootsst::resource_allotment_specifier_armor_bootsst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_armor_glovesst::resource_allotment_specifier_armor_glovesst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_armor_helmst::resource_allotment_specifier_armor_helmst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_armor_pantsst::resource_allotment_specifier_armor_pantsst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_backpackst::resource_allotment_specifier_backpackst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_bagst::resource_allotment_specifier_bagst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_bedst::resource_allotment_specifier_bedst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_bonest::resource_allotment_specifier_bonest(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_boxst::resource_allotment_specifier_boxst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_cabinetst::resource_allotment_specifier_cabinetst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_chairst::resource_allotment_specifier_chairst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_cheesest::resource_allotment_specifier_cheesest(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_clothing_bodyst::resource_allotment_specifier_clothing_bodyst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_clothing_bootsst::resource_allotment_specifier_clothing_bootsst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_clothing_glovesst::resource_allotment_specifier_clothing_glovesst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_clothing_helmst::resource_allotment_specifier_clothing_helmst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_clothing_pantsst::resource_allotment_specifier_clothing_pantsst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_clothst::resource_allotment_specifier_clothst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_craftsst::resource_allotment_specifier_craftsst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_cropst::resource_allotment_specifier_cropst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), anon_1(0), anon_2(0), unk_v40_01(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_4 = 0; anon_4 < 5; anon_4++) {
      anon_3[anon_4] = 0;
    }
  }
  df::resource_allotment_specifier_extractst::resource_allotment_specifier_extractst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0), mat_type2(-1), mat_index2(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_flaskst::resource_allotment_specifier_flaskst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_gemsst::resource_allotment_specifier_gemsst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_hornst::resource_allotment_specifier_hornst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_leatherst::resource_allotment_specifier_leatherst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_meatst::resource_allotment_specifier_meatst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_metalst::resource_allotment_specifier_metalst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_3 = 0; anon_3 < 12; anon_3++) {
      anon_2[anon_3] = 0;
    }
  }
  df::resource_allotment_specifier_pearlst::resource_allotment_specifier_pearlst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_powderst::resource_allotment_specifier_powderst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_quiverst::resource_allotment_specifier_quiverst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_shellst::resource_allotment_specifier_shellst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_skinst::resource_allotment_specifier_skinst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), mat_type2(-1), mat_index2(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_soapst::resource_allotment_specifier_soapst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_stonest::resource_allotment_specifier_stonest(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_4 = 0; anon_4 < 5; anon_4++) {
      anon_3[anon_4] = 0;
    }
  }
  df::resource_allotment_specifier_tablest::resource_allotment_specifier_tablest(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_tallowst::resource_allotment_specifier_tallowst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_threadst::resource_allotment_specifier_threadst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_toothst::resource_allotment_specifier_toothst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_weapon_meleest::resource_allotment_specifier_weapon_meleest(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_weapon_rangedst::resource_allotment_specifier_weapon_rangedst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::resource_allotment_specifier_woodst::resource_allotment_specifier_woodst(virtual_identity *_id)
    :  resource_allotment_specifier(_id), mat_type(-1), mat_index(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::room_rent_info::room_rent_info()
    :  rent_value(0)
  {
  }
  df::route_stockpile_link::route_stockpile_link()
    :  building_id(-1)
  {
  }
  df::schedule_info::schedule_info()
    :  id(0), anon_1(0)
  {
  }
  df::schedule_slot::schedule_slot()
    :  type(0), start_time(0), end_time(0), anon_1(0), processed(0)
  {
  }
  df::script_step_conditionalst::T_condition::T_condition()
  {
  }
  df::script_step_conditionalst::script_step_conditionalst(virtual_identity *_id)
    :  script_stepst(_id), conditional_next_step_idx(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_constructtopiclistst::script_step_constructtopiclistst(virtual_identity *_id)
    :  script_stepst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_dipeventst::script_step_dipeventst(virtual_identity *_id)
    :  script_step_eventst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_diphistoryst::script_step_diphistoryst(virtual_identity *_id)
    :  script_stepst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_discussst::script_step_discussst(virtual_identity *_id)
    :  script_stepst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_eventst::script_step_eventst(virtual_identity *_id)
    :  script_stepst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_invasionst::script_step_invasionst(virtual_identity *_id)
    :  script_step_eventst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_setvarst::script_step_setvarst(virtual_identity *_id)
    :  script_stepst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_simpleactionst::script_step_simpleactionst(virtual_identity *_id)
    :  script_stepst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_textviewerst::script_step_textviewerst(virtual_identity *_id)
    :  script_stepst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_step_topicdiscussionst::script_step_topicdiscussionst(virtual_identity *_id)
    :  script_stepst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_stepst::script_stepst(virtual_identity *_id)
    :  next_step_idx(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_var_longst::script_var_longst(virtual_identity *_id)
    :  script_varst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_var_unitst::script_var_unitst(virtual_identity *_id)
    :  script_varst(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::script_varst::script_varst(virtual_identity *_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_building_item::site_building_item()
    :  race(-1), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0)
  {
  }
  df::site_realization_building::T_unk_4c::T_unk_4c()
    :  unk_0(0), unk_4(0), owner(-1), unk_c(0), unk_10(0), unk_14(0)
  {
  }
  df::site_realization_building::site_realization_building()
    :  id(0), type(ENUM_FIRST_ITEM(site_realization_building_type)), min_x(0), min_y(0), max_x(0), max_y(0), unk_18(0), unk_2c(0), abstract_building_id(0), unk_44(0), building_info(0), unk_5c(0), unk_v40_1(-1000000)
  {
  }
  df::site_realization_building_info_castle_courtyardst::site_realization_building_info_castle_courtyardst(virtual_identity *_id)
    :  site_realization_building_infost(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_realization_building_info_castle_towerst::site_realization_building_info_castle_towerst(virtual_identity *_id)
    :  site_realization_building_infost(_id), unk_4(0), unk_8(0), unk_c(0), unk_10(0), unk_14(0), unk_18(0), unk_3c(0), unk_40(0), unk_44(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_realization_building_info_castle_wallst::site_realization_building_info_castle_wallst(virtual_identity *_id)
    :  site_realization_building_infost(_id), unk_4(0), unk_8(0), unk_c(0), unk_10(0), unk_14(0), unk_18(0), unk_1c(0), unk_20(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_realization_building_info_hillock_housest::site_realization_building_info_hillock_housest(virtual_identity *_id)
    :  site_realization_building_infost(_id), type(ENUM_FIRST_ITEM(hillock_house_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_realization_building_info_market_squarest::site_realization_building_info_market_squarest(virtual_identity *_id)
    :  site_realization_building_infost(_id), type(ENUM_FIRST_ITEM(site_shop_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_realization_building_info_shop_housest::site_realization_building_info_shop_housest(virtual_identity *_id)
    :  site_realization_building_infost(_id), type(ENUM_FIRST_ITEM(site_shop_type))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_realization_building_info_tree_housest::site_realization_building_info_tree_housest(virtual_identity *_id)
    :  site_realization_building_infost(_id), type(ENUM_FIRST_ITEM(tree_house_type)), unk_8(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_realization_building_info_trenchesst::T_unk_8::T_unk_8()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0)
  {
  }
  df::site_realization_building_info_trenchesst::site_realization_building_info_trenchesst(virtual_identity *_id)
    :  site_realization_building_infost(_id), unk_4(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_realization_building_infost::site_realization_building_infost(virtual_identity *_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::site_realization_crossroads::site_realization_crossroads()
    :  idx_x(0), idx_y(0), tile_width(0), tile_height(0), unk_310(0), unk_314(0), unk_318(0), unk_31c(0), unk_320(0), unk_324(0), unk_328(0), unk_32c(0), center_x_tile(0), center_y_tile(0), up(0), down(0), right(0), left(0), unk_348(0), unk_349(0), unk_34c(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0)
  {
    for (int anon_7 = 0; anon_7 < 48; anon_7++) {
      road_min_y[anon_7] = 0;
    }
    for (int anon_8 = 0; anon_8 < 48; anon_8++) {
      road_max_y[anon_8] = 0;
    }
    for (int anon_9 = 0; anon_9 < 48; anon_9++) {
      road_min_x[anon_9] = 0;
    }
    for (int anon_10 = 0; anon_10 < 48; anon_10++) {
      road_max_x[anon_10] = 0;
    }
  }
  df::spatter::spatter()
    :  body_part_id(-1)
  {
  }
  df::spatter_common::spatter_common()
    :  mat_type(-1), mat_index(0), mat_state(ENUM_FIRST_ITEM(matter_state)), size(0)
  {
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::special_mat_table::special_mat_table()
  {
    for (int anon_4 = 0; anon_4 < 659; anon_4++) {
      builtin[anon_4] = 0;
    }
  }
  df::specific_ref::specific_ref()
    :  type(ENUM_FIRST_ITEM(specific_ref_type))
  {
    object = 0;
    arg2.wrestle = 0;
  }
  df::squad::T_rooms::T_rooms()
    :  building_id(-1)
  {
  }
  df::squad::squad()
    :  id(0), cur_alert_idx(0), uniform_priority(0), activity(-1), carry_food(0), carry_water(0), entity_id(-1), leader_position(-1), leader_assignment(-1)
  {
  }
  df::squad_ammo_spec::squad_ammo_spec()
    :  amount(0)
  {
  }
  df::squad_order::squad_order(virtual_identity *_id)
    :  unk_v40_1(-1), unk_v40_2(-1), year(0), year_tick(0), unk_v40_3(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::squad_order_cause_trouble_for_entityst::squad_order_cause_trouble_for_entityst(virtual_identity *_id)
    :  squad_order(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::squad_order_defend_burrowsst::squad_order_defend_burrowsst(virtual_identity *_id)
    :  squad_order(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::squad_order_drive_entity_off_sitest::squad_order_drive_entity_off_sitest(virtual_identity *_id)
    :  squad_order(_id), anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::squad_order_kill_listst::squad_order_kill_listst(virtual_identity *_id)
    :  squad_order(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::squad_order_movest::squad_order_movest(virtual_identity *_id)
    :  squad_order(_id), point_id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::squad_order_patrol_routest::squad_order_patrol_routest(virtual_identity *_id)
    :  squad_order(_id), route_id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::squad_order_trainst::squad_order_trainst(virtual_identity *_id)
    :  squad_order(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::squad_position::squad_position()
    :  occupant(-1), quiver(-1), backpack(-1), flask(-1), unk_118(0), unk_11c(0)
  {
    for (int anon_3 = 0; anon_3 < 3; anon_3++) {
      activities[anon_3] = -1;
    }
    for (int anon_4 = 0; anon_4 < 3; anon_4++) {
      events[anon_4] = -1;
    }
  }
  df::squad_schedule_entry::squad_schedule_entry()
    :  sleep_mode(0), uniform_mode(0)
  {
  }
  df::squad_schedule_order::squad_schedule_order()
    :  order(0), min_count(0)
  {
  }
  df::squad_uniform_spec::squad_uniform_spec()
    :  item(-1), color(0)
  {
  }
  df::stockpile_links::stockpile_links()
  {
  }
  df::stockpile_settings::T_animals::T_animals()
    :  empty_cages(0), empty_traps(0)
  {
  }
  df::stockpile_settings::T_food::T_food()
    :  prepared_meals(0)
  {
  }
  df::stockpile_settings::T_furniture::T_furniture()
    :  sand_bags(0)
  {
    for (int anon_1 = 0; anon_1 < 7; anon_1++) {
      quality_core[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 7; anon_2++) {
      quality_total[anon_2] = 0;
    }
  }
  df::stockpile_settings::T_refuse::T_refuse()
    :  fresh_raw_hide(0), rotten_raw_hide(0)
  {
  }
  df::stockpile_settings::T_stone::T_stone()
  {
  }
  df::stockpile_settings::T_ore::T_ore()
  {
  }
  df::stockpile_settings::T_ammo::T_ammo()
  {
    for (int anon_1 = 0; anon_1 < 7; anon_1++) {
      quality_core[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 7; anon_2++) {
      quality_total[anon_2] = 0;
    }
  }
  df::stockpile_settings::T_coins::T_coins()
  {
  }
  df::stockpile_settings::T_bars_blocks::T_bars_blocks()
  {
  }
  df::stockpile_settings::T_gems::T_gems()
  {
  }
  df::stockpile_settings::T_finished_goods::T_finished_goods()
  {
    for (int anon_1 = 0; anon_1 < 7; anon_1++) {
      quality_core[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 7; anon_2++) {
      quality_total[anon_2] = 0;
    }
  }
  df::stockpile_settings::T_leather::T_leather()
  {
  }
  df::stockpile_settings::T_cloth::T_cloth()
  {
  }
  df::stockpile_settings::T_wood::T_wood()
  {
  }
  df::stockpile_settings::T_weapons::T_weapons()
    :  usable(0), unusable(0)
  {
    for (int anon_1 = 0; anon_1 < 7; anon_1++) {
      quality_core[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 7; anon_2++) {
      quality_total[anon_2] = 0;
    }
  }
  df::stockpile_settings::T_armor::T_armor()
    :  usable(0), unusable(0)
  {
    for (int anon_1 = 0; anon_1 < 7; anon_1++) {
      quality_core[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 7; anon_2++) {
      quality_total[anon_2] = 0;
    }
  }
  df::stockpile_settings::stockpile_settings()
    :  unk1(0), allow_organic(true), allow_inorganic(true)
  {
  }
  df::stop_depart_condition::stop_depart_condition()
    :  timeout(0), direction(North), mode(Push), load_percent(0)
  {
  }
  df::syndrome::syndrome()
    :  id(0)
  {
  }
  df::talk_choice::talk_choice()
    :  type(ENUM_FIRST_ITEM(talk_choice_type)), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(-1)
  {
  }
  df::temperaturest::temperaturest()
    :  whole(10050), fraction(0)
  {
  }
  df::texture_handler::texture_handler()
  {
  }
  df::tile_bitmask::tile_bitmask()
  {
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      bits[anon_1] = 0;
    }
  }
  df::tile_page::tile_page()
    :  tile_dim_x(0), tile_dim_y(0), page_dim_x(0), page_dim_y(0), loaded(0)
  {
  }
  df::timed_event::timed_event()
    :  type(ENUM_FIRST_ITEM(timed_event_type)), season(0), season_ticks(0), entity(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0)
  {
  }
  df::tissue::tissue()
    :  flags(ENUM_LAST_ITEM(tissue_flags)), mat_type(-1), mat_index(0), relative_thickness(0), healing_rate(0), vascular(0), pain_receptors(0), tissue_shape(0), unk1(-1), insulation(0), parent_tissue(-1), tissue_mat_state(ENUM_FIRST_ITEM(matter_state)), heatdam_point(0), colddam_point(0), ignite_point(0), melting_point(0), boiling_point(0), spec_heat(0)
  {
  }
  df::tissue_style_raw::tissue_style_raw()
    :  id(0), word_type(ENUM_FIRST_ITEM(part_of_speech))
  {
  }
  df::tissue_template::tissue_template()
    :  flags(ENUM_LAST_ITEM(tissue_flags)), mat_type(-1), mat_index(0), relative_thickness(0), healing_rate(0), vascular(0), pain_receptors(0), tissue_shape(0), unk1(-1), insulation(0), tissue_mat_state(ENUM_FIRST_ITEM(matter_state))
  {
  }
  df::training_assignment::training_assignment()
    :  animal_id(-1), trainer_id(-1), auto_mode(None)
  {
  }
  df::ui::T_tax_collection::T_tax_collection()
    :  state(0), check_timer(0), reach_room_timer(0), tc_protect_timer(0), guard1_reach_tc_timer(0), guard2_reach_tc_timer(0), collected(0), quota(0), collector(0), guard1(0), guard2(0), guard_lack_complained(0)
  {
    for (int anon_1 = 0; anon_1 < 2; anon_1++) {
      guard_pos_x[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 2; anon_2++) {
      guard_pos_y[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 2; anon_3++) {
      guard_pos_z[anon_3] = 0;
    }
  }
  df::ui::T_becoming_capital::T_becoming_capital()
    :  desired_architecture(0), desired_offerings(0)
  {
  }
  df::ui::T_invasions::T_invasions()
    :  next_id(0)
  {
  }
  df::ui::T_kitchen::T_kitchen()
  {
  }
  df::ui::T_economy_prices::T_price_adjustment::T_price_adjustment()
  {
  }
  df::ui::T_economy_prices::T_price_setter::T_price_setter()
  {
  }
  df::ui::T_economy_prices::T_economy_prices()
  {
  }
  df::ui::T_stockpile::T_stockpile()
    :  reserved_bins(0), reserved_barrels(0)
  {
  }
  df::ui::T_unk2a8c::T_unk2a8c()
    :  unk1(0), unk2(0)
  {
  }
  df::ui::T_map_edge::T_map_edge()
  {
  }
  df::ui::T_waypoints::T_points::T_points()
    :  id(0), tile(0), fg_color(0), bg_color(0)
  {
  }
  df::ui::T_waypoints::T_routes::T_routes()
    :  id(0)
  {
  }
  df::ui::T_waypoints::T_waypoints()
    :  sym_selector(0), anon_1(0), cur_point_index(0), in_edit_name_mode(0), anon_2(0), sym_tile(0), sym_fg_color(0), sym_bg_color(0), next_point_id(0), next_route_id(0), sel_route_idx(0), sel_route_waypt_idx(0), in_edit_waypts_mode(0)
  {
  }
  df::ui::T_burrows::T_burrows()
    :  next_id(0), sel_index(-1), sel_id(-1), in_confirm_delete(0), in_add_units_mode(0), unit_cursor_pos(0), in_define_mode(0), brush_mode(0), in_edit_name_mode(0), sym_selector(0), sym_tile(0), sym_fg_color(0), sym_bg_color(0)
  {
  }
  df::ui::T_alerts::T_list::T_list()
    :  id(0)
  {
  }
  df::ui::T_alerts::T_alerts()
    :  next_id(0), civ_alert_idx(-1)
  {
  }
  df::ui::T_equipment::T_equipment()
  {
  }
  df::ui::T_hauling::T_hauling()
    :  next_id(0), cursor_top(0), in_stop(0), cursor_stop(0), in_advanced_cond(0), in_assign_vehicle(0), cursor_vehicle(0), in_name(0)
  {
  }
  df::ui::T_main::T_dead_citizens::T_dead_citizens()
    :  unit_id(-1), histfig_id(-1), death_year(0), death_time(0), timer(0), ghost_type(ENUM_FIRST_ITEM(ghost_type))
  {
  }
  df::ui::T_main::T_main()
    :  traffic_cost_high(0), traffic_cost_normal(0), traffic_cost_low(0), traffic_cost_restricted(0), fortress_entity(0), mode(ENUM_FIRST_ITEM(ui_sidebar_mode)), unk1(0), selected_traffic_cost(0), autosave_request(0), autosave_unk(0), unk6df4(0), selected_hotkey(0), in_rename_hotkey(0)
  {
  }
  df::ui::T_squads::T_squads()
    :  in_select_indiv(0), sel_indiv_squad(-1), unk48(0), unk4c(0), in_move_order(0), point_list_scroll(0), in_kill_order(0), in_kill_list(0), in_kill_rect(0)
  {
    memset(anon_1, 0, sizeof(anon_1));
    memset(anon_2, 0, sizeof(anon_2));
    memset(anon_3, 0, sizeof(anon_3));
  }
  df::ui::ui()
    :  game_state(0), lost_to_siege_civ(-1), anon_1(0), manager_cooldown(0), bookkeeper_cooldown(0), bookkeeper_precision(0), bookkeeper_settings(0), anon_2(0), fortress_rank(0), progress_population(0), progress_trade(0), progress_production(0), king_arrived(0), king_hasty(0), economy_active(0), ignore_labor_shortage(0), justice_active(0), anon_3(60001), anon_4(60001), manager_timer(0), trees_removed(0), anon_5(0), fortress_age(0), game_over(0), mood_cooldown(0), civ_id(-1), site_id(-1), group_id(-1), race_id(-1), follow_unit(-1), follow_item(-1)
  {
    for (int anon_6 = 0; anon_6 < 152; anon_6++) {
      units_killed[anon_6] = 0;
    }
    for (int anon_7 = 0; anon_7 < 6; anon_7++) {
      guild_wages[anon_7] = 0;
    }
    for (int anon_8 = 0; anon_8 < 6; anon_8++) {
      guild_happiness[anon_8] = 0;
    }
    for (int anon_9 = 0; anon_9 < 6; anon_9++) {
      labor_slowdown_timer[anon_9] = 0;
    }
  }
  df::ui_advmode::T_unk_v40_1::T_unk_v40_1()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0)
  {
  }
  df::ui_advmode::T_conversation::T_choices::T_choices()
    :  choice(0), unk_1c(0), unk_20(0)
  {
  }
  df::ui_advmode::T_conversation::T_targets::T_targets()
    :  unit_id(-1), histfig_id(-1), unk_8(0)
  {
  }
  df::ui_advmode::T_conversation::T_conversation()
    :  cursor_activity(-1), cursor_choice(-1), unk4(0), cursor_target(-1)
  {
  }
  df::ui_advmode::T_companions::T_companions()
  {
  }
  df::ui_advmode::T_unk_v40_2::T_unk_v40_2()
    :  anon_5(0)
  {
  }
  df::ui_advmode::T_unk_v40_3::T_unk_v40_3()
    :  anon_1(0)
  {
  }
  df::ui_advmode::T_unk_v40_4::T_unk_v40_4a::T_unk_v40_4a()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0)
  {
  }
  df::ui_advmode::T_unk_v40_4::T_unk_v40_4()
    :  anon_1(0)
  {
  }
  df::ui_advmode::T_unk_v40_5::T_unk_v40_5()
    :  anon_4(0)
  {
  }
  df::ui_advmode::ui_advmode()
    :  menu(ENUM_FIRST_ITEM(ui_advmode_menu)), anon_1(0), anon_2(0), anon_3(0), anon_4(0), travel_clouds(0), travel_right_map(MapNone), unk4a(0), travel_not_moved(0), unk4b(0), travel_move_countdown(0), tick_counter(0), frame_counter(0), unk6(0), sleeping(0), anon_5(0), bogeymen_timer(0), bogeymen_killed(0), unk9(0), unk10(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0), anon_11(0), anon_12(0), anon_13(0), anon_17(0), anon_18(0), anon_19(0), anon_27(0), anon_28(0), anon_29(0), anon_30(0), anon_31(0), anon_32(0), anon_33(0), anon_34(0), anon_35(0), anon_36(0), anon_37(0), anon_38(0), anon_39(0), anon_40(0), anon_41(0), anon_42(0), unk23(0), unk24(0), unk25(0), unk26(0), player_id(-1), anon_43(0), anon_44(0), anon_45(0), anon_46(0), anon_48(0), anon_49(0), anon_50(0), anon_51(0), anon_52(0), anon_53(0), anon_54(0), anon_55(0), anon_56(0), anon_57(0), unk_1e4(0), unk_1e8(0), unk_1ec(0), unk_1f0(0), unk_1f4(0), unk_1f8(0), unk_1fc(0), unk_200(0), unk_220(0), unk_224(0), anon_58(0), anon_59(0), anon_60(0)
  {
    for (int anon_61 = 0; anon_61 < 1000; anon_61++) {
      anon_14[anon_61] = 0;
    }
    for (int anon_62 = 0; anon_62 < 1000; anon_62++) {
      anon_15[anon_62] = 0;
    }
    for (int anon_63 = 0; anon_63 < 1000; anon_63++) {
      anon_16[anon_63] = 0;
    }
    for (int anon_64 = 0; anon_64 < 9; anon_64++) {
      anon_20[anon_64] = 0;
    }
    for (int anon_65 = 0; anon_65 < 9; anon_65++) {
      anon_21[anon_65] = 0;
    }
    for (int anon_66 = 0; anon_66 < 9; anon_66++) {
      anon_22[anon_66] = 0;
    }
    for (int anon_68 = 0; anon_68 < 9; anon_68++) {
      anon_23[anon_68] = 0;
    }
    for (int anon_69 = 0; anon_69 < 9; anon_69++) {
      anon_24[anon_69] = 0;
    }
    for (int anon_70 = 0; anon_70 < 9; anon_70++) {
      anon_25[anon_70] = 0;
    }
    for (int anon_71 = 0; anon_71 < 9; anon_71++) {
      anon_26[anon_71] = 0;
    }
  }
  df::ui_build_item_req::ui_build_item_req()
    :  count_required(0), count_max(0), count_provided(0)
  {
  }
  df::ui_build_selector::ui_build_selector()
    :  building_type(ENUM_FIRST_ITEM(building_type)), building_subtype(0), custom_type(-1), stage(0), req_index(0), sel_index(0), is_grouped(0), unk5_0a(0), unk5_0b(0), friction(50000), use_dump(0), dump_x_shift(0), dump_y_shift(0), speed(50000)
  {
    for (int anon_1 = 0; anon_1 < 31; anon_1++) {
      for (int anon_2 = 0; anon_2 < 31; anon_2++) {
        tiles[anon_1][anon_2] = 0;
      }
    }
  }
  df::ui_hotkey::ui_hotkey()
    :  cmd(None), x(0), y(0), z(0)
  {
    unit_id = -1;
  }
  df::ui_look_list::T_items::T_items()
    :  type(Item), spatter_item_type(ENUM_FIRST_ITEM(item_type)), spatter_item_subtype(-1), spatter_mat_type(-1), spatter_mat_index(0), spatter_mat_state(ENUM_FIRST_ITEM(matter_state)), anon_1(0), anon_2(0), anon_3(0)
  {
    item = 0;
  }
  df::ui_look_list::ui_look_list()
  {
  }
  df::ui_sidebar_menus::T_designation::T_designation()
    :  marker_only(0), priority_set(0), priority(4000), mine_mode(All)
  {
  }
  df::ui_sidebar_menus::T_workshop_job::T_workshop_job()
    :  cursor(0), category_id(0), mat_type(-1), mat_index(0)
  {
  }
  df::ui_sidebar_menus::T_building::T_building()
    :  category_id(0), cursor(0)
  {
  }
  df::ui_sidebar_menus::T_zone::T_zone()
    :  remove(0), mode(Rectangle), selected(0)
  {
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::ui_sidebar_menus::T_unit::T_unit()
    :  in_new_squad(0), cursor_uniform(0), unk_88n_cursor(0), anon_1(0), anon_2(0), anon_3(0), in_squad(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), unk_80(0), unk_84(0), unk_88(0), unk_8c(0), unk_90(0), unk_a0(0), unk_a1(0), show_combat(0), show_labor(0), show_misc(0)
  {
  }
  df::ui_sidebar_menus::T_barracks::T_barracks()
    :  squad_cursor(0), in_rename(0), in_positions(0), position_squad(0), position_cursor(0), in_position_squads(0), position_squad_cursor(0)
  {
  }
  df::ui_sidebar_menus::T_minimap::T_minimap()
    :  need_render(0), need_scan(0), z_level(0)
  {
    for (int anon_1 = 0; anon_1 < 23; anon_1++) {
      for (int anon_2 = 0; anon_2 < 23; anon_2++) {
        data[anon_1][anon_2] = 0;
      }
    }
    for (int anon_3 = 0; anon_3 < 23; anon_3++) {
      for (int anon_4 = 0; anon_4 < 23; anon_4++) {
        tile[anon_3][anon_4] = 0;
      }
    }
    for (int anon_5 = 0; anon_5 < 23; anon_5++) {
      for (int anon_6 = 0; anon_6 < 23; anon_6++) {
        tile_fg[anon_5][anon_6] = 0;
      }
    }
    for (int anon_7 = 0; anon_7 < 23; anon_7++) {
      for (int anon_8 = 0; anon_8 < 23; anon_8++) {
        tile_bg[anon_7][anon_8] = 0;
      }
    }
    for (int anon_9 = 0; anon_9 < 23; anon_9++) {
      for (int anon_10 = 0; anon_10 < 23; anon_10++) {
        tile_bold[anon_9][anon_10] = 0;
      }
    }
  }
  df::ui_sidebar_menus::T_unk::T_unk()
    :  unk_17c0(0), unk_17c4(0), unk_17c8(0), unk_17d0(0), num_speech_tokens(0), unk_17d8(0)
  {
  }
  df::ui_sidebar_menus::ui_sidebar_menus()
  {
  }
  df::ui_unit_view_mode::ui_unit_view_mode()
    :  value(General)
  {
  }
  df::unit::T_path::T_path()
    :  goal(ENUM_FIRST_ITEM(unit_path_goal))
  {
  }
  df::unit::T_meeting::T_meeting()
    :  state(SelectNoble), target_entity(-1), target_role(ENUM_FIRST_ITEM(entity_position_responsibility))
  {
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::unit::T_military::T_military()
    :  squad_id(-1), squad_position(-1), patrol_cooldown(0), patrol_timer(0), cur_uniform(0)
  {
  }
  df::unit::T_animal::T_animal()
    :  leave_countdown(0), vanish_countdown(0)
  {
  }
  df::unit::T_opponent::T_opponent()
    :  unit_id(-1), anon_1(0)
  {
  }
  df::unit::T_relations::T_relations()
    :  pregnancy_timer(0), pregnancy_genes(0), pregnancy_caste(-1), pregnancy_spouse(-1), mood_copy(df::enums::mood_type::None), ghost_info(0), anon_1(-1), birth_year(-1), birth_time(-1), curse_year(-1), curse_time(-1), birth_year_bias(0), birth_time_bias(0), old_year(-1), old_time(-1), following(0), unk_238(0), pet_owner_id(-1), spouse_id(-1), mother_id(-1), father_id(-1), last_attacker_id(-1), group_leader_id(-1), draggee_id(-1), dragger_id(-1), rider_mount_id(-1), lover_id(-1), mount_type(0)
  {
  }
  df::unit::T_job::T_job()
    :  account(0), satisfaction(0), hunt_target(0), destroy_target(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), gait_buildup(0), unk_v4014_1(-1), current_job(0), mood_skill(ENUM_FIRST_ITEM(job_skill)), mood_timeout(0), unk_39c(0)
  {
  }
  df::unit::T_body::T_body()
    :  wound_next_id(1), body_plan(0), weapon_bp(-1), blood_max(0), blood_count(0), infection_level(0)
  {
    for (int anon_1 = 0; anon_1 < 10; anon_1++) {
      unk_39c[anon_1] = -1;
    }
  }
  df::unit::T_appearance::T_appearance()
    :  size_modifier(0)
  {
  }
  df::unit::T_counters::T_counters()
    :  think_counter(0), job_counter(0), swap_counter(0), death_cause(ENUM_FIRST_ITEM(death_type)), death_id(-1), winded(0), stunned(0), unconscious(0), suffocation(0), webbed(0), soldier_mood_countdown(300), soldier_mood(None), pain(0), nausea(0), dizziness(0), anon_1(0)
  {
  }
  df::unit::T_curse::T_curse()
    :  name_visible(0), sym_and_color1(0x400), sym_and_color2(0x400), flash_period(0), flash_time2(0), speed_add(0), speed_mul_percent(100), attr_change(0), luck_mul_percent(100), time_on_site(0)
  {
  }
  df::unit::T_counters2::T_counters2()
    :  paralysis(0), numbness(0), fever(0), exhaustion(0), hunger_timer(0), thirst_timer(0), sleepiness_timer(0), stomach_content(0), stomach_food(0), vomit_timeout(0), stored_fat(0)
  {
  }
  df::unit::T_status::T_eat_history::T_food::T_food()
  {
  }
  df::unit::T_status::T_eat_history::T_drink::T_drink()
  {
  }
  df::unit::T_status::T_eat_history::T_eat_history()
  {
  }
  df::unit::T_status::T_status()
    :  eat_history(0), demand_timeout(1000), mandate_timeout(1000), face_direction(0), current_soul(0), adv_sleep_timer(0)
  {
    for (int anon_1 = 0; anon_1 < 94; anon_1++) {
      labors[anon_1] = 0;
    }
  }
  df::unit::T_status2::T_status2()
    :  limbs_stand_max(0), limbs_stand_count(0), limbs_grasp_max(0), limbs_grasp_count(0), limbs_fly_max(0), limbs_fly_count(0), add_path_flags(0), liquid_depth(0), unk_7c0(-1)
  {
  }
  df::unit::T_unknown7::T_unknown7()
  {
  }
  df::unit::T_syndromes::T_syndromes()
  {
  }
  df::unit::T_reports::T_reports()
  {
    for (int anon_2 = 0; anon_2 < 3; anon_2++) {
      last_year[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 3; anon_3++) {
      last_year_tick[anon_3] = 0;
    }
  }
  df::unit::T_enemy::T_undead::T_undead()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0)
  {
  }
  df::unit::T_enemy::T_witness_reports::T_witness_reports()
    :  death_id(-1), crime_id(-1), unk1(0), year(0), year_tick(0), unk2(0)
  {
  }
  df::unit::T_enemy::T_anon_12::T_anon_12()
  {
  }
  df::unit::T_enemy::T_enemy()
    :  undead(0), were_race(-1), were_caste(-1), normal_race(-1), normal_caste(-1), interaction(-1), unk_v40_2_count(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_12(0), enemy_status_slot(-1), unk_874_cntr(0)
  {
    for (int anon_13 = 0; anon_13 < 5; anon_13++) {
      gait_index[anon_13] = 0;
    }
    for (int anon_14 = 0; anon_14 < 10; anon_14++) {
      unk_v40_1a[anon_14] = 0;
    }
    for (int anon_15 = 0; anon_15 < 10; anon_15++) {
      unk_v40_1b[anon_15] = 0;
    }
    for (int anon_16 = 0; anon_16 < 10; anon_16++) {
      unk_v40_1c[anon_16] = 0;
    }
    for (int anon_17 = 0; anon_17 < 10; anon_17++) {
      unk_v40_1d[anon_17] = 0;
    }
    for (int anon_18 = 0; anon_18 < 10; anon_18++) {
      unk_v40_1e[anon_18] = 0;
    }
    for (int anon_19 = 0; anon_19 < 20; anon_19++) {
      unk_v40_2[anon_19] = 0;
    }
    for (int anon_20 = 0; anon_20 < 180; anon_20++) {
      anon_1[anon_20] = 0;
    }
  }
  df::unit::T_recuperation::T_recuperation()
    :  effective_rate(-1), tendons_heal(0), ligaments_heal(0)
  {
  }
  df::unit::unit()
    :  profession(df::enums::profession::STANDARD), profession2(df::enums::profession::STANDARD), race(-1), idle_area_threshold(3), idle_area_type(ENUM_FIRST_ITEM(unit_station_type)), follow_distance(0), caste(-1), sex(-1), id(0), unk_100(0), training_level(df::enums::animal_training_level::WildUntamed), schedule_id(-1), civ_id(-1), population_id(-1), unk_c0(-1), cultural_identity(-1), invasion_id(-1), patrol_index(0), mood(df::enums::mood_type::None), unk_18e(0), riding_item_id(-1), next_action_id(0), hist_figure_id(-1), hist_figure_id2(-1), health(0), weight(0), weight_fraction(0), combat_side_id(0), anon_5(0)
  {
  }
  df::unit_action::unit_action()
    :  type(df::enums::unit_action_type::None), id(-1)
  {
    data.move.x = 0;
    data.move.y = 0;
    data.move.z = 0;
    data.move.timer = 0;
    data.move.timer_init = 0;
    data.move.fatigue = 0;
    data.move.flags = 0;
  }
  df::unit_attribute::unit_attribute()
    :  value(1000), max_value(2000), improve_counter(0), unused_counter(0), soft_demotion(0), rust_counter(0), demotion_counter(0)
  {
  }
  df::unit_chunk::T_units::T_units()
    :  unit(0)
  {
  }
  df::unit_chunk::unit_chunk()
    :  id(0)
  {
  }
  df::unit_coin_debt::unit_coin_debt()
    :  recipient(-1), amount(0)
  {
  }
  df::unit_complaint::unit_complaint()
    :  type(SelfUnemployed), guild(ENUM_FIRST_ITEM(guild_id)), age(0)
  {
  }
  df::unit_demand::unit_demand()
    :  unk_0(0), place(Office), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(-1), timeout_counter(0), timeout_limit(0)
  {
  }
  df::unit_genes::unit_genes()
  {
  }
  df::unit_ghost_info::unit_ghost_info()
    :  type(ENUM_FIRST_ITEM(ghost_type)), type2(ENUM_FIRST_ITEM(ghost_type)), goal(ENUM_FIRST_ITEM(ghost_goal)), action_timer(403200), unk_18(0), death_x(0), death_y(0), death_z(0)
  {
    target.unit = -1;
  }
  df::unit_health_info::T_op_history::T_op_history()
    :  job_type(ENUM_FIRST_ITEM(job_type)), year(0), year_time(0), doctor_id(-1)
  {
    info.crutch.item_type = -1;
    info.crutch.item_subtype = -1;
    info.crutch.mat_type = -1;
    info.crutch.mat_index = -1;
    info.crutch.item_id = -1;
  }
  df::unit_health_info::unit_health_info()
    :  unit_id(-1), unk_18_cntdn(0), immobilize_cntdn(0), dressing_cntdn(0), suture_cntdn(0), crutch_cntdn(0)
  {
  }
  df::unit_inventory_item::unit_inventory_item()
    :  item(0), mode(Hauled), body_part_id(-1), pet_seed(0), wound_id(-1)
  {
  }
  df::unit_item_use::unit_item_use()
    :  id(-1), time_in_use(0), has_grown_attached(0), affection_level(0)
  {
  }
  df::unit_item_wrestle::unit_item_wrestle()
    :  unit(-1), self_bp(-1), other_bp(-1), unk_c(-1), unk_10(-1), item1(-1), item2(-1), unk_1c(0), unk_1e(0), unk_20(-1)
  {
  }
  df::unit_misc_trait::unit_misc_trait()
    :  id(ENUM_FIRST_ITEM(misc_trait_type)), value(0)
  {
  }
  df::unit_personality::T_values::T_values()
    :  type(ENUM_FIRST_ITEM(value_type)), strength(0)
  {
  }
  df::unit_personality::T_unk_v40_2::T_unk_v40_2()
    :  unk1(0), unk2(0)
  {
  }
  df::unit_personality::T_emotions::T_emotions()
    :  type(ENUM_FIRST_ITEM(emotion_type)), unk2(0), strength(0), thought(ENUM_FIRST_ITEM(unit_thought_type)), subthought(0), severity(0), flags(0), unk7(0), year(0), year_tick(0)
  {
  }
  df::unit_personality::T_dreams::T_dreams()
    :  unk1(0), type(ENUM_FIRST_ITEM(goal_type)), unk3(-1), unk8(0)
  {
  }
  df::unit_personality::T_unk_v40_6::T_unk_v40_6()
    :  unk1(-1), unk2(-1), unk3(-1), unk4(-1), unk5(-1), unk6(0)
  {
  }
  df::unit_personality::T_unk5::T_unk5()
    :  unk1(0), unk2(0)
  {
  }
  df::unit_personality::unit_personality()
    :  next_dream_id(0), civ_id(-1), cultural_identity(-1), stress_level(0), unk_v4014_2(0), unk_v4014_3(0), unk_v4019_1(0), unk_v4019_2(0)
  {
    for (int anon_1 = 0; anon_1 < 50; anon_1++) {
      traits[anon_1] = 0;
    }
  }
  df::unit_preference::unit_preference()
    :  type(LikeMaterial), item_subtype(-1), mattype(-1), matindex(0), active(0), prefstring_seed(0)
  {
    item_type = ENUM_FIRST_ITEM(item_type);
  }
  df::unit_request::unit_request()
    :  type(DoGuildJobs), guild(ENUM_FIRST_ITEM(guild_id)), count(0)
  {
  }
  df::unit_skill::unit_skill()
    :  id(ENUM_FIRST_ITEM(job_skill)), rating(ENUM_FIRST_ITEM(skill_rating)), experience(0), unused_counter(0), rusty(0), rust_counter(0), demotion_counter(0), unk_1c(0)
  {
  }
  df::unit_soul::unit_soul()
    :  unit_id(-1), race(0), sex(0), caste(0), unk2(0), unk3(0), unk4(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0)
  {
  }
  df::unit_syndrome::T_symptoms::T_symptoms()
    :  quantity(0), delay(0), ticks(0)
  {
  }
  df::unit_syndrome::unit_syndrome()
    :  type(-1), year(0), year_time(0), ticks(0), wound_id(-1), reinfection_count(0)
  {
  }
  df::unit_wound::T_parts::T_parts()
    :  global_layer_idx(-1), body_part_id(-1), layer_idx(-1), contact_area(0), surface_perc(0), strain(0), edged_curve_perc(0), bleeding(0), pain(0), nausea(0), dizziness(0), paralysis(0), numbness(0), swelling(0), impaired(0), cur_penetration_perc(0), max_penetration_perc(0), jammed_layer_idx(-1), unk_v406_1(0)
  {
  }
  df::unit_wound::unit_wound()
    :  id(0), age(0), attacker_unit_id(-1), attacker_hist_figure_id(-1), syndrome_id(-1), pain(0), nausea(0), dizziness(0), paralysis(0), numbness(0), fever(0), curse(0)
  {
  }
  df::vehicle::vehicle()
    :  id(0), item_id(-1), offset_x(0), offset_y(0), offset_z(0), speed_x(0), speed_y(0), speed_z(0), route_id(-1), time_stopped(0)
  {
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::vermin::vermin()
    :  race(-1), caste(-1), visible(0), countdown(0), item(0), amount(0), unk_34(0), id(0)
  {
  }
  df::viewscreen::viewscreen(virtual_identity *_id)
    :  child(0), parent(0), breakdown_level(df::enums::interface_breakdown_types::NONE), option_key_pressed(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_adventure_logst::viewscreen_adventure_logst(virtual_identity *_id)
    :  viewscreen(_id), mode(Info), map_islocalview(0), map_hidden(0), player_region_x(0), player_region_y(0), player_local_x(0), player_local_y(0), unk_8(0), unk_9(0), unk_10(0), unk_11(0), cursor_x(0), cursor_y(0), index(0), map_draw_line(0), info_mode(Events), local_area_x1(0), local_area_x2(0), local_area_y1(0), local_area_y2(0), unk_v40_1a(0), unk_v40_1b(0), unk_v40_1c(0), unk_v40_1d(0), unk_v40_1e(0), unk_v40_1f(0), in_filter(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_announcelistst::viewscreen_announcelistst(virtual_identity *_id)
    :  viewscreen(_id), unit(0), report_type(ENUM_FIRST_ITEM(unit_report_type)), sel_idx(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_barterst::viewscreen_barterst(virtual_identity *_id)
    :  viewscreen(_id), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_11(0), anon_12(0), anon_13(0), max_ask(0), max_offer(0), cur_ask(0), cur_offer(0), anon_14(0), anon_15(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_20 = 0; anon_20 < 2; anon_20++) {
      anon_10[anon_20] = 0;
    }
  }
  df::viewscreen_buildinglistst::viewscreen_buildinglistst(virtual_identity *_id)
    :  viewscreen(_id), cursor(-1), alt_right_panel(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_buildingst::viewscreen_buildingst(virtual_identity *_id)
    :  viewscreen(_id), building(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_choose_start_sitest::T_finder::T_finder()
    :  anon_1(0), search_x(-1), search_y(0), cursor(-1), finder_state(-1), unk_11e(0), unk_120(0), unk_122(0), unk_124(0), unk_126(0), unk_128(0)
  {
    for (int anon_2 = 0; anon_2 < 22; anon_2++) {
      options[anon_2] = 0;
    }
    for (int anon_3 = 0; anon_3 < 22; anon_3++) {
      unmatched[anon_3] = 0;
    }
  }
  df::viewscreen_choose_start_sitest::viewscreen_choose_start_sitest(virtual_identity *_id)
    :  viewscreen(_id), page(Biome), biome_idx(0), biome_highlighted(0), in_embark_aquifer(0), in_embark_salt(0), in_embark_large(0), in_embark_normal(0), unk_74(0), civ_idx(-1), site_abandoned(0), site_created(0), unk_a4(0), unk_14c(0), unk_150(0), unk_154(0), unk_156(0), unk_158(0), unk_15a(0), unk_15c(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_civlistst::viewscreen_civlistst(virtual_identity *_id)
    :  viewscreen(_id), sel_idx(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::viewscreen_conversationst::viewscreen_conversationst(virtual_identity *_id)
    :  viewscreen(_id), conversation(0), cursor_speech_line(0), current_question(0), cursor_line(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_createquotast::viewscreen_createquotast(virtual_identity *_id)
    :  viewscreen(_id), top_idx(0), sel_idx(0), want_quantity(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(str_filter, 0, sizeof(str_filter));
  }
  df::viewscreen_customize_unitst::viewscreen_customize_unitst(virtual_identity *_id)
    :  viewscreen(_id), unit(0), editing_nickname(0), editing_profession(0), has_name(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_dungeon_monsterstatusst::viewscreen_dungeon_monsterstatusst(virtual_identity *_id)
    :  viewscreen(_id), unit(0), inventory_cursor(0), body_part_cursor(0), view_skills(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_dungeon_wrestlest::T_unk1::T_unk1()
    :  anon_1(0), anon_2(0), anon_3(0)
  {
  }
  df::viewscreen_dungeon_wrestlest::viewscreen_dungeon_wrestlest(virtual_identity *_id)
    :  viewscreen(_id), player(0), target(0), anon_1(0), anon_2(0), anon_4(0), anon_5(0), anon_8(0), anon_9(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_dungeonmodest::viewscreen_dungeonmodest(virtual_identity *_id)
    :  viewscreen(_id), x(0), y(0), z(0), announce_y(0), announce_idx(0), announce_more(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_dwarfmodest::viewscreen_dwarfmodest(virtual_identity *_id)
    :  viewscreen(_id), shown_site_name(0), jeweler_mat_count(0), unit_labors_sidemenu_uplevel_idx(0), sideSubmenu(0), keyRepeat(0), trained_animal_idx(0), number_assigned_hunt(0), number_assigned_war(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_entityst::viewscreen_entityst(virtual_identity *_id)
    :  viewscreen(_id), entity(0), anon_2(0), start_idx(0), agreement_cursor(0), page(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_export_graphical_mapst::viewscreen_export_graphical_mapst(virtual_identity *_id)
    :  viewscreen(_id), anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0), anon_11(0), anon_12(0), sel_idx(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_export_regionst::viewscreen_export_regionst(virtual_identity *_id)
    :  viewscreen(_id), anon_1(0), anon_5(0), anon_6(0), anon_7(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_game_cleanerst::viewscreen_game_cleanerst(virtual_identity *_id)
    :  viewscreen(_id), state(CleaningGameObjects), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_itemst::viewscreen_itemst(virtual_identity *_id)
    :  viewscreen(_id), item(0), cursor_pos(0), caption_uses(0), caption_contents(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_joblistst::viewscreen_joblistst(virtual_identity *_id)
    :  viewscreen(_id), allow_zoom(0), cursor_pos(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_jobmanagementst::viewscreen_jobmanagementst(virtual_identity *_id)
    :  viewscreen(_id), sel_idx(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_jobst::viewscreen_jobst(virtual_identity *_id)
    :  viewscreen(_id), job(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_justicest::viewscreen_justicest(virtual_identity *_id)
    :  viewscreen(_id), jails_needed(0), jails_present(0), cur_column(0), anon_1(0), anon_2(0), anon_3(0), cold_cases(0), anon_4(0), anon_5(0), cursor_right(0), punishment(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_kitchenprefst::viewscreen_kitchenprefst(virtual_identity *_id)
    :  viewscreen(_id), cursor(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer::viewscreen_layer(virtual_identity *_id)
    :  viewscreen(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_arena_creaturest::viewscreen_layer_arena_creaturest(virtual_identity *_id)
    :  viewscreen_layer(_id), unk_1c(0), unk_1e(0), cur_side(0), cur_interaction(-1)
  {
    _identity.adjust_vtable(this, _id);
    memset(unk_20, 0, sizeof(unk_20));
  }
  df::viewscreen_layer_assigntradest::viewscreen_layer_assigntradest(virtual_identity *_id)
    :  viewscreen_layer(_id), depot(0), sort_distance(0), pending_on_top(0), filter_mandates(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_choose_language_namest::viewscreen_layer_choose_language_namest(virtual_identity *_id)
    :  viewscreen_layer(_id), entity(0), name(0), unk1a(0), unk1b(0), unk1c(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_currencyst::viewscreen_layer_currencyst(virtual_identity *_id)
    :  viewscreen_layer(_id), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_export_play_mapst::viewscreen_layer_export_play_mapst(virtual_identity *_id)
    :  viewscreen_layer(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_militaryst::T_squads::T_squads()
  {
  }
  df::viewscreen_layer_militaryst::T_positions::T_positions()
  {
  }
  df::viewscreen_layer_militaryst::T_squad_members::T_squad_members()
  {
  }
  df::viewscreen_layer_militaryst::T_equip::T_assigned::T_assigned()
  {
  }
  df::viewscreen_layer_militaryst::T_equip::T_uniform::T_uniform()
  {
  }
  df::viewscreen_layer_militaryst::T_equip::T_add_item::T_add_item()
  {
  }
  df::viewscreen_layer_militaryst::T_equip::T_material::T_material()
  {
  }
  df::viewscreen_layer_militaryst::T_equip::T_color::T_color()
  {
  }
  df::viewscreen_layer_militaryst::T_equip::T_equip()
    :  mode(Customize), prio_in_move(-1), edit_spec(0), edit_mode(Armor), in_name_uniform(0)
  {
    memset(unk_1ec, 0, sizeof(unk_1ec));
  }
  df::viewscreen_layer_militaryst::T_ammo::T_add_item::T_add_item()
  {
  }
  df::viewscreen_layer_militaryst::T_ammo::T_material::T_material()
  {
  }
  df::viewscreen_layer_militaryst::T_ammo::T_ammo()
    :  in_add_item(0), in_set_material(0)
  {
  }
  df::viewscreen_layer_militaryst::viewscreen_layer_militaryst(virtual_identity *_id)
    :  viewscreen_layer(_id), page(Positions), num_squads(0), num_soldiers(0), num_active(0), in_create_squad(0), in_new_squad(0), unk_e6(0), new_position(0), unk_fc(0), in_rename_alert(0), in_delete_alert(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_musicsoundst::viewscreen_layer_musicsoundst(virtual_identity *_id)
    :  viewscreen_layer(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_noblelistst::T_info::T_info()
    :  unit(0), nemesis(0), unk_8(0), position(0), assignment(0), group(-1), precedence(0)
  {
  }
  df::viewscreen_layer_noblelistst::T_candidates::T_candidates()
    :  unit(0), weight(0)
  {
  }
  df::viewscreen_layer_noblelistst::viewscreen_layer_noblelistst(virtual_identity *_id)
    :  viewscreen_layer(_id), mode(List)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_overall_healthst::viewscreen_layer_overall_healthst(virtual_identity *_id)
    :  viewscreen_layer(_id), anon_1(0), x_cursor_pos(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_reactionst::viewscreen_layer_reactionst(virtual_identity *_id)
    :  viewscreen_layer(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_squad_schedulest::viewscreen_layer_squad_schedulest(virtual_identity *_id)
    :  viewscreen_layer(_id), swapped(0), page_month(0), cur_alert(0), in_name_cell(0), in_give_order(0), in_edit_order(0), order_list(0), anon_1(0), order_month(0), order_type(0), patrol_route(0), min_soldiers(0), station_point(0), copy_item(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_stockpilest::viewscreen_layer_stockpilest(virtual_identity *_id)
    :  viewscreen_layer(_id), settings(0), cur_group(ENUM_FIRST_ITEM(stockpile_list)), cur_list(ENUM_FIRST_ITEM(stockpile_list))
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_stone_restrictionst::viewscreen_layer_stone_restrictionst(virtual_identity *_id)
    :  viewscreen_layer(_id), type_tab(0), anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_unit_actionst::viewscreen_layer_unit_actionst(virtual_identity *_id)
    :  viewscreen_layer(_id), unit(0), cur_reaction(0), reagent(-1), reagent_amnt_left(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_unit_healthst::viewscreen_layer_unit_healthst(virtual_identity *_id)
    :  viewscreen_layer(_id), anon_1(0), unit(0), page(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_unit_relationshipst::viewscreen_layer_unit_relationshipst(virtual_identity *_id)
    :  viewscreen_layer(_id), unit(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_workshop_profilest::viewscreen_layer_workshop_profilest(virtual_identity *_id)
    :  viewscreen_layer(_id), profile(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_layer_world_gen_param_presetst::viewscreen_layer_world_gen_param_presetst(virtual_identity *_id)
    :  viewscreen_layer(_id), anon_1(0), anon_2(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0)
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_11 = 0; anon_11 < 24; anon_11++) {
      anon_4[anon_11] = 0;
    }
    for (int anon_12 = 0; anon_12 < 24; anon_12++) {
      anon_5[anon_12] = 0;
    }
  }
  df::viewscreen_layer_world_gen_paramst::T_unk1::T_unk1()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0), anon_11(0), anon_12(0), anon_13(0), anon_14(0), anon_15(0), anon_16(0), anon_17(0), anon_18(0), anon_19(0), anon_20(0), anon_21(0), anon_22(0), anon_23(0), anon_24(0), anon_25(0), anon_26(0)
  {
  }
  df::viewscreen_layer_world_gen_paramst::viewscreen_layer_world_gen_paramst(virtual_identity *_id)
    :  viewscreen_layer(_id), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_legendsst::viewscreen_legendsst(virtual_identity *_id)
    :  viewscreen(_id), anon_1(0), init_step(0), init_era(0), anon_2(0), anon_3(0), init_progress(0), cur_page(0), anon_11(0), main_cursor(0), sub_cursor(0), anon_12(0), map_x(0), map_y(0), hide_territories(0), civ_site_mode(0), anon_14(0), filter_editing(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_loadgamest::viewscreen_loadgamest(virtual_identity *_id)
    :  viewscreen(_id), cur_step(0), unk_v40_1b(0), loading(0), sel_idx(0), unk_v40_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_meetingst::viewscreen_meetingst(virtual_identity *_id)
    :  viewscreen(_id), dipscript_popup(0), activity(0), holder(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_movieplayerst::viewscreen_movieplayerst(virtual_identity *_id)
    :  viewscreen(_id), saving(0), loading(0), editing(0), text_mode(0), editing_char(0), editing_copy_from(0), editing_screenf(0), editing_screenb(0), editing_screenbright(0), editing_selected_sound(0), editing_menu(0), is_playing(0), is_forced_play(0), quit_if_no_play(0), maxmoviepos(0), end_frame_pos(0), selfile(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_new_regionst::viewscreen_new_regionst(virtual_identity *_id)
    :  viewscreen(_id), unk_2(0), in_worldgen(0), cursor_paramset(0), editing_randseed(0), editing_customname(0), editing_title(0), popup_deleteset(0), popup_changedimensions(0), unk_11(0), custom_size_x(0), custom_size_y(0), popup_abort(0), popup_goon(0), unsaved_changes(0), simple_mode(0), unk_20(0), unk_21(0), cursor_line(0), world_size(0), history(0), number_civs(0), number_sites(0), number_beasts(0), savagery(0), mineral_occurence(0), worldgen_paused(0), worldgen_rejected(0), unk_b4(0), unk_b8(0), unk_bc(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_noblest::viewscreen_noblest(virtual_identity *_id)
    :  viewscreen(_id), become_capital_offerings(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_optionst::viewscreen_optionst(virtual_identity *_id)
    :  viewscreen(_id), msg_quit(0), in_retire_adv(0), msg_peasant(0), in_retire_dwf_abandon_adv(0), in_abandon_dwf(0), sel_idx(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_overallstatusst::viewscreen_overallstatusst(virtual_identity *_id)
    :  viewscreen(_id), page_cursor(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_petst::viewscreen_petst(virtual_identity *_id)
    :  viewscreen(_id), cursor(0), mode(List), knowledge_page(0), trainer_cursor(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_pricest::viewscreen_pricest(virtual_identity *_id)
    :  viewscreen(_id), anon_1(0), anon_2(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_reportlistst::viewscreen_reportlistst(virtual_identity *_id)
    :  viewscreen(_id), cursor(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_requestagreementst::viewscreen_requestagreementst(virtual_identity *_id)
    :  viewscreen(_id), requests(0), civ_id(-1), cursor(0), anon_1(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(title, 0, sizeof(title));
  }
  df::viewscreen_savegamest::viewscreen_savegamest(virtual_identity *_id)
    :  viewscreen(_id), cur_step(0), unk_v40_1b(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_selectitemst::viewscreen_selectitemst(virtual_identity *_id)
    :  viewscreen(_id), p_item_type(0), p_item_subtype(0), p_mattype(0), p_matindex(0), choice(0), screen(0), right_pos(0), right_page_base(0), right_list(0), sel_category(-1)
  {
    _identity.adjust_vtable(this, _id);
    memset(title, 0, sizeof(title));
    memset(anon_1, 0, sizeof(anon_1));
    memset(filter, 0, sizeof(filter));
  }
  df::viewscreen_setupadventurest::T_adventurer::T_adventurer()
    :  race(-1), caste(-1), entity(-1), histfig(-1), unk_7(0), unk_8(0), unk_9(0), status(Peasant)
  {
    for (int anon_1 = 0; anon_1 < 118; anon_1++) {
      skills[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 19; anon_2++) {
      attributes[anon_2] = 0;
    }
  }
  df::viewscreen_setupadventurest::viewscreen_setupadventurest(virtual_identity *_id)
    :  viewscreen(_id), editing_name(0), index_col1(0), index_skills(-1), skill_points_remaining(0), subscreen(Nemesis), unk_v40_1a(-1), site_id(-1), deity_id(-1), belief_strength(0), sel_background(-1), focus_column(0), attribute_points_remaining(0), index_attributes(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_setupdwarfgamest::T_dwarf_info::T_dwarf_info()
    :  unk_244(0), unk_248(0), levels_remaining(0), unk_2a4(0), unk_2a8(0), unk_2ac(0), unk_2b0(0)
  {
    memset(unk_6c, 0, sizeof(unk_6c));
    for (int anon_1 = 0; anon_1 < 118; anon_1++) {
      skills[anon_1] = 0;
    }
    memset(unk_24a, 0, sizeof(unk_24a));
    memset(unk_24c, 0, sizeof(unk_24c));
    memset(unk_256, 0, sizeof(unk_256));
    for (int anon_2 = 0; anon_2 < 19; anon_2++) {
      unk_258[anon_2] = 0;
    }
    memset(unk_2a6, 0, sizeof(unk_2a6));
    memset(unk_2b4, 0, sizeof(unk_2b4));
  }
  df::viewscreen_setupdwarfgamest::T_animals::T_animals()
  {
  }
  df::viewscreen_setupdwarfgamest::viewscreen_setupdwarfgamest(virtual_identity *_id)
    :  viewscreen(_id), mode(0), dwarf_cursor(0), dwarf_page_idx(0), item_cursor(0), skill_cursor(-1), animal_cursor(0), dwarf_column(0), supply_column(0), display_row(0), show_play_now(0), choice(0), anon_4(0), anon_5(0), in_save_profile(0), anon_6(0), anon_7(0), anon_8(0), points_remaining(0), add_item_type(ENUM_FIRST_ITEM(item_type)), add_item_subtype(-1), add_mattype(-1), add_matindex(0), adding_item(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(title, 0, sizeof(title));
  }
  df::viewscreen_storesst::viewscreen_storesst(virtual_identity *_id)
    :  viewscreen(_id), category_cursor(0), item_cursor(0), in_right_list(0), in_group_mode(0), can_zoom(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(title, 0, sizeof(title));
  }
  df::viewscreen_textviewerst::T_formatted_text::T_formatted_text()
    :  text(0), format(0), pause_depth(0), return_val(0), indent(0)
  {
  }
  df::viewscreen_textviewerst::viewscreen_textviewerst(virtual_identity *_id)
    :  viewscreen(_id), logged_error(0), scroll_pos(0), cursor_line(0), pause_depth(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_titlest::viewscreen_titlest(virtual_identity *_id)
    :  viewscreen(_id), sel_subpage(None), sel_menu_line(0), sel_submenu_line(0), loading(0), unk_388(0), unk_38c(0), unk_390(0), unk_394(0), unk_398(0), unk_39c(0), unk_3a0(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(str_histories, 0, sizeof(str_histories));
    memset(menu_items, 0, sizeof(menu_items));
  }
  df::viewscreen_topicmeeting_fill_land_holder_positionst::viewscreen_topicmeeting_fill_land_holder_positionst(virtual_identity *_id)
    :  viewscreen(_id), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_10(0), anon_11(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::viewscreen_topicmeeting_takerequestsst::viewscreen_topicmeeting_takerequestsst(virtual_identity *_id)
    :  viewscreen(_id), popup(0), meeting(0), type_idx(0), good_idx(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(title, 0, sizeof(title));
  }
  df::viewscreen_topicmeetingst::viewscreen_topicmeetingst(virtual_identity *_id)
    :  viewscreen(_id), popup(0), meeting(0), unk_28(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_tradeagreementst::viewscreen_tradeagreementst(virtual_identity *_id)
    :  viewscreen(_id), requests(0), civ_id(-1), type_idx(0), good_idx(0), civ(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(title, 0, sizeof(title));
  }
  df::viewscreen_tradegoodsst::viewscreen_tradegoodsst(virtual_identity *_id)
    :  viewscreen(_id), depot(0), caravan(0), entity(0), is_unloading(0), has_traders(0), trader(0), broker(0), trader_cursor(0), broker_cursor(0), in_right_pane(0), trade_reply(0), anon_1(0), anon_2(0), has_offer(0), in_edit_count(0)
  {
    _identity.adjust_vtable(this, _id);
    memset(title, 0, sizeof(title));
  }
  df::viewscreen_tradelistst::viewscreen_tradelistst(virtual_identity *_id)
    :  viewscreen(_id), unk_10(0), depot(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_treasurelistst::viewscreen_treasurelistst(virtual_identity *_id)
    :  viewscreen(_id), sel_idx(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_unitlistst::viewscreen_unitlistst(virtual_identity *_id)
    :  viewscreen(_id), allow_zoom(0), page(ENUM_FIRST_ITEM(viewscreen_unitlist_page))
  {
    _identity.adjust_vtable(this, _id);
    for (int anon_1 = 0; anon_1 < 4; anon_1++) {
      cursor_pos[anon_1] = -1;
    }
  }
  df::viewscreen_unitst::viewscreen_unitst(virtual_identity *_id)
    :  viewscreen(_id), unit(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_update_regionst::viewscreen_update_regionst(virtual_identity *_id)
    :  viewscreen(_id), year(0), year_tick(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::viewscreen_wagesst::viewscreen_wagesst(virtual_identity *_id)
    :  viewscreen(_id), profession_category(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::weapon_attack::weapon_attack()
    :  edged(0), contact(0), penetration(0), velocity_mult(0), prepare(0), recover(0)
  {
  }
  df::web_cluster::web_cluster()
    :  z(0), race(-1), caste(-1)
  {
  }
  df::workshop_profile::workshop_profile()
    :  min_level(0), max_level(3000)
  {
  }
  df::world::T_vermin::T_vermin()
  {
  }
  df::world::T_entities::T_entities()
  {
  }
  df::world::T_worldgen_coord_buf::T_worldgen_coord_buf()
    :  next_slot(0)
  {
  }
  df::world::T_units::T_units()
  {
  }
  df::world::T_nemesis::T_nemesis()
  {
  }
  df::world::T_items::T_items()
  {
  }
  df::world::T_artifacts::T_artifacts()
  {
  }
  df::world::T_anon_1::T_anon_1()
    :  unk_0(0), job(0), flags(0), anon_1(0)
  {
  }
  df::world::T_anon_2::T_anon_2()
    :  unk_0(0), anon_1(0), anon_2(0)
  {
  }
  df::world::T_buildings::T_buildings()
  {
  }
  df::world::T_machines::T_machines()
  {
  }
  df::world::T_flow_guides::T_flow_guides()
  {
  }
  df::world::T_stockpile::T_simple1::T_simple1()
    :  anon_1(0), food(0), anon_2(0), anon_3(0)
  {
  }
  df::world::T_stockpile::T_simple2::T_simple2()
    :  seeds(0), plants(0), cheese(0), fish(0), meat(0), leaves(0), powder(0), eggs(0)
  {
  }
  df::world::T_stockpile::T_simple3::T_simple3()
    :  glob_fat(0), glob_tallow(0), glob_paste(0), glob_pressed(0), weapons(0), shields(0), ammo(0), coins(0), bar_blocks(0), gems(0), finished_goods(0), tanned_skins(0), thread_cloth(0), anon_1(0), anon_2(0), anon_3(0)
  {
  }
  df::world::T_stockpile::T_stockpile()
  {
    for (int anon_1 = 0; anon_1 < 10; anon_1++) {
      num_jobs[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 10; anon_2++) {
      num_haulers[anon_2] = 0;
    }
  }
  df::world::T_plants::T_plants()
  {
  }
  df::world::T_enemy_status_cache::T_enemy_status_cache()
    :  next_slot(0)
  {
    for (int anon_1 = 0; anon_1 < 500; anon_1++) {
      slot_used[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 500; anon_2++) {
      for (int anon_3 = 0; anon_3 < 500; anon_3++) {
        rel_map[anon_2][anon_3] = 0;
      }
    }
  }
  df::world::T_schedules::T_schedules()
  {
  }
  df::world::T_squads::T_squads()
  {
  }
  df::world::T_formations::T_formations()
  {
  }
  df::world::T_activities::T_activities()
  {
  }
  df::world::T_status::T_slots::T_slots()
    :  type(ENUM_FIRST_ITEM(combat_report_event_type)), item(0), unk1b(0), unk1c(0), unk1d(0), body_part(0), unk2b(0), unk2c(0), unk2d(0)
  {
  }
  df::world::T_status::T_status()
    :  next_report_id(0), display_timer(0), slots_used(0)
  {
    memset(anon_1, 0, sizeof(anon_1));
    for (int anon_3 = 0; anon_3 < 37; anon_3++) {
      slot_id_used[anon_3] = 0;
    }
    for (int anon_4 = 0; anon_4 < 37; anon_4++) {
      slot_id_idx1[anon_4] = 0;
    }
    for (int anon_5 = 0; anon_5 < 37; anon_5++) {
      slot_id_idx2[anon_5] = 0;
    }
  }
  df::world::T_interaction_instances::T_interaction_instances()
  {
  }
  df::world::T_written_contents::T_written_contents()
  {
  }
  df::world::T_identities::T_identities()
  {
  }
  df::world::T_incidents::T_incidents()
  {
  }
  df::world::T_crimes::T_crimes()
  {
  }
  df::world::T_vehicles::T_vehicles()
  {
  }
  df::world::T_armies::T_armies()
  {
  }
  df::world::T_army_controllers::T_army_controllers()
  {
  }
  df::world::T_army_tracking_info::T_army_tracking_info()
  {
  }
  df::world::T_cultural_identities::T_cultural_identities()
  {
  }
  df::world::T_agreements::T_agreements()
  {
  }
  df::world::T_map::T_map()
    :  block_index(0), column_index(0), x_count_block(0), y_count_block(0), z_count_block(0), x_count(0), y_count(0), z_count(0), region_x(0), region_y(0), region_z(0)
  {
  }
  df::world::T_map_extras::T_map_extras()
    :  rotation(0), z_level_flags(0)
  {
  }
  df::world::T_worldgen_status::T_worldgen_status()
    :  state(0), num_rejects(0), rejection_reason(0), lakes_total(0), anon_3(0), anon_4(0), lakes_cur(0), anon_5(0), anon_6(0), anon_10(0), finalized_civ_mats(0), finalized_art(0), finalized_uniforms(0), finalized_sites(0), anon_11(0), anon_12(0), anon_13(0), width(0), height(0), rivers_total(0), rivers_cur(0), anon_18(0), placed_caves(0), placed_good_evil(0), placed_megabeasts(0), placed_other_beasts(0), made_cave_pops(0), made_cave_civs(0), placed_civs(0), finished_prehistory(0), anon_21(0), anon_22(0), anon_23(0), anon_24(0), anon_25(0), anon_28(0), anon_29(0), anon_39(0), anon_40(0)
  {
    for (int anon_41 = 0; anon_41 < 53; anon_41++) {
      anon_1[anon_41] = 0;
    }
    for (int anon_42 = 0; anon_42 < 53; anon_42++) {
      anon_2[anon_42] = 0;
    }
    for (int anon_43 = 0; anon_43 < 100; anon_43++) {
      anon_7[anon_43] = 0;
    }
    for (int anon_44 = 0; anon_44 < 100; anon_44++) {
      anon_8[anon_44] = 0;
    }
    for (int anon_45 = 0; anon_45 < 100; anon_45++) {
      anon_9[anon_45] = 0;
    }
  }
  df::world::T_unk_59dc4::T_unk1::T_unk1()
  {
  }
  df::world::T_unk_59dc4::T_unk_59dc4()
  {
  }
  df::world::T_flow_engine::T_flow_engine()
    :  rnd_16(0), rnd_256(0), rnd_pos(0), block_idx(-1)
  {
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      rnd_x[anon_1] = 0;
    }
    for (int anon_2 = 0; anon_2 < 16; anon_2++) {
      rnd_y[anon_2] = 0;
    }
  }
  df::world::T_worldgen::T_worldgen_parms::T_worldgen_parms()
    :  dim_x(0), dim_y(0), has_seed(0), has_history_seed(0), has_name_seed(0), has_creature_seed(0), embark_points(0), peak_number_min(0), partial_ocean_edge_min(0), complete_ocean_edge_min(0), volcano_min(0), subregion_max(0), cavern_layer_count(0), cavern_layer_openness_min(0), cavern_layer_openness_max(0), cavern_layer_passage_density_min(0), cavern_layer_passage_density_max(0), cavern_layer_water_min(0), cavern_layer_water_max(0), have_bottom_layer_1(0), have_bottom_layer_2(0), levels_above_ground(0), levels_above_layer_1(0), levels_above_layer_2(0), levels_above_layer_3(0), levels_above_layer_4(0), levels_above_layer_5(0), levels_at_bottom(0), cave_min_size(0), cave_max_size(0), mountain_cave_min(0), non_mountain_cave_min(0), total_civ_number(0), rain_ranges_1(0), rain_ranges_0(0), rain_ranges_2(0), drainage_ranges_1(0), drainage_ranges_0(0), drainage_ranges_2(0), savagery_ranges_1(0), savagery_ranges_0(0), savagery_ranges_2(0), volcanism_ranges_1(0), volcanism_ranges_0(0), volcanism_ranges_2(0), beast_end_year(0), end_year(0), beast_end_year_percent(0), total_civ_population(0), site_cap(0), elevation_ranges_1(0), elevation_ranges_0(0), elevation_ranges_2(0), mineral_scarcity(0), megabeast_cap(0), semimegabeast_cap(0), titan_number(0), demon_number(0), night_troll_number(0), bogeyman_number(0), vampire_number(0), werebeast_number(0), secret_number(0), regional_interaction_number(0), disturbance_interaction_number(0), evil_cloud_number(0), evil_rain_number(0), anon_1(0), good_sq_counts_0(0), evil_sq_counts_0(0), good_sq_counts_1(0), evil_sq_counts_1(0), good_sq_counts_2(0), evil_sq_counts_2(0), ps(0), reveal_all_history(0), cull_historical_figures(0), erosion_cycle_count(0), periodically_erode_extremes(0), orographic_precipitation(0), playable_civilization_required(0), all_caves_visible(0), show_embark_tunnel(0), pole(0), anon_2(0)
  {
    for (int anon_3 = 0; anon_3 < 3; anon_3++) {
      for (int anon_4 = 0; anon_4 < 10; anon_4++) {
        region_counts[anon_3][anon_4] = 0;
      }
    }
    for (int anon_5 = 0; anon_5 < 2; anon_5++) {
      river_mins[anon_5] = 0;
    }
    for (int anon_6 = 0; anon_6 < 4; anon_6++) {
      for (int anon_7 = 0; anon_7 < 24; anon_7++) {
        ranges[anon_6][anon_7] = 0;
      }
    }
    for (int anon_8 = 0; anon_8 < 3; anon_8++) {
      titan_attack_trigger[anon_8] = 0;
    }
    for (int anon_9 = 0; anon_9 < 6; anon_9++) {
      elevation_frequency[anon_9] = 0;
    }
    for (int anon_10 = 0; anon_10 < 6; anon_10++) {
      rain_frequency[anon_10] = 0;
    }
    for (int anon_11 = 0; anon_11 < 6; anon_11++) {
      drainage_frequency[anon_11] = 0;
    }
    for (int anon_12 = 0; anon_12 < 6; anon_12++) {
      savagery_frequency[anon_12] = 0;
    }
    for (int anon_13 = 0; anon_13 < 6; anon_13++) {
      temperature_frequency[anon_13] = 0;
    }
    for (int anon_14 = 0; anon_14 < 6; anon_14++) {
      volcanism_frequency[anon_14] = 0;
    }
  }
  df::world::T_worldgen::T_worldgen()
    :  next_unit_chunk_id(0), next_unit_chunk_offset(0), next_art_image_chunk_id(0), next_art_image_chunk_offset(0)
  {
  }
  df::world::T_pathfinder::T_boundary_heap::T_boundary_heap()
    :  total_cost(0), local_cost(0), x(0), y(0), z(0)
  {
  }
  df::world::T_pathfinder::T_pathfinder()
    :  heap_count(0), dist_x(0), dist_y(0), dist_z(0), next_path_cost(0), wipe_path_cost(0), next_path_tag(0), wipe_path_tag(0), next_walkable_id(0), plant_update_step(0), anon_1(0), anon_2(0)
  {
  }
  df::world::T_cur_savegame::T_cur_savegame()
    :  unk_v40_1(0), unk_v40_2(0), unk_v40_3(0), unk_v40_4(0), unk_v40_6(0), unk_v40_7(0)
  {
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::world::T_features::T_features()
  {
  }
  df::world::T_arena_spawn::T_item_types::T_item_types()
    :  item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mattype(-1), matindex(0), anon_1(0)
  {
  }
  df::world::T_arena_spawn::T_equipment::T_equipment()
  {
  }
  df::world::T_arena_spawn::T_arena_spawn()
    :  type(-1), side(0), interaction(-1), anon_5(0), conflict_level(0), morale_enable(0), anon_6(0), temperature(0), time(0), weather_column(0), weather_row(0), tree_cursor(0), tree_age(0)
  {
  }
  df::world::T_unk_19325c::T_anon_1::T_anon_1()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0)
  {
  }
  df::world::T_unk_19325c::T_anon_2::T_anon_2()
    :  anon_1(0), anon_2(0)
  {
  }
  df::world::T_unk_19325c::T_anon_3::T_anon_3()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0)
  {
  }
  df::world::T_unk_19325c::T_unk_19325c()
    :  anon_4(0), anon_5(0), anon_6(0)
  {
  }
  df::world::world()
    :  unk4(0), anon_3(0), check_bridge_collapse(0), check_machine_collapse(0), selected_building(0), selected_stockpile_type(ENUM_FIRST_ITEM(stockpile_category)), update_selected_building(0), building_width(0), building_height(0), selected_direction(ENUM_FIRST_ITEM(screw_pump_direction)), world_data(0), original_save_version(0), reindex_pathfinding(0), frame_counter(0), anon_4(0), anon_5(0), anon_7(0)
  {
    for (int anon_9 = 0; anon_9 < 53; anon_9++) {
      for (int anon_10 = 0; anon_10 < 53; anon_10++) {
        distance_lookup[anon_9][anon_10] = 0;
      }
    }
    for (int anon_13 = 0; anon_13 < 80; anon_13++) {
      unk_v40_2a[anon_13] = 0;
    }
    for (int anon_14 = 0; anon_14 < 181; anon_14++) {
      unk_v40_2b[anon_14] = 0;
    }
    for (int anon_15 = 0; anon_15 < 121; anon_15++) {
      unk_v40_2c[anon_15] = 0;
    }
    memset(anon_6, 0, sizeof(anon_6));
  }
  df::world_construction::world_construction(virtual_identity *_id)
    :  id(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_construction_bridgest::world_construction_bridgest(virtual_identity *_id)
    :  world_construction(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_construction_roadst::world_construction_roadst(virtual_identity *_id)
    :  world_construction(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_construction_square::world_construction_square(virtual_identity *_id)
    :  construction_id(-1)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_construction_square_bridgest::world_construction_square_bridgest(virtual_identity *_id)
    :  world_construction_square(_id), road_id(-1), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_construction_square_roadst::world_construction_square_roadst(virtual_identity *_id)
    :  world_construction_square(_id), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_construction_square_tunnelst::world_construction_square_tunnelst(virtual_identity *_id)
    :  world_construction_square(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_construction_square_wallst::world_construction_square_wallst(virtual_identity *_id)
    :  world_construction_square(_id), item_type(ENUM_FIRST_ITEM(item_type)), item_subtype(-1), mat_type(-1), mat_index(0)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_construction_tunnelst::world_construction_tunnelst(virtual_identity *_id)
    :  world_construction(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_construction_wallst::world_construction_wallst(virtual_identity *_id)
    :  world_construction(_id)
  {
    _identity.adjust_vtable(this, _id);
  }
  df::world_data::T_unk_b4::T_unk_b4()
    :  world_width2(0), world_height2(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0)
  {
  }
  df::world_data::T_constructions::T_constructions()
    :  width(0), height(0), map(0), next_id(0)
  {
  }
  df::world_data::T_unk_150::T_unk_8::T_unk_8()
    :  index(0), unk_4(0), unk_8(0)
  {
  }
  df::world_data::T_unk_150::T_unk_18::T_unk_18()
    :  index(0), unk_4(0), unk_8(0)
  {
  }
  df::world_data::T_unk_150::T_unk_28::T_unk_28()
    :  unk_0(0), unk_4(0)
  {
  }
  df::world_data::T_unk_150::T_unk_150()
    :  index(0), unk_4(0)
  {
  }
  df::world_data::T_unk_170::T_unk_4::T_unk_4()
    :  unk_0(0), unk_4(0), unk_8(0), unk_c(0), unk_10(0), unk_14(0), unk_18(0), unk_1c(0)
  {
  }
  df::world_data::T_unk_170::T_unk_170()
    :  index(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0), unk_34(0)
  {
  }
  df::world_data::T_freakish_weather::T_freakish_weather()
    :  unk_0(0), unk_4(0), mat_type(-1), mat_index(0), unk_10(0), region_x(0), region_y(0), unk_1c(-30000), unk_20(-30000), unk_24(-30000), unk_28(0), unk_2c(0), unk_30(0), unk_34(-1)
  {
  }
  df::world_data::T_mountain_peaks::T_mountain_peaks()
    :  height(0)
  {
  }
  df::world_data::T_feature_map::T_features::T_features()
  {
    for (int anon_3 = 0; anon_3 < 16; anon_3++) {
      for (int anon_4 = 0; anon_4 < 16; anon_4++) {
        for (int anon_5 = 0; anon_5 < 30; anon_5++) {
          unk[anon_3][anon_4][anon_5] = 0;
        }
      }
    }
  }
  df::world_data::T_feature_map::T_feature_map()
    :  x(0), y(0), features(0), unk_8(0), unk_c(0)
  {
  }
  df::world_data::T_unk_274::T_unk_10::T_unk_10()
    :  unk_0(0), unk_4(0), unk_8(0)
  {
  }
  df::world_data::T_unk_274::T_unk_274()
    :  unk_20(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0)
  {
  }
  df::world_data::T_unk_482f8::T_unk_482f8()
    :  anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0)
  {
    for (int anon_9 = 0; anon_9 < 320000; anon_9++) {
      anon_1[anon_9] = 0;
    }
  }
  df::world_data::world_data()
    :  next_site_id(0), next_site_unk136_id(0), next_unk_140_id(0), next_unk_150_id(0), anon_1(0), anon_2(0), world_width(0), world_height(0), unk_78(0), moon_phase(0), flip_latitude(0), flip_longitude(0), unk_84(0), unk_86(0), unk_88(0), unk_8a(0), anon_3(0), anon_4(0), adv_region_x(0), adv_region_y(0), adv_emb_x(0), adv_emb_y(0), unk_x1(0), unk_y1(0), unk_x2(0), unk_y2(0), region_map(0), unk_1c4(0), unk_1dc(0), unk_1e0(0), unk_1e4(0), unk_1e8(0), unk_1ec(0), unk_1f0(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0), anon_11(0), anon_12(0), anon_13(0), anon_14(0), anon_15(0), anon_16(0), anon_17(0), anon_18(0), anon_19(0), anon_20(0), anon_22(0), anon_23(0), feature_map(0), unk_260(0), unk_264(0), unk_268(0), unk_26c(0), unk_270(0)
  {
    for (int anon_24 = 0; anon_24 < 15; anon_24++) {
      unk1[anon_24] = 0;
    }
    memset(unk_1c8, 0, sizeof(unk_1c8));
    memset(anon_21, 0, sizeof(anon_21));
  }
  df::world_geo_biome::world_geo_biome()
    :  unk1(0), index(0)
  {
  }
  df::world_geo_layer::world_geo_layer()
    :  type(ENUM_FIRST_ITEM(geo_layer_type)), mat_index(-1), top_height(0), bottom_height(0)
  {
  }
  df::world_history::T_event_collections::T_event_collections()
  {
  }
  df::world_history::world_history()
    :  anon_1(0), total_powers(0), total_megabeasts(0), total_semimegabeasts(0), anon_9(0), anon_11(0), anon_12(0), anon_13(0)
  {
  }
  df::world_landmass::world_landmass()
    :  index(0), area(0), min_x(0), max_x(0), min_y(0), max_y(0)
  {
  }
  df::world_object_data::T_offloaded_items::T_offloaded_items()
    :  item(0), global_x(0), global_y(0), global_z(0), container(-1), building(-1), unk_18(0)
  {
  }
  df::world_object_data::T_offloaded_buildings::T_offloaded_buildings()
    :  building(0), global_x(0), global_y(0), global_z(0), unk_10(0)
  {
  }
  df::world_object_data::T_unk_94::T_unk_94()
    :  global_x(0), global_y(0), global_z(0), unk_c(0)
  {
  }
  df::world_object_data::world_object_data()
    :  id(0), unk_v40_1(0), year(0), year_tick(0)
  {
  }
  df::world_population::world_population()
    :  type(ENUM_FIRST_ITEM(world_population_type)), count_min(10000001), count_max(10000001), unk_c(0), owner(-1), unk_10(-1), unk_14(-1), unk_18(-1), unk_1c(-1)
  {
    race = -1;
  }
  df::world_population_ref::world_population_ref()
    :  region_x(0), region_y(0), feature_idx(-1), cave_id(-1), unk_28(0), population_idx(0), depth(0)
  {
  }
  df::world_raws::T_plants::T_plants()
  {
  }
  df::world_raws::T_bodyglosses::T_bodyglosses()
  {
  }
  df::world_raws::T_creatures::T_creatures()
    :  num_caste(0)
  {
  }
  df::world_raws::T_itemdefs::T_itemdefs()
  {
  }
  df::world_raws::T_language::T_language()
  {
  }
  df::world_raws::T_buildings::T_buildings()
    :  next_id(0)
  {
  }
  df::world_raws::T_syndromes::T_syndromes()
  {
  }
  df::world_raws::T_effects::T_effects()
  {
  }
  df::world_raws::world_raws()
    :  anon_1(0), anon_2(0), anon_3(0)
  {
  }
  df::world_region::world_region()
    :  index(0), type(ENUM_FIRST_ITEM(world_region_type)), unk_94(0), unk_98(0), unk_9c(0), unk_a0(0), unk_a4(0), unk_1e4(0), unk_1e6(0), unk_1e8(0), lake_surface(0), mid_x(0), mid_y(0), min_x(0), max_x(0), min_y(0), max_y(0)
  {
    for (int anon_1 = 0; anon_1 < 51; anon_1++) {
      unk_118[anon_1] = 0;
    }
    memset(unk_200, 0, sizeof(unk_200));
  }
  df::world_region_details::T_edges::T_edges()
  {
    for (int anon_5 = 0; anon_5 < 16; anon_5++) {
      for (int anon_6 = 0; anon_6 < 16; anon_6++) {
        biome_corner[anon_5][anon_6] = 0;
      }
    }
    for (int anon_7 = 0; anon_7 < 16; anon_7++) {
      for (int anon_8 = 0; anon_8 < 16; anon_8++) {
        biome_x[anon_7][anon_8] = 0;
      }
    }
    for (int anon_9 = 0; anon_9 < 16; anon_9++) {
      for (int anon_10 = 0; anon_10 < 16; anon_10++) {
        biome_y[anon_9][anon_10] = 0;
      }
    }
  }
  df::world_region_details::T_rivers_vertical::T_rivers_vertical()
  {
    for (int anon_1 = 0; anon_1 < 16; anon_1++) {
      for (int anon_2 = 0; anon_2 < 17; anon_2++) {
        x_min[anon_1][anon_2] = 0;
      }
    }
    for (int anon_3 = 0; anon_3 < 16; anon_3++) {
      for (int anon_4 = 0; anon_4 < 17; anon_4++) {
        x_max[anon_3][anon_4] = 0;
      }
    }
    for (int anon_5 = 0; anon_5 < 16; anon_5++) {
      for (int anon_6 = 0; anon_6 < 17; anon_6++) {
        active[anon_5][anon_6] = 0;
      }
    }
    for (int anon_7 = 0; anon_7 < 16; anon_7++) {
      for (int anon_8 = 0; anon_8 < 17; anon_8++) {
        elevation[anon_7][anon_8] = 0;
      }
    }
  }
  df::world_region_details::T_rivers_horizontal::T_rivers_horizontal()
  {
    for (int anon_1 = 0; anon_1 < 17; anon_1++) {
      for (int anon_2 = 0; anon_2 < 16; anon_2++) {
        y_min[anon_1][anon_2] = 0;
      }
    }
    for (int anon_3 = 0; anon_3 < 17; anon_3++) {
      for (int anon_4 = 0; anon_4 < 16; anon_4++) {
        y_max[anon_3][anon_4] = 0;
      }
    }
    for (int anon_5 = 0; anon_5 < 17; anon_5++) {
      for (int anon_6 = 0; anon_6 < 16; anon_6++) {
        active[anon_5][anon_6] = 0;
      }
    }
    for (int anon_7 = 0; anon_7 < 17; anon_7++) {
      for (int anon_8 = 0; anon_8 < 16; anon_8++) {
        elevation[anon_7][anon_8] = 0;
      }
    }
  }
  df::world_region_details::world_region_details()
    :  unk12e8(0), anon_1(0), anon_2(0), anon_3(0), anon_4(0), lava_stone(-1)
  {
    for (int anon_5 = 0; anon_5 < 17; anon_5++) {
      for (int anon_6 = 0; anon_6 < 17; anon_6++) {
        biome[anon_5][anon_6] = 0;
      }
    }
    for (int anon_7 = 0; anon_7 < 17; anon_7++) {
      for (int anon_8 = 0; anon_8 < 17; anon_8++) {
        elevation[anon_7][anon_8] = 0;
      }
    }
    for (int anon_9 = 0; anon_9 < 16; anon_9++) {
      for (int anon_10 = 0; anon_10 < 16; anon_10++) {
        seed[anon_9][anon_10] = 0;
      }
    }
    for (int anon_11 = 0; anon_11 < 16; anon_11++) {
      for (int anon_12 = 0; anon_12 < 16; anon_12++) {
        unk11[anon_11][anon_12] = 0;
      }
    }
    for (int anon_15 = 0; anon_15 < 1152; anon_15++) {
      unk_12[anon_15] = 0;
    }
    for (int anon_16 = 0; anon_16 < 16; anon_16++) {
      for (int anon_17 = 0; anon_17 < 16; anon_17++) {
        elevation2[anon_16][anon_17] = 0;
      }
    }
    for (int anon_18 = 0; anon_18 < 256; anon_18++) {
      undef13[anon_18] = 0;
    }
  }
  df::world_region_feature::world_region_feature()
    :  feature_idx(0), layer(-1), region_tile_idx(0), min_z(0), max_z(0), unk_28(0), seed(0), top_layer_idx(0)
  {
    for (int anon_2 = 0; anon_2 < 15; anon_2++) {
      unk_38[anon_2] = 0;
    }
  }
  df::world_river::world_river()
  {
  }
  df::world_site::T_units::T_units()
    :  unit_id(-1), pos_x(0), pos_y(0), pos_z(0), unk_10(-1)
  {
  }
  df::world_site::T_unk_13c::T_unk_13c()
    :  unk_0(0), unk_4(0), unk_8(0), unk_c(0), unk_30(0)
  {
  }
  df::world_site::T_unk_v40_2::T_unk_v40_2()
    :  unk_0(0), unk_4(0), unk_8(0), unk_c(0), unk_30(0)
  {
  }
  df::world_site::T_subtype_info::T_subtype_info()
    :  is_tower(-1), is_monument(-1), lair_type(0), unk_14(-1000000), unk_18(-1000000), unk_1c(-1000000), creator(-1), unk_28(0)
  {
  }
  df::world_site::T_unk_21c::T_unk_21c()
    :  unk_0(0), unk_4(0), unk_8(0), unk_c(0), unk_10(0), unk_14(0), unk_18(0), unk_1c(0)
  {
  }
  df::world_site::T_unk_v40_4a::T_unk_v40_4a()
    :  unk_0(0), entity_id(-1), year(0), year_tick(0), unk_10(0)
  {
  }
  df::world_site::world_site()
    :  civ_id(-1), cur_owner_id(-1), type(ENUM_FIRST_ITEM(world_site_type)), id(0), index(0), rgn_min_x(0), rgn_max_x(0), rgn_min_y(0), rgn_max_y(0), rgn_min_z(0), rgn_max_z(0), global_min_x(0), global_min_y(0), global_max_x(0), global_max_y(0), seed1(0), seed2(0), resident_count(0), unk_110(0), unk_114(0), unk_118(0), unk_11c(0), unk_120(0), unk_124(0), unk_128(0), unk_12c(0), unk_130(0), unk_134(0), unk_138(0), site_level(0), flags(ENUM_LAST_ITEM(world_site_flags)), next_building_id(0), created_tick(0), created_year(0), unk_170(0), unk_174(0), realization(0), subtype_info(0), unk_v40_3a(0), unk_v40_3b(0), unk_v40_5(0), unk_188(0)
  {
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::world_site_inhabitant::world_site_inhabitant()
    :  count(0), race(-1), unk_8(0), outcast_id(-1), unk_10(-1), unk_14(-1), unk_18(-1), unk_1c(-1), unk_20(-1), unk_24(-1), unk_28(-1)
  {
  }
  df::world_site_realization::T_unk_55e8::T_unk_v40_2::T_unk_v40_2()
    :  unk_0(0), unk_4(0), unk_8(0), unk_a(0), unk_c(0), unk_10(0), unk_14(0), unk_16(0), unk_18(0), unk_1c(0)
  {
  }
  df::world_site_realization::T_unk_55e8::T_unk_55e8()
    :  unk_55e8(0), unk_55ec(0), unk_v40_1a(-30000), unk_v40_1b(-30000), unk_v40_1c(-30000), unk_v40_1d(-30000), unk_55f0(0), unk_55f4(0), unk_55f8(0), unk_55fa(0), unk_55fc(0), unk_5600(0), unk_5604(0), unk_5608(0), unk_560c(0), unk_5610(0), unk_5614(0), unk_5628(0), unk_562c(0), unk_5630(0), unk_5634(0), unk_v40_3a(-1), unk_v40_3b(-1), unk_v40_3c(-1), unk_v40_3d(-1)
  {
  }
  df::world_site_realization::T_building_map::T_building_map()
    :  unk4(0), unk5(0)
  {
    memset(anon_1, 0, sizeof(anon_1));
  }
  df::world_site_realization::T_areas::T_areas()
    :  unk_0(0), index(0), unk_8(0), min_x(0), max_x(0), min_y(0), max_y(0), unk_1c(-1), unk_20(0)
  {
  }
  df::world_site_realization::T_unk_193bc::T_unk_8::T_unk_8()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0)
  {
  }
  df::world_site_realization::T_unk_193bc::T_unk_193bc()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0), anon_10(0), anon_11(0), anon_12(0), anon_15(0), anon_16(0), anon_17(0), anon_18(0)
  {
    for (int anon_19 = 0; anon_19 < 20; anon_19++) {
      anon_13[anon_19] = 0;
    }
    for (int anon_20 = 0; anon_20 < 20; anon_20++) {
      anon_14[anon_20] = 0;
    }
  }
  df::world_site_realization::world_site_realization()
    :  num_buildings(0), unk_14(0), num_areas(0), anon_1(0), anon_2(0), anon_3(0), num_unk_193bc(0), anon_4(0), anon_5(0), num_building_type13(0), num_building_type5(0), num_building_shop_house(0), anon_6(0), anon_7(0), anon_8(0), anon_9(0)
  {
    for (int anon_10 = 0; anon_10 < 17; anon_10++) {
      for (int anon_11 = 0; anon_11 < 17; anon_11++) {
        mini_rivers[anon_10][anon_11] = 0;
      }
    }
    for (int anon_12 = 0; anon_12 < 17; anon_12++) {
      for (int anon_13 = 0; anon_13 < 17; anon_13++) {
        mini_tiles[anon_12][anon_13] = 0;
      }
    }
    for (int anon_14 = 0; anon_14 < 17; anon_14++) {
      for (int anon_15 = 0; anon_15 < 17; anon_15++) {
        mini_colors[anon_14][anon_15] = 0;
      }
    }
    for (int anon_16 = 0; anon_16 < 51; anon_16++) {
      for (int anon_17 = 0; anon_17 < 51; anon_17++) {
        road_map[anon_16][anon_17] = 0;
      }
    }
    for (int anon_18 = 0; anon_18 < 51; anon_18++) {
      for (int anon_19 = 0; anon_19 < 51; anon_19++) {
        unk_2d44[anon_18][anon_19] = 0;
      }
    }
    for (int anon_24 = 0; anon_24 < 51; anon_24++) {
      for (int anon_25 = 0; anon_25 < 51; anon_25++) {
        unk_v40_1[anon_24][anon_25] = 0;
      }
    }
    for (int anon_26 = 0; anon_26 < 51; anon_26++) {
      for (int anon_27 = 0; anon_27 < 51; anon_27++) {
        zoom_tiles[anon_26][anon_27] = 0;
      }
    }
    for (int anon_28 = 0; anon_28 < 51; anon_28++) {
      for (int anon_29 = 0; anon_29 < 51; anon_29++) {
        zoom_colors[anon_28][anon_29] = 0;
      }
    }
    for (int anon_30 = 0; anon_30 < 51; anon_30++) {
      for (int anon_31 = 0; anon_31 < 51; anon_31++) {
        zoom_movemask[anon_30][anon_31] = 0;
      }
    }
    for (int anon_32 = 0; anon_32 < 52; anon_32++) {
      for (int anon_33 = 0; anon_33 < 52; anon_33++) {
        area_map[anon_32][anon_33] = -1;
      }
    }
    for (int anon_35 = 0; anon_35 < 20; anon_35++) {
      building_type13[anon_35] = 0;
    }
    for (int anon_36 = 0; anon_36 < 20; anon_36++) {
      building_type5[anon_36] = 0;
    }
    for (int anon_37 = 0; anon_37 < 20; anon_37++) {
      building_shop_house[anon_37] = 0;
    }
  }
  df::world_site_unk130::T_unk_4::T_unk_4()
    :  unk_0(0), index(0), unk_8(0)
  {
  }
  df::world_site_unk130::world_site_unk130()
    :  index(0)
  {
  }
  df::world_underground_region::world_underground_region()
    :  type(Cavern), index(0), layer_depth(0), layer_depth_p1a(0), layer_depth_p1b(0), unk_7a(0), unk_7c(0), unk_7e(0), unk_80(0), unk_82(0), passage_density(0), feature_init(0)
  {
  }
  df::world_unk_20::T_anon_7::T_anon_7()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0)
  {
  }
  df::world_unk_20::world_unk_20()
    :  anon_1(0), anon_3(0), anon_5(0), anon_6(0), anon_8(0), anon_9(0), anon_10(0)
  {
  }
  df::world_unk_6c::world_unk_6c()
    :  anon_2(0)
  {
  }
  df::world_unk_90::world_unk_90()
    :  x1(0), y1(0), x2(0), y2(0), z(0)
  {
  }
  df::world_unk_9c::world_unk_9c()
    :  local_feature_idx(0), global_feature_idx(-1), unk10(0), unk14(0), z_min(0), z_max(0)
  {
  }
  df::world_unk_a8::world_unk_a8()
    :  anon_1(0), anon_2(0), anon_4(0), anon_5(0), anon_6(0)
  {
  }
  df::world_unk_b4::world_unk_b4()
    :  anon_1(0), anon_2(0), anon_6(0), anon_7(0), anon_8(0)
  {
  }
  df::world_unk_c0::T_anon_7::T_anon_7()
    :  anon_1(0), anon_2(0), anon_3(0), anon_4(0), anon_5(0), anon_6(0)
  {
  }
  df::world_unk_c0::world_unk_c0()
    :  anon_1(0), anon_3(0), anon_5(0), anon_6(0), anon_8(0), anon_9(0), anon_10(0)
  {
  }
  df::wound_curse_info::wound_curse_info()
    :  unk_v40_1(0), name_visible(0), sym_and_color1(0x400), sym_and_color2(0x400), flash_period(0), flash_time2(0), speed_add(0), speed_mul_percent(100), attr_change(0), luck_mul_percent(100), time_counter(0), were_race(-1), were_caste(-1)
  {
  }
  df::written_content::written_content()
    :  id(0), page_start(0), page_end(0), anon_1(-1), anon_2(-1), type(ENUM_FIRST_ITEM(written_content_type)), author(-1), anon_3(-1)
  {
  }
  df::global::T_cursor::T_cursor()
    :  x(0), y(0), z(0)
  {
  }
  df::global::T_selection_rect::T_selection_rect()
    :  start_x(0), start_y(0), start_z(0), end_x(0), end_y(0), end_z(0)
  {
  }
}
