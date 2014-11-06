io.output("research.txt")
for k, v in ipairs(df,map) do
	io.write (k.."\t"..tostring(v).."\n")
end
io.write("test")
io.close()

getItemSubTypeName = function (itemType, subType)
	
	if (dfhack.items.getSubtypeCount(itemType)) <= 0 then
		return tostring(-1)
	end
	--print(itemType, subType)
	local subtypename = dfhack.items.getSubtypeDef(itemType, subType)
	if (subtypename == nil) then
		--print (itemType, subType)
		return tostring(-1)
	else
		return tostring(subtypename.name):lower()
	end
end

findEntity = function (id)
	for k,v in ipairs(df.global.world.entities.all) do
		if (v.id == id) then
			return v
		end
	end
	return nil
end

function table.contains(table, element)
  for _, value in pairs(table) do
    if value == element then
      return true
    end
  end
  return false
end

dfhack.run_command("exportlegends all")
print("Exporting extra legends mode details...")
io.output(tostring(df.global.world.cur_savegame.save_dir).."-legends_plus.xml")

io.write ("<?xml version=\"1.0\" encoding='UTF-8'?>".."\n")
io.write ("<df_world>".."\n")
io.write ("<name>"..dfhack.TranslateName(df.global.world.world_data.name).."</name>".."\n")
io.write ("<altname>"..dfhack.TranslateName(df.global.world.world_data.name,1).."</altname>".."\n")

io.write ("<regions>".."\n")
for regionK, regionV in ipairs(df.global.world.world_data.regions) do
	io.write ("\t".."<region>".."\n")
	io.write ("\t\t".."<id>"..regionV.index.."</id>".."\n")
	io.write ("\t\t".."<coords>")
		for xK, xVal in ipairs(regionV.region_coords.x) do
			io.write (xVal..","..regionV.region_coords.y[xK].."|")
		end
	io.write ("</coords>\n")
	io.write ("\t".."</region>".."\n")
end
io.write ("</regions>".."\n")

io.write ("<underground_regions>".."\n")
for regionK, regionV in ipairs(df.global.world.world_data.underground_regions) do
	io.write ("\t".."<underground_region>".."\n")
	io.write ("\t\t".."<id>"..regionV.index.."</id>".."\n")
	io.write ("\t\t".."<coords>")
		for xK, xVal in ipairs(regionV.region_coords.x) do
			io.write (xVal..","..regionV.region_coords.y[xK].."|")
		end
	io.write ("</coords>\n")
	io.write ("\t".."</underground_region>".."\n")
end
io.write ("</underground_regions>".."\n")

io.write ("<sites>".."\n")
for siteK, siteV in ipairs(df.global.world.world_data.sites) do
	if (#siteV.buildings > 0) then
		io.write ("\t".."<site>".."\n")
		for k,v in pairs(siteV) do 
			if (k == "id") then
				io.write ("\t\t".."<"..k..">"..tostring(v).."</"..k..">".."\n")
			elseif (k == "buildings") then
				io.write ("\t\t".."<structures>".."\n")
				for buildingK, buildingV in ipairs(siteV.buildings) do
					io.write ("\t\t\t".."<structure>".."\n")
					io.write ("\t\t\t\t".."<id>"..buildingV.id.."</id>".."\n")
					io.write ("\t\t\t\t".."<type>"..df.abstract_building_type[buildingV:getType()]:lower().."</type>".."\n")
					if (df.abstract_building_type[buildingV:getType()]:lower() ~= "underworld_spire") then
						io.write ("\t\t\t\t".."<name>"..dfhack.TranslateName(buildingV.name, 1).."</name>".."\n")
						io.write ("\t\t\t\t".."<name2>"..dfhack.TranslateName(buildingV.name).."</name2>".."\n")
					end
					io.write ("\t\t\t".."</structure>".."\n")
				end
				io.write ("\t\t".."</structures>".."\n")
			end 
			
		end
		io.write ("\t".."</site>".."\n")
	end
end
io.write ("</sites>".."\n")

io.write ("<world_constructions>".."\n")
for wcK, wcV in ipairs(df.global.world.world_data.constructions.list) do
	io.write ("\t".."<world_construction>".."\n")
	io.write ("\t\t".."<id>"..wcV.id.."</id>".."\n")
	io.write ("\t\t".."<name>"..dfhack.TranslateName(wcV.name,1).."</name>".."\n")
	io.write ("\t\t".."<type>"..(df.world_construction_type[wcV:getType()]):lower().."</type>".."\n")
	io.write ("\t\t".."<coords>")
	for xK, xVal in ipairs(wcV.square_pos.x) do
		io.write (xVal..","..wcV.square_pos.y[xK].."|")
	end
	io.write ("</coords>\n")
	io.write ("\t".."</world_construction>".."\n")
end
io.write ("</world_constructions>".."\n")

io.write ("<artifacts>".."\n")
for artifactK, artifactV in ipairs(df.global.world.artifacts.all) do
	io.write ("\t".."<artifact>".."\n")
	io.write ("\t\t".."<id>"..artifactV.id.."</id>".."\n")
	if (artifactV.item:getType() ~= -1) then
		io.write ("\t\t".."<item_type>"..tostring(df.item_type[artifactV.item:getType()]):lower().."</item_type>".."\n")
		if (artifactV.item:getSubtype() ~= -1) then
			io.write ("\t\t".."<item_subtype>"..artifactV.item.subtype.name.."</item_subtype>".."\n")
		end
	end

	if (artifactV.item:getMaterial() ~= -1 and artifactV.item:getMaterialIndex() ~= -1) then
		io.write ("\t\t".."<mat>"..dfhack.matinfo.toString(dfhack.matinfo.decode(artifactV.item:getMaterial(), artifactV.item:getMaterialIndex())).."</mat>".."\n")
	end
	io.write ("\t".."</artifact>".."\n")
end
io.write ("</artifacts>".."\n")

io.write ("<historical_figures>".."\n")
io.write ("</historical_figures>".."\n")

io.write ("<entity_populations>".."\n")
for entityPopK, entityPopV in ipairs(df.global.world.entity_populations) do
	io.write ("\t".."<entity_population>".."\n")
	io.write ("\t\t".."<id>"..entityPopV.id.."</id>".."\n")
	for raceK, raceV in ipairs(entityPopV.races) do
		local raceName = (df.global.world.raws.creatures.all[raceV].creature_id):lower()
		io.write ("\t\t".."<race>"..raceName..":"..entityPopV.counts[raceK].."</race>".."\n")
	end
	io.write ("\t\t".."<civ_id>"..entityPopV.civ_id.."</civ_id>".."\n")
	io.write ("\t".."</entity_population>".."\n")
end
io.write ("</entity_populations>".."\n")

io.write ("<entities>".."\n")
for entityK, entityV in ipairs(df.global.world.entities.all) do
	io.write ("\t".."<entity>".."\n")
	io.write ("\t\t".."<id>"..entityV.id.."</id>".."\n")
	io.write ("\t\t".."<race>"..(df.global.world.raws.creatures.all[entityV.race].creature_id):lower().."</race>".."\n")
	io.write ("\t\t".."<type>"..(df.historical_entity_type[entityV.type]):lower().."</type>".."\n")
	if (df.historical_entity_type[entityV.type]):lower() == "religion" then -- Get worshipped figure		
		if (entityV.unknown1b ~= nil and entityV.unknown1b.worship ~= nill and 
			#entityV.unknown1b.worship == 1) then
			io.write ("\t\t".."<worship_id>"..entityV.unknown1b.worship[0].."</worship_id>".."\n")
		else
			print(entityV.unknown1b, entityV.unknown1b.worship, #entityV.unknown1b.worship)
		end 
	end
--	for id, link in ipairs(entityV.site_links) do
--		io.write ("\t\t".."<site_link>".."\n")
--			for k, v in pairs(link) do
--				if (k == "type") then
--					io.write ("\t\t\t".."<"..k..">"..tostring(df.entity_site_link_type[v]).."</"..k..">".."\n")
--				elseif (k ~= "anon_12") then
--					io.write ("\t\t\t".."<"..k..">"..v.."</"..k..">".."\n")
--				end
--			end
--		io.write ("\t\t".."</site_link>".."\n")
--	end
	for id, link in pairs(entityV.entity_links) do
		io.write ("\t\t".."<entity_link>".."\n")
			for k, v in pairs(link) do
				if (k == "type") then
					io.write ("\t\t\t".."<"..k..">"..tostring(df.entity_entity_link_type[v]).."</"..k..">".."\n")
				else
					io.write ("\t\t\t".."<"..k..">"..v.."</"..k..">".."\n")
				end
			end
		io.write ("\t\t".."</entity_link>".."\n")
	end
	for id, link in ipairs(entityV.children) do
		io.write ("\t\t".."<child>"..link.."</child>".."\n")
	end
	io.write ("\t".."</entity>".."\n")
end
io.write ("</entities>".."\n")

io.write ("<historical_events>".."\n")
for ID, event in ipairs(df.global.world.history.events) do
	if event:getType() == df.history_event_type.ADD_HF_ENTITY_LINK 
		  or event:getType() == df.history_event_type.ADD_HF_SITE_LINK
		  or event:getType() == df.history_event_type.ADD_HF_HF_LINK
		  or event:getType() == df.history_event_type.ADD_HF_ENTITY_LINK
		  or event:getType() == df.history_event_type.TOPICAGREEMENT_CONCLUDED
		  or event:getType() == df.history_event_type.TOPICAGREEMENT_REJECTED
		  or event:getType() == df.history_event_type.TOPICAGREEMENT_MADE
		  or event:getType() == df.history_event_type.BODY_ABUSED
		  or event:getType() == df.history_event_type.CHANGE_HF_JOB
		  or event:getType() == df.history_event_type.CREATED_BUILDING
		  or event:getType() == df.history_event_type.CREATURE_DEVOURED
		  or event:getType() == df.history_event_type.HF_DOES_INTERACTION
		  or event:getType() == df.history_event_type.HIST_FIGURE_NEW_PET
		  or event:getType() == df.history_event_type.HIST_FIGURE_REACH_SUMMIT
		  or event:getType() == df.history_event_type.ITEM_STOLEN
		  or event:getType() == df.history_event_type.REMOVE_HF_ENTITY_LINK
		  or event:getType() == df.history_event_type.REMOVE_HF_SITE_LINK
		  or event:getType() == df.history_event_type.REPLACED_BUILDING
		  or event:getType() == df.history_event_type.MASTERPIECE_CREATED_ARCH_DESIGN
		  or event:getType() == df.history_event_type.MASTERPIECE_CREATED_DYE_ITEM
		  or event:getType() == df.history_event_type.MASTERPIECE_CREATED_ARCH_CONSTRUCT
		  or event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM
		  or event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM_IMPROVEMENT
		  or event:getType() == df.history_event_type.MASTERPIECE_CREATED_FOOD -- Missing item subtype
		  or event:getType() == df.history_event_type.MASTERPIECE_CREATED_ENGRAVING
		  or event:getType() == df.history_event_type.MASTERPIECE_LOST
		  or event:getType() == df.history_event_type.ENTITY_ACTION
		  or event:getType() == df.history_event_type.HF_ACT_ON_BUILDING
		  or event:getType() == df.history_event_type.ARTIFACT_CREATED
		  or event:getType() == df.history_event_type.ASSUME_IDENTITY
		  or event:getType() == df.history_event_type.CREATE_ENTITY_POSITION
		  or event:getType() == df.history_event_type.DIPLOMAT_LOST
		  or event:getType() == df.history_event_type.MERCHANT
		  or event:getType() == df.history_event_type.WAR_PEACE_ACCEPTED
		  or event:getType() == df.history_event_type.WAR_PEACE_REJECTED
		  or event:getType() == df.history_event_type.HIST_FIGURE_WOUNDED
		  or event:getType() == df.history_event_type.HIST_FIGURE_DIED
			then
		io.write ("\t".."<historical_event>".."\n")
		io.write ("\t\t".."<id>"..event.id.."</id>".."\n")
		io.write ("\t\t".."<type>"..tostring(df.history_event_type[event:getType()]):lower().."</type>".."\n")
		for k,v in pairs(event) do 
			if k == "year" or k == "seconds" or k == "flags" or k == "id"  
				or (k == "region" and event:getType() ~= df.history_event_type.HF_DOES_INTERACTION)
				or k == "region_pos" or k == "layer" or k == "feature_layer" or k == "subregion"
				or k == "anon_1" or k == "anon_2" or k == "flags2" or k == "unk1" then
				
			elseif event:getType() == df.history_event_type.ADD_HF_ENTITY_LINK and k == "link_type" then
				io.write ("\t\t".."<"..k..">"..df.histfig_entity_link_type[v]:lower().."</"..k..">".."\n")
			elseif event:getType() == df.history_event_type.ADD_HF_ENTITY_LINK and k == "position_id" then
				local entity = findEntity(event.civ)
			    if (entity ~= nil and event.civ > -1 and v > -1) then
					for entitypositionsK, entityPositionsV in ipairs(entity.positions.own) do
						if entityPositionsV.id == v then
							io.write ("\t\t".."<position>"..tostring(entityPositionsV.name[0]):lower().."</position>".."\n")
							break
						end 
					end
				else
					io.write ("\t\t".."<position>-1</position>".."\n")
				end 
			elseif event:getType() == df.history_event_type.CREATE_ENTITY_POSITION and k == "position" then
				local entity = findEntity(event.site_civ)
			    if (entity ~= nil and v > -1) then
					for entitypositionsK, entityPositionsV in ipairs(entity.positions.own) do
						if entityPositionsV.id == v then
							io.write ("\t\t".."<position>"..tostring(entityPositionsV.name[0]):lower().."</position>".."\n")
							break
						end 
					end
				else
					io.write ("\t\t".."<position>-1</position>".."\n")
				end 
			elseif event:getType() == df.history_event_type.REMOVE_HF_ENTITY_LINK and k == "link_type" then
				io.write ("\t\t".."<"..k..">"..df.histfig_entity_link_type[v]:lower().."</"..k..">".."\n")
			elseif event:getType() == df.history_event_type.REMOVE_HF_ENTITY_LINK and k == "position_id" then
			    local entity = findEntity(event.civ)
			    if (entity ~= nil and event.civ > -1 and v > -1) then
					for entitypositionsK, entityPositionsV in ipairs(entity.positions.own) do
						if entityPositionsV.id == v then
							io.write ("\t\t".."<position>"..tostring(entityPositionsV.name[0]):lower().."</position>".."\n")
							break
						end 
					end
				else
					io.write ("\t\t".."<position>-1</position>".."\n")
				end 
			elseif event:getType() == df.history_event_type.ADD_HF_HF_LINK and k == "type" then
				io.write ("\t\t".."<link_type>"..df.histfig_hf_link_type[v]:lower().."</link_type>".."\n")
			elseif event:getType() == df.history_event_type.ADD_HF_SITE_LINK and k == "type" then
				io.write ("\t\t".."<link_type>"..df.histfig_site_link_type[v]:lower().."</link_type>".."\n")
			elseif event:getType() == df.history_event_type.REMOVE_HF_SITE_LINK and k == "type" then
				io.write ("\t\t".."<link_type>"..df.histfig_site_link_type[v]:lower().."</link_type>".."\n")
			elseif (event:getType() == df.history_event_type.ITEM_STOLEN or 
					event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM or
					event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM_IMPROVEMENT					
			        ) and k == "item_type" then
				io.write ("\t\t".."<item_type>"..df.item_type[v]:lower().."</item_type>".."\n")
			elseif (event:getType() == df.history_event_type.ITEM_STOLEN or 
					event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM or
					event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM_IMPROVEMENT					
					) and k == "item_subtype" then
				--if event.item_type > -1 and v > -1 then
					io.write ("\t\t".."<"..k..">"..getItemSubTypeName(event.item_type,v).."</"..k..">".."\n")
				--end
			elseif event:getType() == df.history_event_type.ITEM_STOLEN and k == "mattype" then
				if (v > -1) then
					if (dfhack.matinfo.decode(event.mattype, event.matindex) == nil) then
						io.write ("\t\t".."<mattype>"..event.mattype.."</mattype>".."\n")
						io.write ("\t\t".."<matindex>"..event.matindex.."</matindex>".."\n")
					else
						io.write ("\t\t".."<mat>"..dfhack.matinfo.toString(dfhack.matinfo.decode(event.mattype, event.matindex)).."</mat>".."\n")
					end
				end
			elseif (event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM or
					event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM_IMPROVEMENT 
					) and k == "mat_type" then
				if (v > -1) then
					if (dfhack.matinfo.decode(event.mat_type, event.mat_index) == nil) then
						io.write ("\t\t".."<mat_type>"..event.mat_type.."</mat_type>".."\n")
						io.write ("\t\t".."<mat_index>"..event.mat_index.."</mat_index>".."\n")
					else
						io.write ("\t\t".."<mat>"..dfhack.matinfo.toString(dfhack.matinfo.decode(event.mat_type, event.mat_index)).."</mat>".."\n")
					end
				end
			elseif event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM_IMPROVEMENT and k == "imp_mat_type" then
				if (v > -1) then
					if (dfhack.matinfo.decode(event.imp_mat_type, event.imp_mat_index) == nil) then
						io.write ("\t\t".."<imp_mat_type>"..event.imp_mat_type.."</imp_mat_type>".."\n")
						io.write ("\t\t".."<imp_mat_index>"..event.imp_mat_index.."</imp_mat_index>".."\n")
					else
						io.write ("\t\t".."<imp_mat>"..dfhack.matinfo.toString(dfhack.matinfo.decode(event.imp_mat_type, event.imp_mat_index)).."</imp_mat>".."\n")
					end
				end
				
			elseif event:getType() == df.history_event_type.ITEM_STOLEN and k == "matindex" then
				--skip
			elseif event:getType() == df.history_event_type.ITEM_STOLEN and k == "item" and v == -1 then
				--skip
			elseif (event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM or 
			        event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM_IMPROVEMENT
					) and k == "mat_index" then
				--skip
			elseif event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM_IMPROVEMENT and k == "imp_mat_index" then
				--skip
			elseif (event:getType() == df.history_event_type.WAR_PEACE_ACCEPTED or 
					event:getType() == df.history_event_type.WAR_PEACE_REJECTED or 
					event:getType() == df.history_event_type.TOPICAGREEMENT_CONCLUDED or 
					event:getType() == df.history_event_type.TOPICAGREEMENT_REJECTED or 
					event:getType() == df.history_event_type.TOPICAGREEMENT_MADE 
			        ) and k == "topic" then
				io.write ("\t\t".."<topic>"..tostring(df.meeting_topic[v]):lower().."</topic>".."\n")
			elseif event:getType() == df.history_event_type.MASTERPIECE_CREATED_ITEM_IMPROVEMENT and k == "improvement_type" then
				io.write ("\t\t".."<improvement_type>"..df.improvement_type[v]:lower().."</improvement_type>".."\n")
			elseif ((event:getType() == df.history_event_type.HIST_FIGURE_REACH_SUMMIT and k == "figures") or
			        (event:getType() == df.history_event_type.HIST_FIGURE_NEW_PET and k == "group") 
			     or (event:getType() == df.history_event_type.BODY_ABUSED and k == "bodies")) then
				for detailK,detailV in pairs(v) do 
					io.write ("\t\t".."<"..k..">"..detailV.."</"..k..">".."\n")
				end
			elseif  event:getType() == df.history_event_type.HIST_FIGURE_NEW_PET and k == "pets" then
				for detailK,detailV in pairs(v) do
					io.write ("\t\t".."<"..k..">"..(df.global.world.raws.creatures.all[detailV].creature_id):lower().."</"..k..">".."\n")
				end
				
			elseif event:getType() == df.history_event_type.BODY_ABUSED and (k == "props") then
				io.write ("\t\t".."<"..k.."_item_type"..">"..tostring(df.item_type[event.props.item.item_type]):lower().."</"..k.."_item_type"..">".."\n")
				io.write ("\t\t".."<"..k.."_item_subtype"..">"..getItemSubTypeName(event.props.item.item_type,event.props.item.item_subtype).."</"..k.."_item_subtype"..">".."\n")
				if (event.props.item.mat_type > -1) then
					if (dfhack.matinfo.decode(event.props.item.mat_type, event.props.item.mat_index) == nil) then
						io.write ("\t\t".."<props_item_mat_type>"..event.props.item.mat_type.."</props_item_mat_type>".."\n")
						io.write ("\t\t".."<props_item_mat_index>"..event.props.item.mat_index.."</props_item_mat_index>".."\n")
					else
						io.write ("\t\t".."<props_item_mat>"..dfhack.matinfo.toString(dfhack.matinfo.decode(event.props.item.mat_type, event.props.item.mat_index)).."</props_item_mat>".."\n")
					end
				end				
				--io.write ("\t\t".."<"..k.."_item_mat_type"..">"..tostring(event.props.item.mat_type).."</"..k.."_item_mat_index"..">".."\n")
				--io.write ("\t\t".."<"..k.."_item_mat_index"..">"..tostring(event.props.item.mat_index).."</"..k.."_item_mat_index"..">".."\n")
				io.write ("\t\t".."<"..k.."_pile_type"..">"..tostring(event.props.pile_type).."</"..k.."_pile_type"..">".."\n")
			elseif event:getType() == df.history_event_type.ASSUME_IDENTITY and k == "identity" then
				if (df.global.world.assumed_identities.all[v].histfig_id == -1) then
					local thisIdentity = df.global.world.assumed_identities.all[v]
					io.write ("\t\t".."<identity_name>"..thisIdentity.name.first_name.."</identity_name>".."\n")
					io.write ("\t\t".."<identity_race>"..(df.global.world.raws.creatures.all[thisIdentity.race].creature_id):lower().."</identity_race>".."\n")
					io.write ("\t\t".."<identity_caste>"..(df.global.world.raws.creatures.all[thisIdentity.race].caste[thisIdentity.caste].caste_id):lower().."</identity_caste>".."\n")
				else
					io.write ("\t\t".."<identity_hf>"..df.global.world.assumed_identities.all[v].histfig_id.."</identity_hf>".."\n")
				end
			elseif event:getType() == df.history_event_type.MASTERPIECE_CREATED_ARCH_CONSTRUCT and k == "building_type" then
				io.write ("\t\t".."<building_type>"..df.building_type[v]:lower().."</building_type>".."\n")
			elseif event:getType() == df.history_event_type.MASTERPIECE_CREATED_ARCH_CONSTRUCT and k == "building_subtype" then
				if (df.building_type[event.building_type]:lower() == "furnace") then
					io.write ("\t\t".."<building_subtype>"..df.furnace_type[v]:lower().."</building_subtype>".."\n")
				elseif v > -1 then
					io.write ("\t\t".."<building_subtype>"..tostring(v).."</building_subtype>".."\n")
				end
			elseif k == "race" then
				if v > -1 then
					io.write ("\t\t".."<race>"..(df.global.world.raws.creatures.all[v].creature_id):lower().."</race>".."\n")
				end 
			elseif k == "caste" then
				if v > -1 then
					io.write ("\t\t".."<caste>"..(df.global.world.raws.creatures.all[event.race].caste[v].caste_id):lower().."</caste>".."\n")
				end 
			elseif event:getType() == df.history_event_type.HIST_FIGURE_DIED and k == "weapon" then
				for detailK,detailV in pairs(v) do 
					
					if (detailK == "item") then
						if detailV > -1 then
							io.write ("\t\t".."<"..detailK..">"..detailV.."</"..detailK..">".."\n")
							local thisItem = df.item.find(detailV)
							if (thisItem ~= nil) then
								if (thisItem.flags.artifact == true) then
									for refk,refv in pairs(thisItem.general_refs) do
										if (refv:getType() == 1) then
											io.write ("\t\t".."<artifact_id>"..refv.artifact_id.."</artifact_id>".."\n")
											break
										end 
									end
								end
							end
							
						end
					elseif (detailK == "item_type") then
						if event.weapon.item > -1 then
							io.write ("\t\t".."<"..detailK..">"..tostring(df.item_type[detailV]):lower().."</"..detailK..">".."\n")
						end
					elseif (detailK == "item_subtype") then
						if event.weapon.item > -1 and detailV > -1 then
							io.write ("\t\t".."<"..detailK..">"..getItemSubTypeName(event.weapon.item_type,detailV).."</"..detailK..">".."\n")
						end
					elseif (detailK == "mattype") then
						if (detailV > -1) then
							io.write ("\t\t".."<mat>"..dfhack.matinfo.toString(dfhack.matinfo.decode(event.weapon.mattype, event.weapon.matindex)).."</mat>".."\n")
						end
					elseif (detailK == "matindex") then

					elseif (detailK == "shooter_item") then
						if detailV > -1 then
							io.write ("\t\t".."<"..detailK..">"..detailV.."</"..detailK..">".."\n")
							local thisItem = df.item.find(detailV)
							if  thisItem ~= nil then
								if (thisItem.flags.artifact == true) then
									for refk,refv in pairs(thisItem.general_refs) do
										if (refv:getType() == 1) then
											io.write ("\t\t".."<shooter_artifact_id>"..refv.artifact_id.."</shooter_artifact_id>".."\n")
											break
										end 
									end
								end
							end
						end
					elseif (detailK == "shooter_item_type") then
						if event.weapon.shooter_item > -1 then
							io.write ("\t\t".."<"..detailK..">"..tostring(df.item_type[detailV]):lower().."</"..detailK..">".."\n")
						end
					elseif (detailK == "shooter_item_subtype") then
						if event.weapon.shooter_item > -1 and detailV > -1 then
							io.write ("\t\t".."<"..detailK..">"..getItemSubTypeName(event.weapon.shooter_item_type,detailV).."</"..detailK..">".."\n")
						end
					elseif (detailK == "shooter_mattype") then
						if (detailV > -1) then
							io.write ("\t\t".."<shooter_mat>"..dfhack.matinfo.toString(dfhack.matinfo.decode(event.weapon.shooter_mattype, event.weapon.shooter_matindex)).."</shooter_mat>".."\n")
						end
					elseif (detailK == "shooter_matindex") then
					
					elseif detailK == "slayer_race" or detailK == "slayer_caste" then
					
					else
						io.write ("\t\t".."<"..detailK..">"..detailV.."</"..detailK..">".."\n")
					end
				end
			elseif event:getType() == df.history_event_type.HIST_FIGURE_DIED and k == "death_cause" then
				io.write ("\t\t".."<"..k..">"..df.death_type[v]:lower().."</"..k..">".."\n")
			else
				io.write ("\t\t".."<"..k..">"..tostring(v).."</"..k..">".."\n")
			end

		end
		io.write ("\t".."</historical_event>".."\n")
	end
end
io.write ("</historical_events>".."\n")

io.write ("<historical_event_collections>".."\n")
io.write ("</historical_event_collections>".."\n")

io.write ("<historical_eras>".."\n")
io.write ("</historical_eras>".."\n")

io.write ("</df_world>".."\n")

io.close()

--[[
io.output("research.txt")

for k, v in pairs(df.global.world.world_data) do
	io.write (k.."\t"..tostring(v).."\n")
end


io.close()
--]]
--[[
--Events missing details
ADD_HF_SITE_LINK
ADD_HF_HF_LINK
ADD_HF_ENTITY_LINK
TOPICAGREEMENT_CONCLUDED
TOPICAGREEMENT_REJECTED
TOPICAGREEMENT_MADE
BODY_ABUSED
CHANGE_HF_JOB
CREATED_BUILDING
CREATURE_DEVOURED
HF_DOES_INTERACTION
HIST_FIGURE_NEW_PET
HIST_FIGURE_REACH_SUMMIT
ITEM_STOLEN
REMOVE_HF_ENTITY_LINK
REMOVE_HF_SITE_LINK
REPLACED_BUILDING
MASTERPIECE_CREATED_ARCH_DESIGN
MASTERPIECE_CREATED_ARCH_CONSTRUCT
MASTERPIECE_CREATED_ITEM
MASTERPIECE_CREATED_DYE_ITEM
MASTERPIECE_CREATED_ITEM_IMPROVEMENT
MASTERPIECE_CREATED_FOOD
MASTERPIECE_CREATED_ENGRAVING
HIST_FIGURE_DIED

--Questionable Events
?
ENTITY_ACTION
HF_ACT_ON_BUILDING

--LegendsViewer Additions
ARTIFACT_CREATED
ASSUME_IDENTITY
CREATE_ENTITY_POSITION
DIPLOMAT_LOST
MASTERPIECE_LOST
WAR_PEACE_ACCEPTED
WAR_PEACE_REJECTED
HIST_FIGURE_WOUNDED

--Events which probably are fine

WAR_ATTACKED_SITE
WAR_DESTROYED_SITE
CREATED_SITE
FIRST_CONTACT
FIRST_CONTACT_FAILED
WAR_PEACE_ACCEPTED
WAR_PEACE_REJECTED
DIPLOMAT_LOST
AGREEMENTS_VOIDED
MERCHANT
ARTIFACT_HIDDEN
ARTIFACT_POSSESSED
ARTIFACT_CREATED
ARTIFACT_LOST
ARTIFACT_FOUND
ARTIFACT_RECOVERED
ARTIFACT_DROPPED
RECLAIM_SITE
HF_DESTROYED_SITE
SITE_DIED
SITE_ABANDONED
ENTITY_CREATED
ENTITY_INCORPORATED
REMOVE_HF_HF_LINK
ENTITY_RAZED_BUILDING
MASTERPIECE_LOST
CHANGE_HF_STATE
WAR_FIELD_BATTLE
WAR_PLUNDERED_SITE
WAR_SITE_NEW_LEADER
WAR_SITE_TRIBUTE_FORCED
WAR_SITE_TAKEN_OVER
HIST_FIGURE_ABDUCTED
HF_RAZED_BUILDING
HIST_FIGURE_SIMPLE_BATTLE_EVENT
CREATED_WORLD_CONSTRUCTION
HIST_FIGURE_REUNION
HIST_FIGURE_TRAVEL
ASSUME_IDENTITY
CREATE_ENTITY_POSITION
CHANGE_CREATURE_TYPE
HIST_FIGURE_REVIVED
HF_LEARNS_SECRET
CHANGE_HF_BODY_STATE
HF_CONFRONTED
ENTITY_LAW
HF_GAINS_SECRET_GOAL
ARTIFACT_STORED
--]]
