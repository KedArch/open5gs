
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "media_component_rm.h"

OpenAPI_media_component_rm_t *OpenAPI_media_component_rm_create(
    char *af_app_id,
    OpenAPI_af_routing_requirement_rm_t *af_rout_req,
    char *qos_reference,
    OpenAPI_list_t *alt_ser_reqs,
    bool is_dis_ue_notif,
    int dis_ue_notif,
    bool is_cont_ver,
    int cont_ver,
    OpenAPI_list_t *codecs,
    bool is_des_max_latency,
    float des_max_latency,
    bool is_des_max_loss,
    float des_max_loss,
    char *flus_id,
    OpenAPI_flow_status_e f_status,
    char *mar_bw_dl,
    char *mar_bw_ul,
    bool is_max_packet_loss_rate_dl,
    int max_packet_loss_rate_dl,
    bool is_max_packet_loss_rate_ul,
    int max_packet_loss_rate_ul,
    char *max_supp_bw_dl,
    char *max_supp_bw_ul,
    int med_comp_n,
    OpenAPI_list_t* med_sub_comps,
    OpenAPI_media_type_e med_type,
    char *min_des_bw_dl,
    char *min_des_bw_ul,
    char *mir_bw_dl,
    char *mir_bw_ul,
    OpenAPI_preemption_capability_rm_t *preempt_cap,
    OpenAPI_preemption_vulnerability_rm_t *preempt_vuln,
    OpenAPI_priority_sharing_indicator_e prio_sharing_ind,
    OpenAPI_reserv_priority_e res_prio,
    char *rr_bw,
    char *rs_bw,
    bool is_sharing_key_dl,
    int sharing_key_dl,
    bool is_sharing_key_ul,
    int sharing_key_ul,
    OpenAPI_tsn_qos_container_rm_t *tsn_qos,
    OpenAPI_tscai_input_container_t *tscai_input_dl,
    OpenAPI_tscai_input_container_t *tscai_input_ul
)
{
    OpenAPI_media_component_rm_t *media_component_rm_local_var = ogs_malloc(sizeof(OpenAPI_media_component_rm_t));
    ogs_assert(media_component_rm_local_var);

    media_component_rm_local_var->af_app_id = af_app_id;
    media_component_rm_local_var->af_rout_req = af_rout_req;
    media_component_rm_local_var->qos_reference = qos_reference;
    media_component_rm_local_var->alt_ser_reqs = alt_ser_reqs;
    media_component_rm_local_var->is_dis_ue_notif = is_dis_ue_notif;
    media_component_rm_local_var->dis_ue_notif = dis_ue_notif;
    media_component_rm_local_var->is_cont_ver = is_cont_ver;
    media_component_rm_local_var->cont_ver = cont_ver;
    media_component_rm_local_var->codecs = codecs;
    media_component_rm_local_var->is_des_max_latency = is_des_max_latency;
    media_component_rm_local_var->des_max_latency = des_max_latency;
    media_component_rm_local_var->is_des_max_loss = is_des_max_loss;
    media_component_rm_local_var->des_max_loss = des_max_loss;
    media_component_rm_local_var->flus_id = flus_id;
    media_component_rm_local_var->f_status = f_status;
    media_component_rm_local_var->mar_bw_dl = mar_bw_dl;
    media_component_rm_local_var->mar_bw_ul = mar_bw_ul;
    media_component_rm_local_var->is_max_packet_loss_rate_dl = is_max_packet_loss_rate_dl;
    media_component_rm_local_var->max_packet_loss_rate_dl = max_packet_loss_rate_dl;
    media_component_rm_local_var->is_max_packet_loss_rate_ul = is_max_packet_loss_rate_ul;
    media_component_rm_local_var->max_packet_loss_rate_ul = max_packet_loss_rate_ul;
    media_component_rm_local_var->max_supp_bw_dl = max_supp_bw_dl;
    media_component_rm_local_var->max_supp_bw_ul = max_supp_bw_ul;
    media_component_rm_local_var->med_comp_n = med_comp_n;
    media_component_rm_local_var->med_sub_comps = med_sub_comps;
    media_component_rm_local_var->med_type = med_type;
    media_component_rm_local_var->min_des_bw_dl = min_des_bw_dl;
    media_component_rm_local_var->min_des_bw_ul = min_des_bw_ul;
    media_component_rm_local_var->mir_bw_dl = mir_bw_dl;
    media_component_rm_local_var->mir_bw_ul = mir_bw_ul;
    media_component_rm_local_var->preempt_cap = preempt_cap;
    media_component_rm_local_var->preempt_vuln = preempt_vuln;
    media_component_rm_local_var->prio_sharing_ind = prio_sharing_ind;
    media_component_rm_local_var->res_prio = res_prio;
    media_component_rm_local_var->rr_bw = rr_bw;
    media_component_rm_local_var->rs_bw = rs_bw;
    media_component_rm_local_var->is_sharing_key_dl = is_sharing_key_dl;
    media_component_rm_local_var->sharing_key_dl = sharing_key_dl;
    media_component_rm_local_var->is_sharing_key_ul = is_sharing_key_ul;
    media_component_rm_local_var->sharing_key_ul = sharing_key_ul;
    media_component_rm_local_var->tsn_qos = tsn_qos;
    media_component_rm_local_var->tscai_input_dl = tscai_input_dl;
    media_component_rm_local_var->tscai_input_ul = tscai_input_ul;

    return media_component_rm_local_var;
}

void OpenAPI_media_component_rm_free(OpenAPI_media_component_rm_t *media_component_rm)
{
    if (NULL == media_component_rm) {
        return;
    }
    OpenAPI_lnode_t *node;
    ogs_free(media_component_rm->af_app_id);
    OpenAPI_af_routing_requirement_rm_free(media_component_rm->af_rout_req);
    ogs_free(media_component_rm->qos_reference);
    OpenAPI_list_for_each(media_component_rm->alt_ser_reqs, node) {
        ogs_free(node->data);
    }
    OpenAPI_list_free(media_component_rm->alt_ser_reqs);
    OpenAPI_list_for_each(media_component_rm->codecs, node) {
        ogs_free(node->data);
    }
    OpenAPI_list_free(media_component_rm->codecs);
    ogs_free(media_component_rm->flus_id);
    ogs_free(media_component_rm->mar_bw_dl);
    ogs_free(media_component_rm->mar_bw_ul);
    ogs_free(media_component_rm->max_supp_bw_dl);
    ogs_free(media_component_rm->max_supp_bw_ul);
    OpenAPI_list_for_each(media_component_rm->med_sub_comps, node) {
        OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
        ogs_free(localKeyValue->key);
        OpenAPI_media_sub_component_rm_free(localKeyValue->value);
        ogs_free(localKeyValue);
    }
    OpenAPI_list_free(media_component_rm->med_sub_comps);
    ogs_free(media_component_rm->min_des_bw_dl);
    ogs_free(media_component_rm->min_des_bw_ul);
    ogs_free(media_component_rm->mir_bw_dl);
    ogs_free(media_component_rm->mir_bw_ul);
    OpenAPI_preemption_capability_rm_free(media_component_rm->preempt_cap);
    OpenAPI_preemption_vulnerability_rm_free(media_component_rm->preempt_vuln);
    ogs_free(media_component_rm->rr_bw);
    ogs_free(media_component_rm->rs_bw);
    OpenAPI_tsn_qos_container_rm_free(media_component_rm->tsn_qos);
    OpenAPI_tscai_input_container_free(media_component_rm->tscai_input_dl);
    OpenAPI_tscai_input_container_free(media_component_rm->tscai_input_ul);
    ogs_free(media_component_rm);
}

cJSON *OpenAPI_media_component_rm_convertToJSON(OpenAPI_media_component_rm_t *media_component_rm)
{
    cJSON *item = NULL;

    if (media_component_rm == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [MediaComponentRm]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (media_component_rm->af_app_id) {
    if (cJSON_AddStringToObject(item, "afAppId", media_component_rm->af_app_id) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [af_app_id]");
        goto end;
    }
    }

    if (media_component_rm->af_rout_req) {
    cJSON *af_rout_req_local_JSON = OpenAPI_af_routing_requirement_rm_convertToJSON(media_component_rm->af_rout_req);
    if (af_rout_req_local_JSON == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [af_rout_req]");
        goto end;
    }
    cJSON_AddItemToObject(item, "afRoutReq", af_rout_req_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [af_rout_req]");
        goto end;
    }
    }

    if (media_component_rm->qos_reference) {
    if (cJSON_AddStringToObject(item, "qosReference", media_component_rm->qos_reference) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [qos_reference]");
        goto end;
    }
    }

    if (media_component_rm->alt_ser_reqs) {
    cJSON *alt_ser_reqs = cJSON_AddArrayToObject(item, "altSerReqs");
    if (alt_ser_reqs == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [alt_ser_reqs]");
        goto end;
    }

    OpenAPI_lnode_t *alt_ser_reqs_node;
    OpenAPI_list_for_each(media_component_rm->alt_ser_reqs, alt_ser_reqs_node)  {
    if (cJSON_AddStringToObject(alt_ser_reqs, "", (char*)alt_ser_reqs_node->data) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [alt_ser_reqs]");
        goto end;
    }
                    }
    }

    if (media_component_rm->is_dis_ue_notif) {
    if (cJSON_AddBoolToObject(item, "disUeNotif", media_component_rm->dis_ue_notif) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [dis_ue_notif]");
        goto end;
    }
    }

    if (media_component_rm->is_cont_ver) {
    if (cJSON_AddNumberToObject(item, "contVer", media_component_rm->cont_ver) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [cont_ver]");
        goto end;
    }
    }

    if (media_component_rm->codecs) {
    cJSON *codecs = cJSON_AddArrayToObject(item, "codecs");
    if (codecs == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [codecs]");
        goto end;
    }

    OpenAPI_lnode_t *codecs_node;
    OpenAPI_list_for_each(media_component_rm->codecs, codecs_node)  {
    if (cJSON_AddStringToObject(codecs, "", (char*)codecs_node->data) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [codecs]");
        goto end;
    }
                    }
    }

    if (media_component_rm->is_des_max_latency) {
    if (cJSON_AddNumberToObject(item, "desMaxLatency", media_component_rm->des_max_latency) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [des_max_latency]");
        goto end;
    }
    }

    if (media_component_rm->is_des_max_loss) {
    if (cJSON_AddNumberToObject(item, "desMaxLoss", media_component_rm->des_max_loss) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [des_max_loss]");
        goto end;
    }
    }

    if (media_component_rm->flus_id) {
    if (cJSON_AddStringToObject(item, "flusId", media_component_rm->flus_id) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [flus_id]");
        goto end;
    }
    }

    if (media_component_rm->f_status) {
    if (cJSON_AddStringToObject(item, "fStatus", OpenAPI_flow_status_ToString(media_component_rm->f_status)) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [f_status]");
        goto end;
    }
    }

    if (media_component_rm->mar_bw_dl) {
    if (cJSON_AddStringToObject(item, "marBwDl", media_component_rm->mar_bw_dl) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [mar_bw_dl]");
        goto end;
    }
    }

    if (media_component_rm->mar_bw_ul) {
    if (cJSON_AddStringToObject(item, "marBwUl", media_component_rm->mar_bw_ul) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [mar_bw_ul]");
        goto end;
    }
    }

    if (media_component_rm->is_max_packet_loss_rate_dl) {
    if (cJSON_AddNumberToObject(item, "maxPacketLossRateDl", media_component_rm->max_packet_loss_rate_dl) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [max_packet_loss_rate_dl]");
        goto end;
    }
    }

    if (media_component_rm->is_max_packet_loss_rate_ul) {
    if (cJSON_AddNumberToObject(item, "maxPacketLossRateUl", media_component_rm->max_packet_loss_rate_ul) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [max_packet_loss_rate_ul]");
        goto end;
    }
    }

    if (media_component_rm->max_supp_bw_dl) {
    if (cJSON_AddStringToObject(item, "maxSuppBwDl", media_component_rm->max_supp_bw_dl) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [max_supp_bw_dl]");
        goto end;
    }
    }

    if (media_component_rm->max_supp_bw_ul) {
    if (cJSON_AddStringToObject(item, "maxSuppBwUl", media_component_rm->max_supp_bw_ul) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [max_supp_bw_ul]");
        goto end;
    }
    }

    if (cJSON_AddNumberToObject(item, "medCompN", media_component_rm->med_comp_n) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [med_comp_n]");
        goto end;
    }

    if (media_component_rm->med_sub_comps) {
    cJSON *med_sub_comps = cJSON_AddObjectToObject(item, "medSubComps");
    if (med_sub_comps == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [med_sub_comps]");
        goto end;
    }
    cJSON *localMapObject = med_sub_comps;
    OpenAPI_lnode_t *med_sub_comps_node;
    if (media_component_rm->med_sub_comps) {
        OpenAPI_list_for_each(media_component_rm->med_sub_comps, med_sub_comps_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)med_sub_comps_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_media_sub_component_rm_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (media_component_rm->med_type) {
    if (cJSON_AddStringToObject(item, "medType", OpenAPI_media_type_ToString(media_component_rm->med_type)) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [med_type]");
        goto end;
    }
    }

    if (media_component_rm->min_des_bw_dl) {
    if (cJSON_AddStringToObject(item, "minDesBwDl", media_component_rm->min_des_bw_dl) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [min_des_bw_dl]");
        goto end;
    }
    }

    if (media_component_rm->min_des_bw_ul) {
    if (cJSON_AddStringToObject(item, "minDesBwUl", media_component_rm->min_des_bw_ul) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [min_des_bw_ul]");
        goto end;
    }
    }

    if (media_component_rm->mir_bw_dl) {
    if (cJSON_AddStringToObject(item, "mirBwDl", media_component_rm->mir_bw_dl) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [mir_bw_dl]");
        goto end;
    }
    }

    if (media_component_rm->mir_bw_ul) {
    if (cJSON_AddStringToObject(item, "mirBwUl", media_component_rm->mir_bw_ul) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [mir_bw_ul]");
        goto end;
    }
    }

    if (media_component_rm->preempt_cap) {
    cJSON *preempt_cap_local_JSON = OpenAPI_preemption_capability_rm_convertToJSON(media_component_rm->preempt_cap);
    if (preempt_cap_local_JSON == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [preempt_cap]");
        goto end;
    }
    cJSON_AddItemToObject(item, "preemptCap", preempt_cap_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [preempt_cap]");
        goto end;
    }
    }

    if (media_component_rm->preempt_vuln) {
    cJSON *preempt_vuln_local_JSON = OpenAPI_preemption_vulnerability_rm_convertToJSON(media_component_rm->preempt_vuln);
    if (preempt_vuln_local_JSON == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [preempt_vuln]");
        goto end;
    }
    cJSON_AddItemToObject(item, "preemptVuln", preempt_vuln_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [preempt_vuln]");
        goto end;
    }
    }

    if (media_component_rm->prio_sharing_ind) {
    if (cJSON_AddStringToObject(item, "prioSharingInd", OpenAPI_priority_sharing_indicator_ToString(media_component_rm->prio_sharing_ind)) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [prio_sharing_ind]");
        goto end;
    }
    }

    if (media_component_rm->res_prio) {
    if (cJSON_AddStringToObject(item, "resPrio", OpenAPI_reserv_priority_ToString(media_component_rm->res_prio)) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [res_prio]");
        goto end;
    }
    }

    if (media_component_rm->rr_bw) {
    if (cJSON_AddStringToObject(item, "rrBw", media_component_rm->rr_bw) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [rr_bw]");
        goto end;
    }
    }

    if (media_component_rm->rs_bw) {
    if (cJSON_AddStringToObject(item, "rsBw", media_component_rm->rs_bw) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [rs_bw]");
        goto end;
    }
    }

    if (media_component_rm->is_sharing_key_dl) {
    if (cJSON_AddNumberToObject(item, "sharingKeyDl", media_component_rm->sharing_key_dl) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [sharing_key_dl]");
        goto end;
    }
    }

    if (media_component_rm->is_sharing_key_ul) {
    if (cJSON_AddNumberToObject(item, "sharingKeyUl", media_component_rm->sharing_key_ul) == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [sharing_key_ul]");
        goto end;
    }
    }

    if (media_component_rm->tsn_qos) {
    cJSON *tsn_qos_local_JSON = OpenAPI_tsn_qos_container_rm_convertToJSON(media_component_rm->tsn_qos);
    if (tsn_qos_local_JSON == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [tsn_qos]");
        goto end;
    }
    cJSON_AddItemToObject(item, "tsnQos", tsn_qos_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [tsn_qos]");
        goto end;
    }
    }

    if (media_component_rm->tscai_input_dl) {
    cJSON *tscai_input_dl_local_JSON = OpenAPI_tscai_input_container_convertToJSON(media_component_rm->tscai_input_dl);
    if (tscai_input_dl_local_JSON == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [tscai_input_dl]");
        goto end;
    }
    cJSON_AddItemToObject(item, "tscaiInputDl", tscai_input_dl_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [tscai_input_dl]");
        goto end;
    }
    }

    if (media_component_rm->tscai_input_ul) {
    cJSON *tscai_input_ul_local_JSON = OpenAPI_tscai_input_container_convertToJSON(media_component_rm->tscai_input_ul);
    if (tscai_input_ul_local_JSON == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [tscai_input_ul]");
        goto end;
    }
    cJSON_AddItemToObject(item, "tscaiInputUl", tscai_input_ul_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed [tscai_input_ul]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_media_component_rm_t *OpenAPI_media_component_rm_parseFromJSON(cJSON *media_component_rmJSON)
{
    OpenAPI_media_component_rm_t *media_component_rm_local_var = NULL;
    cJSON *af_app_id = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "afAppId");

    if (af_app_id) {
    if (!cJSON_IsString(af_app_id)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [af_app_id]");
        goto end;
    }
    }

    cJSON *af_rout_req = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "afRoutReq");

    OpenAPI_af_routing_requirement_rm_t *af_rout_req_local_nonprim = NULL;
    if (af_rout_req) {
    af_rout_req_local_nonprim = OpenAPI_af_routing_requirement_rm_parseFromJSON(af_rout_req);
    }

    cJSON *qos_reference = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "qosReference");

    if (qos_reference) {
    if (!cJSON_IsString(qos_reference)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [qos_reference]");
        goto end;
    }
    }

    cJSON *alt_ser_reqs = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "altSerReqs");

    OpenAPI_list_t *alt_ser_reqsList;
    if (alt_ser_reqs) {
    cJSON *alt_ser_reqs_local;
    if (!cJSON_IsArray(alt_ser_reqs)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [alt_ser_reqs]");
        goto end;
    }
    alt_ser_reqsList = OpenAPI_list_create();

    cJSON_ArrayForEach(alt_ser_reqs_local, alt_ser_reqs) {
    if (!cJSON_IsString(alt_ser_reqs_local)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [alt_ser_reqs]");
        goto end;
    }
    OpenAPI_list_add(alt_ser_reqsList, ogs_strdup(alt_ser_reqs_local->valuestring));
    }
    }

    cJSON *dis_ue_notif = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "disUeNotif");

    if (dis_ue_notif) {
    if (!cJSON_IsBool(dis_ue_notif)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [dis_ue_notif]");
        goto end;
    }
    }

    cJSON *cont_ver = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "contVer");

    if (cont_ver) {
    if (!cJSON_IsNumber(cont_ver)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [cont_ver]");
        goto end;
    }
    }

    cJSON *codecs = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "codecs");

    OpenAPI_list_t *codecsList;
    if (codecs) {
    cJSON *codecs_local;
    if (!cJSON_IsArray(codecs)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [codecs]");
        goto end;
    }
    codecsList = OpenAPI_list_create();

    cJSON_ArrayForEach(codecs_local, codecs) {
    if (!cJSON_IsString(codecs_local)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [codecs]");
        goto end;
    }
    OpenAPI_list_add(codecsList, ogs_strdup(codecs_local->valuestring));
    }
    }

    cJSON *des_max_latency = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "desMaxLatency");

    if (des_max_latency) {
    if (!cJSON_IsNumber(des_max_latency)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [des_max_latency]");
        goto end;
    }
    }

    cJSON *des_max_loss = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "desMaxLoss");

    if (des_max_loss) {
    if (!cJSON_IsNumber(des_max_loss)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [des_max_loss]");
        goto end;
    }
    }

    cJSON *flus_id = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "flusId");

    if (flus_id) {
    if (!cJSON_IsString(flus_id)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [flus_id]");
        goto end;
    }
    }

    cJSON *f_status = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "fStatus");

    OpenAPI_flow_status_e f_statusVariable;
    if (f_status) {
    if (!cJSON_IsString(f_status)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [f_status]");
        goto end;
    }
    f_statusVariable = OpenAPI_flow_status_FromString(f_status->valuestring);
    }

    cJSON *mar_bw_dl = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "marBwDl");

    if (mar_bw_dl) {
    if (!cJSON_IsString(mar_bw_dl)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [mar_bw_dl]");
        goto end;
    }
    }

    cJSON *mar_bw_ul = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "marBwUl");

    if (mar_bw_ul) {
    if (!cJSON_IsString(mar_bw_ul)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [mar_bw_ul]");
        goto end;
    }
    }

    cJSON *max_packet_loss_rate_dl = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "maxPacketLossRateDl");

    if (max_packet_loss_rate_dl) {
    if (!cJSON_IsNumber(max_packet_loss_rate_dl)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [max_packet_loss_rate_dl]");
        goto end;
    }
    }

    cJSON *max_packet_loss_rate_ul = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "maxPacketLossRateUl");

    if (max_packet_loss_rate_ul) {
    if (!cJSON_IsNumber(max_packet_loss_rate_ul)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [max_packet_loss_rate_ul]");
        goto end;
    }
    }

    cJSON *max_supp_bw_dl = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "maxSuppBwDl");

    if (max_supp_bw_dl) {
    if (!cJSON_IsString(max_supp_bw_dl)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [max_supp_bw_dl]");
        goto end;
    }
    }

    cJSON *max_supp_bw_ul = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "maxSuppBwUl");

    if (max_supp_bw_ul) {
    if (!cJSON_IsString(max_supp_bw_ul)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [max_supp_bw_ul]");
        goto end;
    }
    }

    cJSON *med_comp_n = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "medCompN");
    if (!med_comp_n) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [med_comp_n]");
        goto end;
    }

    if (!cJSON_IsNumber(med_comp_n)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [med_comp_n]");
        goto end;
    }

    cJSON *med_sub_comps = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "medSubComps");

    OpenAPI_list_t *med_sub_compsList;
    if (med_sub_comps) {
    cJSON *med_sub_comps_local_map;
    if (!cJSON_IsObject(med_sub_comps)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [med_sub_comps]");
        goto end;
    }
    med_sub_compsList = OpenAPI_list_create();
    OpenAPI_map_t *localMapKeyPair = NULL;
    cJSON_ArrayForEach(med_sub_comps_local_map, med_sub_comps) {
        cJSON *localMapObject = med_sub_comps_local_map;
        if (cJSON_IsObject(localMapObject)) {
            localMapKeyPair = OpenAPI_map_create(
                ogs_strdup(localMapObject->string), OpenAPI_media_sub_component_rm_parseFromJSON(localMapObject));
        } else if (cJSON_IsNull(localMapObject)) {
            localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
        } else {
            ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [inner]");
            goto end;
        }
        OpenAPI_list_add(med_sub_compsList, localMapKeyPair);
    }
    }

    cJSON *med_type = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "medType");

    OpenAPI_media_type_e med_typeVariable;
    if (med_type) {
    if (!cJSON_IsString(med_type)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [med_type]");
        goto end;
    }
    med_typeVariable = OpenAPI_media_type_FromString(med_type->valuestring);
    }

    cJSON *min_des_bw_dl = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "minDesBwDl");

    if (min_des_bw_dl) {
    if (!cJSON_IsString(min_des_bw_dl)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [min_des_bw_dl]");
        goto end;
    }
    }

    cJSON *min_des_bw_ul = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "minDesBwUl");

    if (min_des_bw_ul) {
    if (!cJSON_IsString(min_des_bw_ul)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [min_des_bw_ul]");
        goto end;
    }
    }

    cJSON *mir_bw_dl = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "mirBwDl");

    if (mir_bw_dl) {
    if (!cJSON_IsString(mir_bw_dl)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [mir_bw_dl]");
        goto end;
    }
    }

    cJSON *mir_bw_ul = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "mirBwUl");

    if (mir_bw_ul) {
    if (!cJSON_IsString(mir_bw_ul)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [mir_bw_ul]");
        goto end;
    }
    }

    cJSON *preempt_cap = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "preemptCap");

    OpenAPI_preemption_capability_rm_t *preempt_cap_local_nonprim = NULL;
    if (preempt_cap) {
    preempt_cap_local_nonprim = OpenAPI_preemption_capability_rm_parseFromJSON(preempt_cap);
    }

    cJSON *preempt_vuln = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "preemptVuln");

    OpenAPI_preemption_vulnerability_rm_t *preempt_vuln_local_nonprim = NULL;
    if (preempt_vuln) {
    preempt_vuln_local_nonprim = OpenAPI_preemption_vulnerability_rm_parseFromJSON(preempt_vuln);
    }

    cJSON *prio_sharing_ind = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "prioSharingInd");

    OpenAPI_priority_sharing_indicator_e prio_sharing_indVariable;
    if (prio_sharing_ind) {
    if (!cJSON_IsString(prio_sharing_ind)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [prio_sharing_ind]");
        goto end;
    }
    prio_sharing_indVariable = OpenAPI_priority_sharing_indicator_FromString(prio_sharing_ind->valuestring);
    }

    cJSON *res_prio = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "resPrio");

    OpenAPI_reserv_priority_e res_prioVariable;
    if (res_prio) {
    if (!cJSON_IsString(res_prio)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [res_prio]");
        goto end;
    }
    res_prioVariable = OpenAPI_reserv_priority_FromString(res_prio->valuestring);
    }

    cJSON *rr_bw = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "rrBw");

    if (rr_bw) {
    if (!cJSON_IsString(rr_bw)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [rr_bw]");
        goto end;
    }
    }

    cJSON *rs_bw = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "rsBw");

    if (rs_bw) {
    if (!cJSON_IsString(rs_bw)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [rs_bw]");
        goto end;
    }
    }

    cJSON *sharing_key_dl = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "sharingKeyDl");

    if (sharing_key_dl) {
    if (!cJSON_IsNumber(sharing_key_dl)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [sharing_key_dl]");
        goto end;
    }
    }

    cJSON *sharing_key_ul = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "sharingKeyUl");

    if (sharing_key_ul) {
    if (!cJSON_IsNumber(sharing_key_ul)) {
        ogs_error("OpenAPI_media_component_rm_parseFromJSON() failed [sharing_key_ul]");
        goto end;
    }
    }

    cJSON *tsn_qos = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "tsnQos");

    OpenAPI_tsn_qos_container_rm_t *tsn_qos_local_nonprim = NULL;
    if (tsn_qos) {
    tsn_qos_local_nonprim = OpenAPI_tsn_qos_container_rm_parseFromJSON(tsn_qos);
    }

    cJSON *tscai_input_dl = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "tscaiInputDl");

    OpenAPI_tscai_input_container_t *tscai_input_dl_local_nonprim = NULL;
    if (tscai_input_dl) {
    tscai_input_dl_local_nonprim = OpenAPI_tscai_input_container_parseFromJSON(tscai_input_dl);
    }

    cJSON *tscai_input_ul = cJSON_GetObjectItemCaseSensitive(media_component_rmJSON, "tscaiInputUl");

    OpenAPI_tscai_input_container_t *tscai_input_ul_local_nonprim = NULL;
    if (tscai_input_ul) {
    tscai_input_ul_local_nonprim = OpenAPI_tscai_input_container_parseFromJSON(tscai_input_ul);
    }

    media_component_rm_local_var = OpenAPI_media_component_rm_create (
        af_app_id ? ogs_strdup(af_app_id->valuestring) : NULL,
        af_rout_req ? af_rout_req_local_nonprim : NULL,
        qos_reference ? ogs_strdup(qos_reference->valuestring) : NULL,
        alt_ser_reqs ? alt_ser_reqsList : NULL,
        dis_ue_notif ? true : false,
        dis_ue_notif ? dis_ue_notif->valueint : 0,
        cont_ver ? true : false,
        cont_ver ? cont_ver->valuedouble : 0,
        codecs ? codecsList : NULL,
        des_max_latency ? true : false,
        des_max_latency ? des_max_latency->valuedouble : 0,
        des_max_loss ? true : false,
        des_max_loss ? des_max_loss->valuedouble : 0,
        flus_id ? ogs_strdup(flus_id->valuestring) : NULL,
        f_status ? f_statusVariable : 0,
        mar_bw_dl ? ogs_strdup(mar_bw_dl->valuestring) : NULL,
        mar_bw_ul ? ogs_strdup(mar_bw_ul->valuestring) : NULL,
        max_packet_loss_rate_dl ? true : false,
        max_packet_loss_rate_dl ? max_packet_loss_rate_dl->valuedouble : 0,
        max_packet_loss_rate_ul ? true : false,
        max_packet_loss_rate_ul ? max_packet_loss_rate_ul->valuedouble : 0,
        max_supp_bw_dl ? ogs_strdup(max_supp_bw_dl->valuestring) : NULL,
        max_supp_bw_ul ? ogs_strdup(max_supp_bw_ul->valuestring) : NULL,
        
        med_comp_n->valuedouble,
        med_sub_comps ? med_sub_compsList : NULL,
        med_type ? med_typeVariable : 0,
        min_des_bw_dl ? ogs_strdup(min_des_bw_dl->valuestring) : NULL,
        min_des_bw_ul ? ogs_strdup(min_des_bw_ul->valuestring) : NULL,
        mir_bw_dl ? ogs_strdup(mir_bw_dl->valuestring) : NULL,
        mir_bw_ul ? ogs_strdup(mir_bw_ul->valuestring) : NULL,
        preempt_cap ? preempt_cap_local_nonprim : NULL,
        preempt_vuln ? preempt_vuln_local_nonprim : NULL,
        prio_sharing_ind ? prio_sharing_indVariable : 0,
        res_prio ? res_prioVariable : 0,
        rr_bw ? ogs_strdup(rr_bw->valuestring) : NULL,
        rs_bw ? ogs_strdup(rs_bw->valuestring) : NULL,
        sharing_key_dl ? true : false,
        sharing_key_dl ? sharing_key_dl->valuedouble : 0,
        sharing_key_ul ? true : false,
        sharing_key_ul ? sharing_key_ul->valuedouble : 0,
        tsn_qos ? tsn_qos_local_nonprim : NULL,
        tscai_input_dl ? tscai_input_dl_local_nonprim : NULL,
        tscai_input_ul ? tscai_input_ul_local_nonprim : NULL
    );

    return media_component_rm_local_var;
end:
    return NULL;
}

OpenAPI_media_component_rm_t *OpenAPI_media_component_rm_copy(OpenAPI_media_component_rm_t *dst, OpenAPI_media_component_rm_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_media_component_rm_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_media_component_rm_convertToJSON() failed");
        return NULL;
    }

    content = cJSON_Print(item);
    cJSON_Delete(item);

    if (!content) {
        ogs_error("cJSON_Print() failed");
        return NULL;
    }

    item = cJSON_Parse(content);
    ogs_free(content);
    if (!item) {
        ogs_error("cJSON_Parse() failed");
        return NULL;
    }

    OpenAPI_media_component_rm_free(dst);
    dst = OpenAPI_media_component_rm_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

