
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nf_profile.h"

OpenAPI_nf_profile_t *OpenAPI_nf_profile_create(
    char *nf_instance_id,
    char *nf_instance_name,
    OpenAPI_nf_type_e nf_type,
    OpenAPI_nf_status_e nf_status,
    bool is_heart_beat_timer,
    int heart_beat_timer,
    OpenAPI_list_t *plmn_list,
    OpenAPI_list_t *snpn_list,
    OpenAPI_list_t *s_nssais,
    OpenAPI_list_t *per_plmn_snssai_list,
    OpenAPI_list_t *nsi_list,
    char *fqdn,
    char *inter_plmn_fqdn,
    OpenAPI_list_t *ipv4_addresses,
    OpenAPI_list_t *ipv6_addresses,
    OpenAPI_list_t *allowed_plmns,
    OpenAPI_list_t *allowed_snpns,
    OpenAPI_list_t *allowed_nf_types,
    OpenAPI_list_t *allowed_nf_domains,
    OpenAPI_list_t *allowed_nssais,
    bool is_priority,
    int priority,
    bool is_capacity,
    int capacity,
    bool is_load,
    int load,
    char *load_time_stamp,
    char *locality,
    OpenAPI_udr_info_t *udr_info,
    OpenAPI_list_t* udr_info_list,
    OpenAPI_udm_info_t *udm_info,
    OpenAPI_list_t* udm_info_list,
    OpenAPI_ausf_info_t *ausf_info,
    OpenAPI_list_t* ausf_info_list,
    OpenAPI_amf_info_t *amf_info,
    OpenAPI_list_t* amf_info_list,
    OpenAPI_smf_info_t *smf_info,
    OpenAPI_list_t* smf_info_list,
    OpenAPI_upf_info_t *upf_info,
    OpenAPI_list_t* upf_info_list,
    OpenAPI_pcf_info_t *pcf_info,
    OpenAPI_list_t* pcf_info_list,
    OpenAPI_bsf_info_t *bsf_info,
    OpenAPI_list_t* bsf_info_list,
    OpenAPI_chf_info_t *chf_info,
    OpenAPI_list_t* chf_info_list,
    OpenAPI_nef_info_t *nef_info,
    OpenAPI_nrf_info_t *nrf_info,
    OpenAPI_udsf_info_t *udsf_info,
    OpenAPI_list_t* udsf_info_list,
    OpenAPI_nwdaf_info_t *nwdaf_info,
    OpenAPI_list_t* pcscf_info_list,
    OpenAPI_list_t* hss_info_list,
    OpenAPI_object_t *custom_info,
    char *recovery_time,
    bool is_nf_service_persistence,
    int nf_service_persistence,
    OpenAPI_list_t *nf_services,
    OpenAPI_list_t* nf_service_list,
    bool is_nf_profile_changes_support_ind,
    int nf_profile_changes_support_ind,
    bool is_nf_profile_changes_ind,
    int nf_profile_changes_ind,
    OpenAPI_list_t *default_notification_subscriptions,
    OpenAPI_lmf_info_t *lmf_info,
    OpenAPI_gmlc_info_t *gmlc_info,
    OpenAPI_list_t *nf_set_id_list,
    OpenAPI_list_t *serving_scope,
    bool is_lc_h_support_ind,
    int lc_h_support_ind,
    bool is_olc_h_support_ind,
    int olc_h_support_ind,
    OpenAPI_list_t* nf_set_recovery_time_list,
    OpenAPI_list_t* service_set_recovery_time_list,
    OpenAPI_list_t *scp_domains,
    OpenAPI_scp_info_t *scp_info
)
{
    OpenAPI_nf_profile_t *nf_profile_local_var = ogs_malloc(sizeof(OpenAPI_nf_profile_t));
    ogs_assert(nf_profile_local_var);

    nf_profile_local_var->nf_instance_id = nf_instance_id;
    nf_profile_local_var->nf_instance_name = nf_instance_name;
    nf_profile_local_var->nf_type = nf_type;
    nf_profile_local_var->nf_status = nf_status;
    nf_profile_local_var->is_heart_beat_timer = is_heart_beat_timer;
    nf_profile_local_var->heart_beat_timer = heart_beat_timer;
    nf_profile_local_var->plmn_list = plmn_list;
    nf_profile_local_var->snpn_list = snpn_list;
    nf_profile_local_var->s_nssais = s_nssais;
    nf_profile_local_var->per_plmn_snssai_list = per_plmn_snssai_list;
    nf_profile_local_var->nsi_list = nsi_list;
    nf_profile_local_var->fqdn = fqdn;
    nf_profile_local_var->inter_plmn_fqdn = inter_plmn_fqdn;
    nf_profile_local_var->ipv4_addresses = ipv4_addresses;
    nf_profile_local_var->ipv6_addresses = ipv6_addresses;
    nf_profile_local_var->allowed_plmns = allowed_plmns;
    nf_profile_local_var->allowed_snpns = allowed_snpns;
    nf_profile_local_var->allowed_nf_types = allowed_nf_types;
    nf_profile_local_var->allowed_nf_domains = allowed_nf_domains;
    nf_profile_local_var->allowed_nssais = allowed_nssais;
    nf_profile_local_var->is_priority = is_priority;
    nf_profile_local_var->priority = priority;
    nf_profile_local_var->is_capacity = is_capacity;
    nf_profile_local_var->capacity = capacity;
    nf_profile_local_var->is_load = is_load;
    nf_profile_local_var->load = load;
    nf_profile_local_var->load_time_stamp = load_time_stamp;
    nf_profile_local_var->locality = locality;
    nf_profile_local_var->udr_info = udr_info;
    nf_profile_local_var->udr_info_list = udr_info_list;
    nf_profile_local_var->udm_info = udm_info;
    nf_profile_local_var->udm_info_list = udm_info_list;
    nf_profile_local_var->ausf_info = ausf_info;
    nf_profile_local_var->ausf_info_list = ausf_info_list;
    nf_profile_local_var->amf_info = amf_info;
    nf_profile_local_var->amf_info_list = amf_info_list;
    nf_profile_local_var->smf_info = smf_info;
    nf_profile_local_var->smf_info_list = smf_info_list;
    nf_profile_local_var->upf_info = upf_info;
    nf_profile_local_var->upf_info_list = upf_info_list;
    nf_profile_local_var->pcf_info = pcf_info;
    nf_profile_local_var->pcf_info_list = pcf_info_list;
    nf_profile_local_var->bsf_info = bsf_info;
    nf_profile_local_var->bsf_info_list = bsf_info_list;
    nf_profile_local_var->chf_info = chf_info;
    nf_profile_local_var->chf_info_list = chf_info_list;
    nf_profile_local_var->nef_info = nef_info;
    nf_profile_local_var->nrf_info = nrf_info;
    nf_profile_local_var->udsf_info = udsf_info;
    nf_profile_local_var->udsf_info_list = udsf_info_list;
    nf_profile_local_var->nwdaf_info = nwdaf_info;
    nf_profile_local_var->pcscf_info_list = pcscf_info_list;
    nf_profile_local_var->hss_info_list = hss_info_list;
    nf_profile_local_var->custom_info = custom_info;
    nf_profile_local_var->recovery_time = recovery_time;
    nf_profile_local_var->is_nf_service_persistence = is_nf_service_persistence;
    nf_profile_local_var->nf_service_persistence = nf_service_persistence;
    nf_profile_local_var->nf_services = nf_services;
    nf_profile_local_var->nf_service_list = nf_service_list;
    nf_profile_local_var->is_nf_profile_changes_support_ind = is_nf_profile_changes_support_ind;
    nf_profile_local_var->nf_profile_changes_support_ind = nf_profile_changes_support_ind;
    nf_profile_local_var->is_nf_profile_changes_ind = is_nf_profile_changes_ind;
    nf_profile_local_var->nf_profile_changes_ind = nf_profile_changes_ind;
    nf_profile_local_var->default_notification_subscriptions = default_notification_subscriptions;
    nf_profile_local_var->lmf_info = lmf_info;
    nf_profile_local_var->gmlc_info = gmlc_info;
    nf_profile_local_var->nf_set_id_list = nf_set_id_list;
    nf_profile_local_var->serving_scope = serving_scope;
    nf_profile_local_var->is_lc_h_support_ind = is_lc_h_support_ind;
    nf_profile_local_var->lc_h_support_ind = lc_h_support_ind;
    nf_profile_local_var->is_olc_h_support_ind = is_olc_h_support_ind;
    nf_profile_local_var->olc_h_support_ind = olc_h_support_ind;
    nf_profile_local_var->nf_set_recovery_time_list = nf_set_recovery_time_list;
    nf_profile_local_var->service_set_recovery_time_list = service_set_recovery_time_list;
    nf_profile_local_var->scp_domains = scp_domains;
    nf_profile_local_var->scp_info = scp_info;

    return nf_profile_local_var;
}

void OpenAPI_nf_profile_free(OpenAPI_nf_profile_t *nf_profile)
{
    if (NULL == nf_profile) {
        return;
    }
    OpenAPI_lnode_t *node;
    if (nf_profile->nf_instance_id) {
        ogs_free(nf_profile->nf_instance_id);
        nf_profile->nf_instance_id = NULL;
    }
    if (nf_profile->nf_instance_name) {
        ogs_free(nf_profile->nf_instance_name);
        nf_profile->nf_instance_name = NULL;
    }
    if (nf_profile->plmn_list) {
        OpenAPI_list_for_each(nf_profile->plmn_list, node) {
            OpenAPI_plmn_id_free(node->data);
        }
        OpenAPI_list_free(nf_profile->plmn_list);
        nf_profile->plmn_list = NULL;
    }
    if (nf_profile->snpn_list) {
        OpenAPI_list_for_each(nf_profile->snpn_list, node) {
            OpenAPI_plmn_id_nid_free(node->data);
        }
        OpenAPI_list_free(nf_profile->snpn_list);
        nf_profile->snpn_list = NULL;
    }
    if (nf_profile->s_nssais) {
        OpenAPI_list_for_each(nf_profile->s_nssais, node) {
            OpenAPI_ext_snssai_free(node->data);
        }
        OpenAPI_list_free(nf_profile->s_nssais);
        nf_profile->s_nssais = NULL;
    }
    if (nf_profile->per_plmn_snssai_list) {
        OpenAPI_list_for_each(nf_profile->per_plmn_snssai_list, node) {
            OpenAPI_plmn_snssai_free(node->data);
        }
        OpenAPI_list_free(nf_profile->per_plmn_snssai_list);
        nf_profile->per_plmn_snssai_list = NULL;
    }
    if (nf_profile->nsi_list) {
        OpenAPI_list_for_each(nf_profile->nsi_list, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(nf_profile->nsi_list);
        nf_profile->nsi_list = NULL;
    }
    if (nf_profile->fqdn) {
        ogs_free(nf_profile->fqdn);
        nf_profile->fqdn = NULL;
    }
    if (nf_profile->inter_plmn_fqdn) {
        ogs_free(nf_profile->inter_plmn_fqdn);
        nf_profile->inter_plmn_fqdn = NULL;
    }
    if (nf_profile->ipv4_addresses) {
        OpenAPI_list_for_each(nf_profile->ipv4_addresses, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(nf_profile->ipv4_addresses);
        nf_profile->ipv4_addresses = NULL;
    }
    if (nf_profile->ipv6_addresses) {
        OpenAPI_list_for_each(nf_profile->ipv6_addresses, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(nf_profile->ipv6_addresses);
        nf_profile->ipv6_addresses = NULL;
    }
    if (nf_profile->allowed_plmns) {
        OpenAPI_list_for_each(nf_profile->allowed_plmns, node) {
            OpenAPI_plmn_id_free(node->data);
        }
        OpenAPI_list_free(nf_profile->allowed_plmns);
        nf_profile->allowed_plmns = NULL;
    }
    if (nf_profile->allowed_snpns) {
        OpenAPI_list_for_each(nf_profile->allowed_snpns, node) {
            OpenAPI_plmn_id_nid_free(node->data);
        }
        OpenAPI_list_free(nf_profile->allowed_snpns);
        nf_profile->allowed_snpns = NULL;
    }
    if (nf_profile->allowed_nf_types) {
        OpenAPI_list_free(nf_profile->allowed_nf_types);
        nf_profile->allowed_nf_types = NULL;
    }
    if (nf_profile->allowed_nf_domains) {
        OpenAPI_list_for_each(nf_profile->allowed_nf_domains, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(nf_profile->allowed_nf_domains);
        nf_profile->allowed_nf_domains = NULL;
    }
    if (nf_profile->allowed_nssais) {
        OpenAPI_list_for_each(nf_profile->allowed_nssais, node) {
            OpenAPI_ext_snssai_free(node->data);
        }
        OpenAPI_list_free(nf_profile->allowed_nssais);
        nf_profile->allowed_nssais = NULL;
    }
    if (nf_profile->load_time_stamp) {
        ogs_free(nf_profile->load_time_stamp);
        nf_profile->load_time_stamp = NULL;
    }
    if (nf_profile->locality) {
        ogs_free(nf_profile->locality);
        nf_profile->locality = NULL;
    }
    if (nf_profile->udr_info) {
        OpenAPI_udr_info_free(nf_profile->udr_info);
        nf_profile->udr_info = NULL;
    }
    if (nf_profile->udr_info_list) {
        OpenAPI_list_for_each(nf_profile->udr_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_udr_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->udr_info_list);
        nf_profile->udr_info_list = NULL;
    }
    if (nf_profile->udm_info) {
        OpenAPI_udm_info_free(nf_profile->udm_info);
        nf_profile->udm_info = NULL;
    }
    if (nf_profile->udm_info_list) {
        OpenAPI_list_for_each(nf_profile->udm_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_udm_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->udm_info_list);
        nf_profile->udm_info_list = NULL;
    }
    if (nf_profile->ausf_info) {
        OpenAPI_ausf_info_free(nf_profile->ausf_info);
        nf_profile->ausf_info = NULL;
    }
    if (nf_profile->ausf_info_list) {
        OpenAPI_list_for_each(nf_profile->ausf_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_ausf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->ausf_info_list);
        nf_profile->ausf_info_list = NULL;
    }
    if (nf_profile->amf_info) {
        OpenAPI_amf_info_free(nf_profile->amf_info);
        nf_profile->amf_info = NULL;
    }
    if (nf_profile->amf_info_list) {
        OpenAPI_list_for_each(nf_profile->amf_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_amf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->amf_info_list);
        nf_profile->amf_info_list = NULL;
    }
    if (nf_profile->smf_info) {
        OpenAPI_smf_info_free(nf_profile->smf_info);
        nf_profile->smf_info = NULL;
    }
    if (nf_profile->smf_info_list) {
        OpenAPI_list_for_each(nf_profile->smf_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_smf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->smf_info_list);
        nf_profile->smf_info_list = NULL;
    }
    if (nf_profile->upf_info) {
        OpenAPI_upf_info_free(nf_profile->upf_info);
        nf_profile->upf_info = NULL;
    }
    if (nf_profile->upf_info_list) {
        OpenAPI_list_for_each(nf_profile->upf_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_upf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->upf_info_list);
        nf_profile->upf_info_list = NULL;
    }
    if (nf_profile->pcf_info) {
        OpenAPI_pcf_info_free(nf_profile->pcf_info);
        nf_profile->pcf_info = NULL;
    }
    if (nf_profile->pcf_info_list) {
        OpenAPI_list_for_each(nf_profile->pcf_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_pcf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->pcf_info_list);
        nf_profile->pcf_info_list = NULL;
    }
    if (nf_profile->bsf_info) {
        OpenAPI_bsf_info_free(nf_profile->bsf_info);
        nf_profile->bsf_info = NULL;
    }
    if (nf_profile->bsf_info_list) {
        OpenAPI_list_for_each(nf_profile->bsf_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_bsf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->bsf_info_list);
        nf_profile->bsf_info_list = NULL;
    }
    if (nf_profile->chf_info) {
        OpenAPI_chf_info_free(nf_profile->chf_info);
        nf_profile->chf_info = NULL;
    }
    if (nf_profile->chf_info_list) {
        OpenAPI_list_for_each(nf_profile->chf_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_chf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->chf_info_list);
        nf_profile->chf_info_list = NULL;
    }
    if (nf_profile->nef_info) {
        OpenAPI_nef_info_free(nf_profile->nef_info);
        nf_profile->nef_info = NULL;
    }
    if (nf_profile->nrf_info) {
        OpenAPI_nrf_info_free(nf_profile->nrf_info);
        nf_profile->nrf_info = NULL;
    }
    if (nf_profile->udsf_info) {
        OpenAPI_udsf_info_free(nf_profile->udsf_info);
        nf_profile->udsf_info = NULL;
    }
    if (nf_profile->udsf_info_list) {
        OpenAPI_list_for_each(nf_profile->udsf_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_udsf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->udsf_info_list);
        nf_profile->udsf_info_list = NULL;
    }
    if (nf_profile->nwdaf_info) {
        OpenAPI_nwdaf_info_free(nf_profile->nwdaf_info);
        nf_profile->nwdaf_info = NULL;
    }
    if (nf_profile->pcscf_info_list) {
        OpenAPI_list_for_each(nf_profile->pcscf_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_pcscf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->pcscf_info_list);
        nf_profile->pcscf_info_list = NULL;
    }
    if (nf_profile->hss_info_list) {
        OpenAPI_list_for_each(nf_profile->hss_info_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_hss_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->hss_info_list);
        nf_profile->hss_info_list = NULL;
    }
    if (nf_profile->custom_info) {
        OpenAPI_object_free(nf_profile->custom_info);
        nf_profile->custom_info = NULL;
    }
    if (nf_profile->recovery_time) {
        ogs_free(nf_profile->recovery_time);
        nf_profile->recovery_time = NULL;
    }
    if (nf_profile->nf_services) {
        OpenAPI_list_for_each(nf_profile->nf_services, node) {
            OpenAPI_nf_service_free(node->data);
        }
        OpenAPI_list_free(nf_profile->nf_services);
        nf_profile->nf_services = NULL;
    }
    if (nf_profile->nf_service_list) {
        OpenAPI_list_for_each(nf_profile->nf_service_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_nf_service_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->nf_service_list);
        nf_profile->nf_service_list = NULL;
    }
    if (nf_profile->default_notification_subscriptions) {
        OpenAPI_list_for_each(nf_profile->default_notification_subscriptions, node) {
            OpenAPI_default_notification_subscription_free(node->data);
        }
        OpenAPI_list_free(nf_profile->default_notification_subscriptions);
        nf_profile->default_notification_subscriptions = NULL;
    }
    if (nf_profile->lmf_info) {
        OpenAPI_lmf_info_free(nf_profile->lmf_info);
        nf_profile->lmf_info = NULL;
    }
    if (nf_profile->gmlc_info) {
        OpenAPI_gmlc_info_free(nf_profile->gmlc_info);
        nf_profile->gmlc_info = NULL;
    }
    if (nf_profile->nf_set_id_list) {
        OpenAPI_list_for_each(nf_profile->nf_set_id_list, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(nf_profile->nf_set_id_list);
        nf_profile->nf_set_id_list = NULL;
    }
    if (nf_profile->serving_scope) {
        OpenAPI_list_for_each(nf_profile->serving_scope, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(nf_profile->serving_scope);
        nf_profile->serving_scope = NULL;
    }
    if (nf_profile->nf_set_recovery_time_list) {
        OpenAPI_list_for_each(nf_profile->nf_set_recovery_time_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            ogs_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->nf_set_recovery_time_list);
        nf_profile->nf_set_recovery_time_list = NULL;
    }
    if (nf_profile->service_set_recovery_time_list) {
        OpenAPI_list_for_each(nf_profile->service_set_recovery_time_list, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            ogs_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_profile->service_set_recovery_time_list);
        nf_profile->service_set_recovery_time_list = NULL;
    }
    if (nf_profile->scp_domains) {
        OpenAPI_list_for_each(nf_profile->scp_domains, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(nf_profile->scp_domains);
        nf_profile->scp_domains = NULL;
    }
    if (nf_profile->scp_info) {
        OpenAPI_scp_info_free(nf_profile->scp_info);
        nf_profile->scp_info = NULL;
    }
    ogs_free(nf_profile);
}

cJSON *OpenAPI_nf_profile_convertToJSON(OpenAPI_nf_profile_t *nf_profile)
{
    cJSON *item = NULL;

    if (nf_profile == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [NFProfile]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (!nf_profile->nf_instance_id) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_instance_id]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "nfInstanceId", nf_profile->nf_instance_id) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_instance_id]");
        goto end;
    }

    if (nf_profile->nf_instance_name) {
    if (cJSON_AddStringToObject(item, "nfInstanceName", nf_profile->nf_instance_name) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_instance_name]");
        goto end;
    }
    }

    if (nf_profile->nf_type == OpenAPI_nf_type_NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_type]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "nfType", OpenAPI_nf_type_ToString(nf_profile->nf_type)) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_type]");
        goto end;
    }

    if (nf_profile->nf_status == OpenAPI_nf_status_NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_status]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "nfStatus", OpenAPI_nf_status_ToString(nf_profile->nf_status)) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_status]");
        goto end;
    }

    if (nf_profile->is_heart_beat_timer) {
    if (cJSON_AddNumberToObject(item, "heartBeatTimer", nf_profile->heart_beat_timer) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [heart_beat_timer]");
        goto end;
    }
    }

    if (nf_profile->plmn_list) {
    cJSON *plmn_listList = cJSON_AddArrayToObject(item, "plmnList");
    if (plmn_listList == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [plmn_list]");
        goto end;
    }

    OpenAPI_lnode_t *plmn_list_node;
    if (nf_profile->plmn_list) {
        OpenAPI_list_for_each(nf_profile->plmn_list, plmn_list_node) {
            cJSON *itemLocal = OpenAPI_plmn_id_convertToJSON(plmn_list_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_nf_profile_convertToJSON() failed [plmn_list]");
                goto end;
            }
            cJSON_AddItemToArray(plmn_listList, itemLocal);
        }
    }
    }

    if (nf_profile->snpn_list) {
    cJSON *snpn_listList = cJSON_AddArrayToObject(item, "snpnList");
    if (snpn_listList == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [snpn_list]");
        goto end;
    }

    OpenAPI_lnode_t *snpn_list_node;
    if (nf_profile->snpn_list) {
        OpenAPI_list_for_each(nf_profile->snpn_list, snpn_list_node) {
            cJSON *itemLocal = OpenAPI_plmn_id_nid_convertToJSON(snpn_list_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_nf_profile_convertToJSON() failed [snpn_list]");
                goto end;
            }
            cJSON_AddItemToArray(snpn_listList, itemLocal);
        }
    }
    }

    if (nf_profile->s_nssais) {
    cJSON *s_nssaisList = cJSON_AddArrayToObject(item, "sNssais");
    if (s_nssaisList == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [s_nssais]");
        goto end;
    }

    OpenAPI_lnode_t *s_nssais_node;
    if (nf_profile->s_nssais) {
        OpenAPI_list_for_each(nf_profile->s_nssais, s_nssais_node) {
            cJSON *itemLocal = OpenAPI_ext_snssai_convertToJSON(s_nssais_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_nf_profile_convertToJSON() failed [s_nssais]");
                goto end;
            }
            cJSON_AddItemToArray(s_nssaisList, itemLocal);
        }
    }
    }

    if (nf_profile->per_plmn_snssai_list) {
    cJSON *per_plmn_snssai_listList = cJSON_AddArrayToObject(item, "perPlmnSnssaiList");
    if (per_plmn_snssai_listList == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [per_plmn_snssai_list]");
        goto end;
    }

    OpenAPI_lnode_t *per_plmn_snssai_list_node;
    if (nf_profile->per_plmn_snssai_list) {
        OpenAPI_list_for_each(nf_profile->per_plmn_snssai_list, per_plmn_snssai_list_node) {
            cJSON *itemLocal = OpenAPI_plmn_snssai_convertToJSON(per_plmn_snssai_list_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_nf_profile_convertToJSON() failed [per_plmn_snssai_list]");
                goto end;
            }
            cJSON_AddItemToArray(per_plmn_snssai_listList, itemLocal);
        }
    }
    }

    if (nf_profile->nsi_list) {
    cJSON *nsi_list = cJSON_AddArrayToObject(item, "nsiList");
    if (nsi_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nsi_list]");
        goto end;
    }

    OpenAPI_lnode_t *nsi_list_node;
    OpenAPI_list_for_each(nf_profile->nsi_list, nsi_list_node)  {
    if (cJSON_AddStringToObject(nsi_list, "", (char*)nsi_list_node->data) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nsi_list]");
        goto end;
    }
                    }
    }

    if (nf_profile->fqdn) {
    if (cJSON_AddStringToObject(item, "fqdn", nf_profile->fqdn) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [fqdn]");
        goto end;
    }
    }

    if (nf_profile->inter_plmn_fqdn) {
    if (cJSON_AddStringToObject(item, "interPlmnFqdn", nf_profile->inter_plmn_fqdn) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inter_plmn_fqdn]");
        goto end;
    }
    }

    if (nf_profile->ipv4_addresses) {
    cJSON *ipv4_addresses = cJSON_AddArrayToObject(item, "ipv4Addresses");
    if (ipv4_addresses == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [ipv4_addresses]");
        goto end;
    }

    OpenAPI_lnode_t *ipv4_addresses_node;
    OpenAPI_list_for_each(nf_profile->ipv4_addresses, ipv4_addresses_node)  {
    if (cJSON_AddStringToObject(ipv4_addresses, "", (char*)ipv4_addresses_node->data) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [ipv4_addresses]");
        goto end;
    }
                    }
    }

    if (nf_profile->ipv6_addresses) {
    cJSON *ipv6_addresses = cJSON_AddArrayToObject(item, "ipv6Addresses");
    if (ipv6_addresses == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [ipv6_addresses]");
        goto end;
    }

    OpenAPI_lnode_t *ipv6_addresses_node;
    OpenAPI_list_for_each(nf_profile->ipv6_addresses, ipv6_addresses_node)  {
    if (cJSON_AddStringToObject(ipv6_addresses, "", (char*)ipv6_addresses_node->data) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [ipv6_addresses]");
        goto end;
    }
                    }
    }

    if (nf_profile->allowed_plmns) {
    cJSON *allowed_plmnsList = cJSON_AddArrayToObject(item, "allowedPlmns");
    if (allowed_plmnsList == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_plmns]");
        goto end;
    }

    OpenAPI_lnode_t *allowed_plmns_node;
    if (nf_profile->allowed_plmns) {
        OpenAPI_list_for_each(nf_profile->allowed_plmns, allowed_plmns_node) {
            cJSON *itemLocal = OpenAPI_plmn_id_convertToJSON(allowed_plmns_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_plmns]");
                goto end;
            }
            cJSON_AddItemToArray(allowed_plmnsList, itemLocal);
        }
    }
    }

    if (nf_profile->allowed_snpns) {
    cJSON *allowed_snpnsList = cJSON_AddArrayToObject(item, "allowedSnpns");
    if (allowed_snpnsList == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_snpns]");
        goto end;
    }

    OpenAPI_lnode_t *allowed_snpns_node;
    if (nf_profile->allowed_snpns) {
        OpenAPI_list_for_each(nf_profile->allowed_snpns, allowed_snpns_node) {
            cJSON *itemLocal = OpenAPI_plmn_id_nid_convertToJSON(allowed_snpns_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_snpns]");
                goto end;
            }
            cJSON_AddItemToArray(allowed_snpnsList, itemLocal);
        }
    }
    }

    if (nf_profile->allowed_nf_types != OpenAPI_nf_type_NULL) {
    cJSON *allowed_nf_types = cJSON_AddArrayToObject(item, "allowedNfTypes");
    if (allowed_nf_types == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_nf_types]");
        goto end;
    }
    OpenAPI_lnode_t *allowed_nf_types_node;
    OpenAPI_list_for_each(nf_profile->allowed_nf_types, allowed_nf_types_node) {
        if (cJSON_AddStringToObject(allowed_nf_types, "", OpenAPI_nf_type_ToString((intptr_t)allowed_nf_types_node->data)) == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_nf_types]");
            goto end;
        }
    }
    }

    if (nf_profile->allowed_nf_domains) {
    cJSON *allowed_nf_domains = cJSON_AddArrayToObject(item, "allowedNfDomains");
    if (allowed_nf_domains == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_nf_domains]");
        goto end;
    }

    OpenAPI_lnode_t *allowed_nf_domains_node;
    OpenAPI_list_for_each(nf_profile->allowed_nf_domains, allowed_nf_domains_node)  {
    if (cJSON_AddStringToObject(allowed_nf_domains, "", (char*)allowed_nf_domains_node->data) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_nf_domains]");
        goto end;
    }
                    }
    }

    if (nf_profile->allowed_nssais) {
    cJSON *allowed_nssaisList = cJSON_AddArrayToObject(item, "allowedNssais");
    if (allowed_nssaisList == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_nssais]");
        goto end;
    }

    OpenAPI_lnode_t *allowed_nssais_node;
    if (nf_profile->allowed_nssais) {
        OpenAPI_list_for_each(nf_profile->allowed_nssais, allowed_nssais_node) {
            cJSON *itemLocal = OpenAPI_ext_snssai_convertToJSON(allowed_nssais_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_nf_profile_convertToJSON() failed [allowed_nssais]");
                goto end;
            }
            cJSON_AddItemToArray(allowed_nssaisList, itemLocal);
        }
    }
    }

    if (nf_profile->is_priority) {
    if (cJSON_AddNumberToObject(item, "priority", nf_profile->priority) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [priority]");
        goto end;
    }
    }

    if (nf_profile->is_capacity) {
    if (cJSON_AddNumberToObject(item, "capacity", nf_profile->capacity) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [capacity]");
        goto end;
    }
    }

    if (nf_profile->is_load) {
    if (cJSON_AddNumberToObject(item, "load", nf_profile->load) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [load]");
        goto end;
    }
    }

    if (nf_profile->load_time_stamp) {
    if (cJSON_AddStringToObject(item, "loadTimeStamp", nf_profile->load_time_stamp) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [load_time_stamp]");
        goto end;
    }
    }

    if (nf_profile->locality) {
    if (cJSON_AddStringToObject(item, "locality", nf_profile->locality) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [locality]");
        goto end;
    }
    }

    if (nf_profile->udr_info) {
    cJSON *udr_info_local_JSON = OpenAPI_udr_info_convertToJSON(nf_profile->udr_info);
    if (udr_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [udr_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "udrInfo", udr_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [udr_info]");
        goto end;
    }
    }

    if (nf_profile->udr_info_list) {
    cJSON *udr_info_list = cJSON_AddObjectToObject(item, "udrInfoList");
    if (udr_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [udr_info_list]");
        goto end;
    }
    cJSON *localMapObject = udr_info_list;
    OpenAPI_lnode_t *udr_info_list_node;
    if (nf_profile->udr_info_list) {
        OpenAPI_list_for_each(nf_profile->udr_info_list, udr_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)udr_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_udr_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->udm_info) {
    cJSON *udm_info_local_JSON = OpenAPI_udm_info_convertToJSON(nf_profile->udm_info);
    if (udm_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [udm_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "udmInfo", udm_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [udm_info]");
        goto end;
    }
    }

    if (nf_profile->udm_info_list) {
    cJSON *udm_info_list = cJSON_AddObjectToObject(item, "udmInfoList");
    if (udm_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [udm_info_list]");
        goto end;
    }
    cJSON *localMapObject = udm_info_list;
    OpenAPI_lnode_t *udm_info_list_node;
    if (nf_profile->udm_info_list) {
        OpenAPI_list_for_each(nf_profile->udm_info_list, udm_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)udm_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_udm_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->ausf_info) {
    cJSON *ausf_info_local_JSON = OpenAPI_ausf_info_convertToJSON(nf_profile->ausf_info);
    if (ausf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [ausf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "ausfInfo", ausf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [ausf_info]");
        goto end;
    }
    }

    if (nf_profile->ausf_info_list) {
    cJSON *ausf_info_list = cJSON_AddObjectToObject(item, "ausfInfoList");
    if (ausf_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [ausf_info_list]");
        goto end;
    }
    cJSON *localMapObject = ausf_info_list;
    OpenAPI_lnode_t *ausf_info_list_node;
    if (nf_profile->ausf_info_list) {
        OpenAPI_list_for_each(nf_profile->ausf_info_list, ausf_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)ausf_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_ausf_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->amf_info) {
    cJSON *amf_info_local_JSON = OpenAPI_amf_info_convertToJSON(nf_profile->amf_info);
    if (amf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [amf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "amfInfo", amf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [amf_info]");
        goto end;
    }
    }

    if (nf_profile->amf_info_list) {
    cJSON *amf_info_list = cJSON_AddObjectToObject(item, "amfInfoList");
    if (amf_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [amf_info_list]");
        goto end;
    }
    cJSON *localMapObject = amf_info_list;
    OpenAPI_lnode_t *amf_info_list_node;
    if (nf_profile->amf_info_list) {
        OpenAPI_list_for_each(nf_profile->amf_info_list, amf_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)amf_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_amf_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->smf_info) {
    cJSON *smf_info_local_JSON = OpenAPI_smf_info_convertToJSON(nf_profile->smf_info);
    if (smf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [smf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "smfInfo", smf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [smf_info]");
        goto end;
    }
    }

    if (nf_profile->smf_info_list) {
    cJSON *smf_info_list = cJSON_AddObjectToObject(item, "smfInfoList");
    if (smf_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [smf_info_list]");
        goto end;
    }
    cJSON *localMapObject = smf_info_list;
    OpenAPI_lnode_t *smf_info_list_node;
    if (nf_profile->smf_info_list) {
        OpenAPI_list_for_each(nf_profile->smf_info_list, smf_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)smf_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_smf_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->upf_info) {
    cJSON *upf_info_local_JSON = OpenAPI_upf_info_convertToJSON(nf_profile->upf_info);
    if (upf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [upf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "upfInfo", upf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [upf_info]");
        goto end;
    }
    }

    if (nf_profile->upf_info_list) {
    cJSON *upf_info_list = cJSON_AddObjectToObject(item, "upfInfoList");
    if (upf_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [upf_info_list]");
        goto end;
    }
    cJSON *localMapObject = upf_info_list;
    OpenAPI_lnode_t *upf_info_list_node;
    if (nf_profile->upf_info_list) {
        OpenAPI_list_for_each(nf_profile->upf_info_list, upf_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)upf_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_upf_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->pcf_info) {
    cJSON *pcf_info_local_JSON = OpenAPI_pcf_info_convertToJSON(nf_profile->pcf_info);
    if (pcf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [pcf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "pcfInfo", pcf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [pcf_info]");
        goto end;
    }
    }

    if (nf_profile->pcf_info_list) {
    cJSON *pcf_info_list = cJSON_AddObjectToObject(item, "pcfInfoList");
    if (pcf_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [pcf_info_list]");
        goto end;
    }
    cJSON *localMapObject = pcf_info_list;
    OpenAPI_lnode_t *pcf_info_list_node;
    if (nf_profile->pcf_info_list) {
        OpenAPI_list_for_each(nf_profile->pcf_info_list, pcf_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)pcf_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_pcf_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->bsf_info) {
    cJSON *bsf_info_local_JSON = OpenAPI_bsf_info_convertToJSON(nf_profile->bsf_info);
    if (bsf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [bsf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "bsfInfo", bsf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [bsf_info]");
        goto end;
    }
    }

    if (nf_profile->bsf_info_list) {
    cJSON *bsf_info_list = cJSON_AddObjectToObject(item, "bsfInfoList");
    if (bsf_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [bsf_info_list]");
        goto end;
    }
    cJSON *localMapObject = bsf_info_list;
    OpenAPI_lnode_t *bsf_info_list_node;
    if (nf_profile->bsf_info_list) {
        OpenAPI_list_for_each(nf_profile->bsf_info_list, bsf_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)bsf_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_bsf_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->chf_info) {
    cJSON *chf_info_local_JSON = OpenAPI_chf_info_convertToJSON(nf_profile->chf_info);
    if (chf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [chf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "chfInfo", chf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [chf_info]");
        goto end;
    }
    }

    if (nf_profile->chf_info_list) {
    cJSON *chf_info_list = cJSON_AddObjectToObject(item, "chfInfoList");
    if (chf_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [chf_info_list]");
        goto end;
    }
    cJSON *localMapObject = chf_info_list;
    OpenAPI_lnode_t *chf_info_list_node;
    if (nf_profile->chf_info_list) {
        OpenAPI_list_for_each(nf_profile->chf_info_list, chf_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)chf_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_chf_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->nef_info) {
    cJSON *nef_info_local_JSON = OpenAPI_nef_info_convertToJSON(nf_profile->nef_info);
    if (nef_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nef_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "nefInfo", nef_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nef_info]");
        goto end;
    }
    }

    if (nf_profile->nrf_info) {
    cJSON *nrf_info_local_JSON = OpenAPI_nrf_info_convertToJSON(nf_profile->nrf_info);
    if (nrf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nrf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "nrfInfo", nrf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nrf_info]");
        goto end;
    }
    }

    if (nf_profile->udsf_info) {
    cJSON *udsf_info_local_JSON = OpenAPI_udsf_info_convertToJSON(nf_profile->udsf_info);
    if (udsf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [udsf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "udsfInfo", udsf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [udsf_info]");
        goto end;
    }
    }

    if (nf_profile->udsf_info_list) {
    cJSON *udsf_info_list = cJSON_AddObjectToObject(item, "udsfInfoList");
    if (udsf_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [udsf_info_list]");
        goto end;
    }
    cJSON *localMapObject = udsf_info_list;
    OpenAPI_lnode_t *udsf_info_list_node;
    if (nf_profile->udsf_info_list) {
        OpenAPI_list_for_each(nf_profile->udsf_info_list, udsf_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)udsf_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_udsf_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->nwdaf_info) {
    cJSON *nwdaf_info_local_JSON = OpenAPI_nwdaf_info_convertToJSON(nf_profile->nwdaf_info);
    if (nwdaf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nwdaf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "nwdafInfo", nwdaf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nwdaf_info]");
        goto end;
    }
    }

    if (nf_profile->pcscf_info_list) {
    cJSON *pcscf_info_list = cJSON_AddObjectToObject(item, "pcscfInfoList");
    if (pcscf_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [pcscf_info_list]");
        goto end;
    }
    cJSON *localMapObject = pcscf_info_list;
    OpenAPI_lnode_t *pcscf_info_list_node;
    if (nf_profile->pcscf_info_list) {
        OpenAPI_list_for_each(nf_profile->pcscf_info_list, pcscf_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)pcscf_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_pcscf_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->hss_info_list) {
    cJSON *hss_info_list = cJSON_AddObjectToObject(item, "hssInfoList");
    if (hss_info_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [hss_info_list]");
        goto end;
    }
    cJSON *localMapObject = hss_info_list;
    OpenAPI_lnode_t *hss_info_list_node;
    if (nf_profile->hss_info_list) {
        OpenAPI_list_for_each(nf_profile->hss_info_list, hss_info_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)hss_info_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_hss_info_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->custom_info) {
    cJSON *custom_info_object = OpenAPI_object_convertToJSON(nf_profile->custom_info);
    if (custom_info_object == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [custom_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "customInfo", custom_info_object);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [custom_info]");
        goto end;
    }
    }

    if (nf_profile->recovery_time) {
    if (cJSON_AddStringToObject(item, "recoveryTime", nf_profile->recovery_time) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [recovery_time]");
        goto end;
    }
    }

    if (nf_profile->is_nf_service_persistence) {
    if (cJSON_AddBoolToObject(item, "nfServicePersistence", nf_profile->nf_service_persistence) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_service_persistence]");
        goto end;
    }
    }

    if (nf_profile->nf_services) {
    cJSON *nf_servicesList = cJSON_AddArrayToObject(item, "nfServices");
    if (nf_servicesList == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_services]");
        goto end;
    }

    OpenAPI_lnode_t *nf_services_node;
    if (nf_profile->nf_services) {
        OpenAPI_list_for_each(nf_profile->nf_services, nf_services_node) {
            cJSON *itemLocal = OpenAPI_nf_service_convertToJSON(nf_services_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_services]");
                goto end;
            }
            cJSON_AddItemToArray(nf_servicesList, itemLocal);
        }
    }
    }

    if (nf_profile->nf_service_list) {
    cJSON *nf_service_list = cJSON_AddObjectToObject(item, "nfServiceList");
    if (nf_service_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_service_list]");
        goto end;
    }
    cJSON *localMapObject = nf_service_list;
    OpenAPI_lnode_t *nf_service_list_node;
    if (nf_profile->nf_service_list) {
        OpenAPI_list_for_each(nf_profile->nf_service_list, nf_service_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)nf_service_list_node->data;
        cJSON *itemLocal = localKeyValue->value ?
            OpenAPI_nf_service_convertToJSON(localKeyValue->value) :
            cJSON_CreateNull();
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nf_profile_convertToJSON() failed [inner]");
            goto end;
        }
        cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
            }
        }
    }

    if (nf_profile->is_nf_profile_changes_support_ind) {
    if (cJSON_AddBoolToObject(item, "nfProfileChangesSupportInd", nf_profile->nf_profile_changes_support_ind) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_profile_changes_support_ind]");
        goto end;
    }
    }

    if (nf_profile->is_nf_profile_changes_ind) {
    if (cJSON_AddBoolToObject(item, "nfProfileChangesInd", nf_profile->nf_profile_changes_ind) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_profile_changes_ind]");
        goto end;
    }
    }

    if (nf_profile->default_notification_subscriptions) {
    cJSON *default_notification_subscriptionsList = cJSON_AddArrayToObject(item, "defaultNotificationSubscriptions");
    if (default_notification_subscriptionsList == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [default_notification_subscriptions]");
        goto end;
    }

    OpenAPI_lnode_t *default_notification_subscriptions_node;
    if (nf_profile->default_notification_subscriptions) {
        OpenAPI_list_for_each(nf_profile->default_notification_subscriptions, default_notification_subscriptions_node) {
            cJSON *itemLocal = OpenAPI_default_notification_subscription_convertToJSON(default_notification_subscriptions_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_nf_profile_convertToJSON() failed [default_notification_subscriptions]");
                goto end;
            }
            cJSON_AddItemToArray(default_notification_subscriptionsList, itemLocal);
        }
    }
    }

    if (nf_profile->lmf_info) {
    cJSON *lmf_info_local_JSON = OpenAPI_lmf_info_convertToJSON(nf_profile->lmf_info);
    if (lmf_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [lmf_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "lmfInfo", lmf_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [lmf_info]");
        goto end;
    }
    }

    if (nf_profile->gmlc_info) {
    cJSON *gmlc_info_local_JSON = OpenAPI_gmlc_info_convertToJSON(nf_profile->gmlc_info);
    if (gmlc_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [gmlc_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "gmlcInfo", gmlc_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [gmlc_info]");
        goto end;
    }
    }

    if (nf_profile->nf_set_id_list) {
    cJSON *nf_set_id_list = cJSON_AddArrayToObject(item, "nfSetIdList");
    if (nf_set_id_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_set_id_list]");
        goto end;
    }

    OpenAPI_lnode_t *nf_set_id_list_node;
    OpenAPI_list_for_each(nf_profile->nf_set_id_list, nf_set_id_list_node)  {
    if (cJSON_AddStringToObject(nf_set_id_list, "", (char*)nf_set_id_list_node->data) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_set_id_list]");
        goto end;
    }
                    }
    }

    if (nf_profile->serving_scope) {
    cJSON *serving_scope = cJSON_AddArrayToObject(item, "servingScope");
    if (serving_scope == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [serving_scope]");
        goto end;
    }

    OpenAPI_lnode_t *serving_scope_node;
    OpenAPI_list_for_each(nf_profile->serving_scope, serving_scope_node)  {
    if (cJSON_AddStringToObject(serving_scope, "", (char*)serving_scope_node->data) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [serving_scope]");
        goto end;
    }
                    }
    }

    if (nf_profile->is_lc_h_support_ind) {
    if (cJSON_AddBoolToObject(item, "lcHSupportInd", nf_profile->lc_h_support_ind) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [lc_h_support_ind]");
        goto end;
    }
    }

    if (nf_profile->is_olc_h_support_ind) {
    if (cJSON_AddBoolToObject(item, "olcHSupportInd", nf_profile->olc_h_support_ind) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [olc_h_support_ind]");
        goto end;
    }
    }

    if (nf_profile->nf_set_recovery_time_list) {
    cJSON *nf_set_recovery_time_list = cJSON_AddObjectToObject(item, "nfSetRecoveryTimeList");
    if (nf_set_recovery_time_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [nf_set_recovery_time_list]");
        goto end;
    }
    cJSON *localMapObject = nf_set_recovery_time_list;
    OpenAPI_lnode_t *nf_set_recovery_time_list_node;
    if (nf_profile->nf_set_recovery_time_list) {
        OpenAPI_list_for_each(nf_profile->nf_set_recovery_time_list, nf_set_recovery_time_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)nf_set_recovery_time_list_node->data;
            }
        }
    }

    if (nf_profile->service_set_recovery_time_list) {
    cJSON *service_set_recovery_time_list = cJSON_AddObjectToObject(item, "serviceSetRecoveryTimeList");
    if (service_set_recovery_time_list == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [service_set_recovery_time_list]");
        goto end;
    }
    cJSON *localMapObject = service_set_recovery_time_list;
    OpenAPI_lnode_t *service_set_recovery_time_list_node;
    if (nf_profile->service_set_recovery_time_list) {
        OpenAPI_list_for_each(nf_profile->service_set_recovery_time_list, service_set_recovery_time_list_node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)service_set_recovery_time_list_node->data;
            }
        }
    }

    if (nf_profile->scp_domains) {
    cJSON *scp_domains = cJSON_AddArrayToObject(item, "scpDomains");
    if (scp_domains == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [scp_domains]");
        goto end;
    }

    OpenAPI_lnode_t *scp_domains_node;
    OpenAPI_list_for_each(nf_profile->scp_domains, scp_domains_node)  {
    if (cJSON_AddStringToObject(scp_domains, "", (char*)scp_domains_node->data) == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [scp_domains]");
        goto end;
    }
                    }
    }

    if (nf_profile->scp_info) {
    cJSON *scp_info_local_JSON = OpenAPI_scp_info_convertToJSON(nf_profile->scp_info);
    if (scp_info_local_JSON == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [scp_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "scpInfo", scp_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed [scp_info]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_nf_profile_t *OpenAPI_nf_profile_parseFromJSON(cJSON *nf_profileJSON)
{
    OpenAPI_nf_profile_t *nf_profile_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *nf_instance_id = NULL;
    cJSON *nf_instance_name = NULL;
    cJSON *nf_type = NULL;
    OpenAPI_nf_type_e nf_typeVariable = 0;
    cJSON *nf_status = NULL;
    OpenAPI_nf_status_e nf_statusVariable = 0;
    cJSON *heart_beat_timer = NULL;
    cJSON *plmn_list = NULL;
    OpenAPI_list_t *plmn_listList = NULL;
    cJSON *snpn_list = NULL;
    OpenAPI_list_t *snpn_listList = NULL;
    cJSON *s_nssais = NULL;
    OpenAPI_list_t *s_nssaisList = NULL;
    cJSON *per_plmn_snssai_list = NULL;
    OpenAPI_list_t *per_plmn_snssai_listList = NULL;
    cJSON *nsi_list = NULL;
    OpenAPI_list_t *nsi_listList = NULL;
    cJSON *fqdn = NULL;
    cJSON *inter_plmn_fqdn = NULL;
    cJSON *ipv4_addresses = NULL;
    OpenAPI_list_t *ipv4_addressesList = NULL;
    cJSON *ipv6_addresses = NULL;
    OpenAPI_list_t *ipv6_addressesList = NULL;
    cJSON *allowed_plmns = NULL;
    OpenAPI_list_t *allowed_plmnsList = NULL;
    cJSON *allowed_snpns = NULL;
    OpenAPI_list_t *allowed_snpnsList = NULL;
    cJSON *allowed_nf_types = NULL;
    OpenAPI_list_t *allowed_nf_typesList = NULL;
    cJSON *allowed_nf_domains = NULL;
    OpenAPI_list_t *allowed_nf_domainsList = NULL;
    cJSON *allowed_nssais = NULL;
    OpenAPI_list_t *allowed_nssaisList = NULL;
    cJSON *priority = NULL;
    cJSON *capacity = NULL;
    cJSON *load = NULL;
    cJSON *load_time_stamp = NULL;
    cJSON *locality = NULL;
    cJSON *udr_info = NULL;
    OpenAPI_udr_info_t *udr_info_local_nonprim = NULL;
    cJSON *udr_info_list = NULL;
    OpenAPI_list_t *udr_info_listList = NULL;
    cJSON *udm_info = NULL;
    OpenAPI_udm_info_t *udm_info_local_nonprim = NULL;
    cJSON *udm_info_list = NULL;
    OpenAPI_list_t *udm_info_listList = NULL;
    cJSON *ausf_info = NULL;
    OpenAPI_ausf_info_t *ausf_info_local_nonprim = NULL;
    cJSON *ausf_info_list = NULL;
    OpenAPI_list_t *ausf_info_listList = NULL;
    cJSON *amf_info = NULL;
    OpenAPI_amf_info_t *amf_info_local_nonprim = NULL;
    cJSON *amf_info_list = NULL;
    OpenAPI_list_t *amf_info_listList = NULL;
    cJSON *smf_info = NULL;
    OpenAPI_smf_info_t *smf_info_local_nonprim = NULL;
    cJSON *smf_info_list = NULL;
    OpenAPI_list_t *smf_info_listList = NULL;
    cJSON *upf_info = NULL;
    OpenAPI_upf_info_t *upf_info_local_nonprim = NULL;
    cJSON *upf_info_list = NULL;
    OpenAPI_list_t *upf_info_listList = NULL;
    cJSON *pcf_info = NULL;
    OpenAPI_pcf_info_t *pcf_info_local_nonprim = NULL;
    cJSON *pcf_info_list = NULL;
    OpenAPI_list_t *pcf_info_listList = NULL;
    cJSON *bsf_info = NULL;
    OpenAPI_bsf_info_t *bsf_info_local_nonprim = NULL;
    cJSON *bsf_info_list = NULL;
    OpenAPI_list_t *bsf_info_listList = NULL;
    cJSON *chf_info = NULL;
    OpenAPI_chf_info_t *chf_info_local_nonprim = NULL;
    cJSON *chf_info_list = NULL;
    OpenAPI_list_t *chf_info_listList = NULL;
    cJSON *nef_info = NULL;
    OpenAPI_nef_info_t *nef_info_local_nonprim = NULL;
    cJSON *nrf_info = NULL;
    OpenAPI_nrf_info_t *nrf_info_local_nonprim = NULL;
    cJSON *udsf_info = NULL;
    OpenAPI_udsf_info_t *udsf_info_local_nonprim = NULL;
    cJSON *udsf_info_list = NULL;
    OpenAPI_list_t *udsf_info_listList = NULL;
    cJSON *nwdaf_info = NULL;
    OpenAPI_nwdaf_info_t *nwdaf_info_local_nonprim = NULL;
    cJSON *pcscf_info_list = NULL;
    OpenAPI_list_t *pcscf_info_listList = NULL;
    cJSON *hss_info_list = NULL;
    OpenAPI_list_t *hss_info_listList = NULL;
    cJSON *custom_info = NULL;
    OpenAPI_object_t *custom_info_local_object = NULL;
    cJSON *recovery_time = NULL;
    cJSON *nf_service_persistence = NULL;
    cJSON *nf_services = NULL;
    OpenAPI_list_t *nf_servicesList = NULL;
    cJSON *nf_service_list = NULL;
    OpenAPI_list_t *nf_service_listList = NULL;
    cJSON *nf_profile_changes_support_ind = NULL;
    cJSON *nf_profile_changes_ind = NULL;
    cJSON *default_notification_subscriptions = NULL;
    OpenAPI_list_t *default_notification_subscriptionsList = NULL;
    cJSON *lmf_info = NULL;
    OpenAPI_lmf_info_t *lmf_info_local_nonprim = NULL;
    cJSON *gmlc_info = NULL;
    OpenAPI_gmlc_info_t *gmlc_info_local_nonprim = NULL;
    cJSON *nf_set_id_list = NULL;
    OpenAPI_list_t *nf_set_id_listList = NULL;
    cJSON *serving_scope = NULL;
    OpenAPI_list_t *serving_scopeList = NULL;
    cJSON *lc_h_support_ind = NULL;
    cJSON *olc_h_support_ind = NULL;
    cJSON *nf_set_recovery_time_list = NULL;
    OpenAPI_list_t *nf_set_recovery_time_listList = NULL;
    cJSON *service_set_recovery_time_list = NULL;
    OpenAPI_list_t *service_set_recovery_time_listList = NULL;
    cJSON *scp_domains = NULL;
    OpenAPI_list_t *scp_domainsList = NULL;
    cJSON *scp_info = NULL;
    OpenAPI_scp_info_t *scp_info_local_nonprim = NULL;
    nf_instance_id = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfInstanceId");
    if (!nf_instance_id) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_instance_id]");
        goto end;
    }
    if (!cJSON_IsString(nf_instance_id)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_instance_id]");
        goto end;
    }

    nf_instance_name = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfInstanceName");
    if (nf_instance_name) {
    if (!cJSON_IsString(nf_instance_name) && !cJSON_IsNull(nf_instance_name)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_instance_name]");
        goto end;
    }
    }

    nf_type = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfType");
    if (!nf_type) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_type]");
        goto end;
    }
    if (!cJSON_IsString(nf_type)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_type]");
        goto end;
    }
    nf_typeVariable = OpenAPI_nf_type_FromString(nf_type->valuestring);

    nf_status = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfStatus");
    if (!nf_status) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_status]");
        goto end;
    }
    if (!cJSON_IsString(nf_status)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_status]");
        goto end;
    }
    nf_statusVariable = OpenAPI_nf_status_FromString(nf_status->valuestring);

    heart_beat_timer = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "heartBeatTimer");
    if (heart_beat_timer) {
    if (!cJSON_IsNumber(heart_beat_timer)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [heart_beat_timer]");
        goto end;
    }
    }

    plmn_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "plmnList");
    if (plmn_list) {
        cJSON *plmn_list_local_nonprimitive;
        if (!cJSON_IsArray(plmn_list)){
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [plmn_list]");
            goto end;
        }

        plmn_listList = OpenAPI_list_create();

        cJSON_ArrayForEach(plmn_list_local_nonprimitive, plmn_list ) {
            if (!cJSON_IsObject(plmn_list_local_nonprimitive)) {
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [plmn_list]");
                goto end;
            }
            OpenAPI_plmn_id_t *plmn_listItem = OpenAPI_plmn_id_parseFromJSON(plmn_list_local_nonprimitive);

            if (!plmn_listItem) {
                ogs_error("No plmn_listItem");
                OpenAPI_list_free(plmn_listList);
                goto end;
            }

            OpenAPI_list_add(plmn_listList, plmn_listItem);
        }
    }

    snpn_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "snpnList");
    if (snpn_list) {
        cJSON *snpn_list_local_nonprimitive;
        if (!cJSON_IsArray(snpn_list)){
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [snpn_list]");
            goto end;
        }

        snpn_listList = OpenAPI_list_create();

        cJSON_ArrayForEach(snpn_list_local_nonprimitive, snpn_list ) {
            if (!cJSON_IsObject(snpn_list_local_nonprimitive)) {
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [snpn_list]");
                goto end;
            }
            OpenAPI_plmn_id_nid_t *snpn_listItem = OpenAPI_plmn_id_nid_parseFromJSON(snpn_list_local_nonprimitive);

            if (!snpn_listItem) {
                ogs_error("No snpn_listItem");
                OpenAPI_list_free(snpn_listList);
                goto end;
            }

            OpenAPI_list_add(snpn_listList, snpn_listItem);
        }
    }

    s_nssais = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "sNssais");
    if (s_nssais) {
        cJSON *s_nssais_local_nonprimitive;
        if (!cJSON_IsArray(s_nssais)){
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [s_nssais]");
            goto end;
        }

        s_nssaisList = OpenAPI_list_create();

        cJSON_ArrayForEach(s_nssais_local_nonprimitive, s_nssais ) {
            if (!cJSON_IsObject(s_nssais_local_nonprimitive)) {
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [s_nssais]");
                goto end;
            }
            OpenAPI_ext_snssai_t *s_nssaisItem = OpenAPI_ext_snssai_parseFromJSON(s_nssais_local_nonprimitive);

            if (!s_nssaisItem) {
                ogs_error("No s_nssaisItem");
                OpenAPI_list_free(s_nssaisList);
                goto end;
            }

            OpenAPI_list_add(s_nssaisList, s_nssaisItem);
        }
    }

    per_plmn_snssai_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "perPlmnSnssaiList");
    if (per_plmn_snssai_list) {
        cJSON *per_plmn_snssai_list_local_nonprimitive;
        if (!cJSON_IsArray(per_plmn_snssai_list)){
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [per_plmn_snssai_list]");
            goto end;
        }

        per_plmn_snssai_listList = OpenAPI_list_create();

        cJSON_ArrayForEach(per_plmn_snssai_list_local_nonprimitive, per_plmn_snssai_list ) {
            if (!cJSON_IsObject(per_plmn_snssai_list_local_nonprimitive)) {
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [per_plmn_snssai_list]");
                goto end;
            }
            OpenAPI_plmn_snssai_t *per_plmn_snssai_listItem = OpenAPI_plmn_snssai_parseFromJSON(per_plmn_snssai_list_local_nonprimitive);

            if (!per_plmn_snssai_listItem) {
                ogs_error("No per_plmn_snssai_listItem");
                OpenAPI_list_free(per_plmn_snssai_listList);
                goto end;
            }

            OpenAPI_list_add(per_plmn_snssai_listList, per_plmn_snssai_listItem);
        }
    }

    nsi_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nsiList");
    if (nsi_list) {
        cJSON *nsi_list_local;
        if (!cJSON_IsArray(nsi_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nsi_list]");
            goto end;
        }
        nsi_listList = OpenAPI_list_create();

        cJSON_ArrayForEach(nsi_list_local, nsi_list) {
        if (!cJSON_IsString(nsi_list_local)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nsi_list]");
            goto end;
        }
        OpenAPI_list_add(nsi_listList, ogs_strdup(nsi_list_local->valuestring));
        }
    }

    fqdn = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "fqdn");
    if (fqdn) {
    if (!cJSON_IsString(fqdn) && !cJSON_IsNull(fqdn)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [fqdn]");
        goto end;
    }
    }

    inter_plmn_fqdn = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "interPlmnFqdn");
    if (inter_plmn_fqdn) {
    if (!cJSON_IsString(inter_plmn_fqdn) && !cJSON_IsNull(inter_plmn_fqdn)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inter_plmn_fqdn]");
        goto end;
    }
    }

    ipv4_addresses = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "ipv4Addresses");
    if (ipv4_addresses) {
        cJSON *ipv4_addresses_local;
        if (!cJSON_IsArray(ipv4_addresses)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [ipv4_addresses]");
            goto end;
        }
        ipv4_addressesList = OpenAPI_list_create();

        cJSON_ArrayForEach(ipv4_addresses_local, ipv4_addresses) {
        if (!cJSON_IsString(ipv4_addresses_local)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [ipv4_addresses]");
            goto end;
        }
        OpenAPI_list_add(ipv4_addressesList, ogs_strdup(ipv4_addresses_local->valuestring));
        }
    }

    ipv6_addresses = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "ipv6Addresses");
    if (ipv6_addresses) {
        cJSON *ipv6_addresses_local;
        if (!cJSON_IsArray(ipv6_addresses)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [ipv6_addresses]");
            goto end;
        }
        ipv6_addressesList = OpenAPI_list_create();

        cJSON_ArrayForEach(ipv6_addresses_local, ipv6_addresses) {
        if (!cJSON_IsString(ipv6_addresses_local)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [ipv6_addresses]");
            goto end;
        }
        OpenAPI_list_add(ipv6_addressesList, ogs_strdup(ipv6_addresses_local->valuestring));
        }
    }

    allowed_plmns = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "allowedPlmns");
    if (allowed_plmns) {
        cJSON *allowed_plmns_local_nonprimitive;
        if (!cJSON_IsArray(allowed_plmns)){
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_plmns]");
            goto end;
        }

        allowed_plmnsList = OpenAPI_list_create();

        cJSON_ArrayForEach(allowed_plmns_local_nonprimitive, allowed_plmns ) {
            if (!cJSON_IsObject(allowed_plmns_local_nonprimitive)) {
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_plmns]");
                goto end;
            }
            OpenAPI_plmn_id_t *allowed_plmnsItem = OpenAPI_plmn_id_parseFromJSON(allowed_plmns_local_nonprimitive);

            if (!allowed_plmnsItem) {
                ogs_error("No allowed_plmnsItem");
                OpenAPI_list_free(allowed_plmnsList);
                goto end;
            }

            OpenAPI_list_add(allowed_plmnsList, allowed_plmnsItem);
        }
    }

    allowed_snpns = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "allowedSnpns");
    if (allowed_snpns) {
        cJSON *allowed_snpns_local_nonprimitive;
        if (!cJSON_IsArray(allowed_snpns)){
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_snpns]");
            goto end;
        }

        allowed_snpnsList = OpenAPI_list_create();

        cJSON_ArrayForEach(allowed_snpns_local_nonprimitive, allowed_snpns ) {
            if (!cJSON_IsObject(allowed_snpns_local_nonprimitive)) {
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_snpns]");
                goto end;
            }
            OpenAPI_plmn_id_nid_t *allowed_snpnsItem = OpenAPI_plmn_id_nid_parseFromJSON(allowed_snpns_local_nonprimitive);

            if (!allowed_snpnsItem) {
                ogs_error("No allowed_snpnsItem");
                OpenAPI_list_free(allowed_snpnsList);
                goto end;
            }

            OpenAPI_list_add(allowed_snpnsList, allowed_snpnsItem);
        }
    }

    allowed_nf_types = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "allowedNfTypes");
    if (allowed_nf_types) {
        cJSON *allowed_nf_types_local_nonprimitive = NULL;
        if (!cJSON_IsArray(allowed_nf_types)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_nf_types]");
            goto end;
        }

        allowed_nf_typesList = OpenAPI_list_create();

        cJSON_ArrayForEach(allowed_nf_types_local_nonprimitive, allowed_nf_types ) {
            if (!cJSON_IsString(allowed_nf_types_local_nonprimitive)){
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_nf_types]");
                goto end;
            }

            OpenAPI_list_add(allowed_nf_typesList, (void *)OpenAPI_nf_type_FromString(allowed_nf_types_local_nonprimitive->valuestring));
        }
    }

    allowed_nf_domains = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "allowedNfDomains");
    if (allowed_nf_domains) {
        cJSON *allowed_nf_domains_local;
        if (!cJSON_IsArray(allowed_nf_domains)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_nf_domains]");
            goto end;
        }
        allowed_nf_domainsList = OpenAPI_list_create();

        cJSON_ArrayForEach(allowed_nf_domains_local, allowed_nf_domains) {
        if (!cJSON_IsString(allowed_nf_domains_local)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_nf_domains]");
            goto end;
        }
        OpenAPI_list_add(allowed_nf_domainsList, ogs_strdup(allowed_nf_domains_local->valuestring));
        }
    }

    allowed_nssais = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "allowedNssais");
    if (allowed_nssais) {
        cJSON *allowed_nssais_local_nonprimitive;
        if (!cJSON_IsArray(allowed_nssais)){
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_nssais]");
            goto end;
        }

        allowed_nssaisList = OpenAPI_list_create();

        cJSON_ArrayForEach(allowed_nssais_local_nonprimitive, allowed_nssais ) {
            if (!cJSON_IsObject(allowed_nssais_local_nonprimitive)) {
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [allowed_nssais]");
                goto end;
            }
            OpenAPI_ext_snssai_t *allowed_nssaisItem = OpenAPI_ext_snssai_parseFromJSON(allowed_nssais_local_nonprimitive);

            if (!allowed_nssaisItem) {
                ogs_error("No allowed_nssaisItem");
                OpenAPI_list_free(allowed_nssaisList);
                goto end;
            }

            OpenAPI_list_add(allowed_nssaisList, allowed_nssaisItem);
        }
    }

    priority = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "priority");
    if (priority) {
    if (!cJSON_IsNumber(priority)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [priority]");
        goto end;
    }
    }

    capacity = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "capacity");
    if (capacity) {
    if (!cJSON_IsNumber(capacity)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [capacity]");
        goto end;
    }
    }

    load = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "load");
    if (load) {
    if (!cJSON_IsNumber(load)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [load]");
        goto end;
    }
    }

    load_time_stamp = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "loadTimeStamp");
    if (load_time_stamp) {
    if (!cJSON_IsString(load_time_stamp) && !cJSON_IsNull(load_time_stamp)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [load_time_stamp]");
        goto end;
    }
    }

    locality = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "locality");
    if (locality) {
    if (!cJSON_IsString(locality) && !cJSON_IsNull(locality)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [locality]");
        goto end;
    }
    }

    udr_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "udrInfo");
    if (udr_info) {
    udr_info_local_nonprim = OpenAPI_udr_info_parseFromJSON(udr_info);
    }

    udr_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "udrInfoList");
    if (udr_info_list) {
        cJSON *udr_info_list_local_map = NULL;
        if (!cJSON_IsObject(udr_info_list) && !cJSON_IsNull(udr_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [udr_info_list]");
            goto end;
        }
        if (cJSON_IsObject(udr_info_list)) {
            udr_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(udr_info_list_local_map, udr_info_list) {
                cJSON *localMapObject = udr_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_udr_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(udr_info_listList, localMapKeyPair);
            }
        }
    }

    udm_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "udmInfo");
    if (udm_info) {
    udm_info_local_nonprim = OpenAPI_udm_info_parseFromJSON(udm_info);
    }

    udm_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "udmInfoList");
    if (udm_info_list) {
        cJSON *udm_info_list_local_map = NULL;
        if (!cJSON_IsObject(udm_info_list) && !cJSON_IsNull(udm_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [udm_info_list]");
            goto end;
        }
        if (cJSON_IsObject(udm_info_list)) {
            udm_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(udm_info_list_local_map, udm_info_list) {
                cJSON *localMapObject = udm_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_udm_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(udm_info_listList, localMapKeyPair);
            }
        }
    }

    ausf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "ausfInfo");
    if (ausf_info) {
    ausf_info_local_nonprim = OpenAPI_ausf_info_parseFromJSON(ausf_info);
    }

    ausf_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "ausfInfoList");
    if (ausf_info_list) {
        cJSON *ausf_info_list_local_map = NULL;
        if (!cJSON_IsObject(ausf_info_list) && !cJSON_IsNull(ausf_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [ausf_info_list]");
            goto end;
        }
        if (cJSON_IsObject(ausf_info_list)) {
            ausf_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(ausf_info_list_local_map, ausf_info_list) {
                cJSON *localMapObject = ausf_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_ausf_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(ausf_info_listList, localMapKeyPair);
            }
        }
    }

    amf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "amfInfo");
    if (amf_info) {
    amf_info_local_nonprim = OpenAPI_amf_info_parseFromJSON(amf_info);
    }

    amf_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "amfInfoList");
    if (amf_info_list) {
        cJSON *amf_info_list_local_map = NULL;
        if (!cJSON_IsObject(amf_info_list) && !cJSON_IsNull(amf_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [amf_info_list]");
            goto end;
        }
        if (cJSON_IsObject(amf_info_list)) {
            amf_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(amf_info_list_local_map, amf_info_list) {
                cJSON *localMapObject = amf_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_amf_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(amf_info_listList, localMapKeyPair);
            }
        }
    }

    smf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "smfInfo");
    if (smf_info) {
    smf_info_local_nonprim = OpenAPI_smf_info_parseFromJSON(smf_info);
    }

    smf_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "smfInfoList");
    if (smf_info_list) {
        cJSON *smf_info_list_local_map = NULL;
        if (!cJSON_IsObject(smf_info_list) && !cJSON_IsNull(smf_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [smf_info_list]");
            goto end;
        }
        if (cJSON_IsObject(smf_info_list)) {
            smf_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(smf_info_list_local_map, smf_info_list) {
                cJSON *localMapObject = smf_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_smf_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(smf_info_listList, localMapKeyPair);
            }
        }
    }

    upf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "upfInfo");
    if (upf_info) {
    upf_info_local_nonprim = OpenAPI_upf_info_parseFromJSON(upf_info);
    }

    upf_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "upfInfoList");
    if (upf_info_list) {
        cJSON *upf_info_list_local_map = NULL;
        if (!cJSON_IsObject(upf_info_list) && !cJSON_IsNull(upf_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [upf_info_list]");
            goto end;
        }
        if (cJSON_IsObject(upf_info_list)) {
            upf_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(upf_info_list_local_map, upf_info_list) {
                cJSON *localMapObject = upf_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_upf_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(upf_info_listList, localMapKeyPair);
            }
        }
    }

    pcf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "pcfInfo");
    if (pcf_info) {
    pcf_info_local_nonprim = OpenAPI_pcf_info_parseFromJSON(pcf_info);
    }

    pcf_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "pcfInfoList");
    if (pcf_info_list) {
        cJSON *pcf_info_list_local_map = NULL;
        if (!cJSON_IsObject(pcf_info_list) && !cJSON_IsNull(pcf_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [pcf_info_list]");
            goto end;
        }
        if (cJSON_IsObject(pcf_info_list)) {
            pcf_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(pcf_info_list_local_map, pcf_info_list) {
                cJSON *localMapObject = pcf_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_pcf_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(pcf_info_listList, localMapKeyPair);
            }
        }
    }

    bsf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "bsfInfo");
    if (bsf_info) {
    bsf_info_local_nonprim = OpenAPI_bsf_info_parseFromJSON(bsf_info);
    }

    bsf_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "bsfInfoList");
    if (bsf_info_list) {
        cJSON *bsf_info_list_local_map = NULL;
        if (!cJSON_IsObject(bsf_info_list) && !cJSON_IsNull(bsf_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [bsf_info_list]");
            goto end;
        }
        if (cJSON_IsObject(bsf_info_list)) {
            bsf_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(bsf_info_list_local_map, bsf_info_list) {
                cJSON *localMapObject = bsf_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_bsf_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(bsf_info_listList, localMapKeyPair);
            }
        }
    }

    chf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "chfInfo");
    if (chf_info) {
    chf_info_local_nonprim = OpenAPI_chf_info_parseFromJSON(chf_info);
    }

    chf_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "chfInfoList");
    if (chf_info_list) {
        cJSON *chf_info_list_local_map = NULL;
        if (!cJSON_IsObject(chf_info_list) && !cJSON_IsNull(chf_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [chf_info_list]");
            goto end;
        }
        if (cJSON_IsObject(chf_info_list)) {
            chf_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(chf_info_list_local_map, chf_info_list) {
                cJSON *localMapObject = chf_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_chf_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(chf_info_listList, localMapKeyPair);
            }
        }
    }

    nef_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nefInfo");
    if (nef_info) {
    nef_info_local_nonprim = OpenAPI_nef_info_parseFromJSON(nef_info);
    }

    nrf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nrfInfo");
    if (nrf_info) {
    nrf_info_local_nonprim = OpenAPI_nrf_info_parseFromJSON(nrf_info);
    }

    udsf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "udsfInfo");
    if (udsf_info) {
    udsf_info_local_nonprim = OpenAPI_udsf_info_parseFromJSON(udsf_info);
    }

    udsf_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "udsfInfoList");
    if (udsf_info_list) {
        cJSON *udsf_info_list_local_map = NULL;
        if (!cJSON_IsObject(udsf_info_list) && !cJSON_IsNull(udsf_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [udsf_info_list]");
            goto end;
        }
        if (cJSON_IsObject(udsf_info_list)) {
            udsf_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(udsf_info_list_local_map, udsf_info_list) {
                cJSON *localMapObject = udsf_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_udsf_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(udsf_info_listList, localMapKeyPair);
            }
        }
    }

    nwdaf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nwdafInfo");
    if (nwdaf_info) {
    nwdaf_info_local_nonprim = OpenAPI_nwdaf_info_parseFromJSON(nwdaf_info);
    }

    pcscf_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "pcscfInfoList");
    if (pcscf_info_list) {
        cJSON *pcscf_info_list_local_map = NULL;
        if (!cJSON_IsObject(pcscf_info_list) && !cJSON_IsNull(pcscf_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [pcscf_info_list]");
            goto end;
        }
        if (cJSON_IsObject(pcscf_info_list)) {
            pcscf_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(pcscf_info_list_local_map, pcscf_info_list) {
                cJSON *localMapObject = pcscf_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_pcscf_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(pcscf_info_listList, localMapKeyPair);
            }
        }
    }

    hss_info_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "hssInfoList");
    if (hss_info_list) {
        cJSON *hss_info_list_local_map = NULL;
        if (!cJSON_IsObject(hss_info_list) && !cJSON_IsNull(hss_info_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [hss_info_list]");
            goto end;
        }
        if (cJSON_IsObject(hss_info_list)) {
            hss_info_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(hss_info_list_local_map, hss_info_list) {
                cJSON *localMapObject = hss_info_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_hss_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(hss_info_listList, localMapKeyPair);
            }
        }
    }

    custom_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "customInfo");
    if (custom_info) {
    if (!cJSON_IsObject(custom_info)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [custom_info]");
        goto end;
    }
    custom_info_local_object = OpenAPI_object_parseFromJSON(custom_info);
    }

    recovery_time = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "recoveryTime");
    if (recovery_time) {
    if (!cJSON_IsString(recovery_time) && !cJSON_IsNull(recovery_time)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [recovery_time]");
        goto end;
    }
    }

    nf_service_persistence = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfServicePersistence");
    if (nf_service_persistence) {
    if (!cJSON_IsBool(nf_service_persistence)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_service_persistence]");
        goto end;
    }
    }

    nf_services = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfServices");
    if (nf_services) {
        cJSON *nf_services_local_nonprimitive;
        if (!cJSON_IsArray(nf_services)){
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_services]");
            goto end;
        }

        nf_servicesList = OpenAPI_list_create();

        cJSON_ArrayForEach(nf_services_local_nonprimitive, nf_services ) {
            if (!cJSON_IsObject(nf_services_local_nonprimitive)) {
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_services]");
                goto end;
            }
            OpenAPI_nf_service_t *nf_servicesItem = OpenAPI_nf_service_parseFromJSON(nf_services_local_nonprimitive);

            if (!nf_servicesItem) {
                ogs_error("No nf_servicesItem");
                OpenAPI_list_free(nf_servicesList);
                goto end;
            }

            OpenAPI_list_add(nf_servicesList, nf_servicesItem);
        }
    }

    nf_service_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfServiceList");
    if (nf_service_list) {
        cJSON *nf_service_list_local_map = NULL;
        if (!cJSON_IsObject(nf_service_list) && !cJSON_IsNull(nf_service_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_service_list]");
            goto end;
        }
        if (cJSON_IsObject(nf_service_list)) {
            nf_service_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(nf_service_list_local_map, nf_service_list) {
                cJSON *localMapObject = nf_service_list_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_nf_service_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(nf_service_listList, localMapKeyPair);
            }
        }
    }

    nf_profile_changes_support_ind = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfProfileChangesSupportInd");
    if (nf_profile_changes_support_ind) {
    if (!cJSON_IsBool(nf_profile_changes_support_ind)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_profile_changes_support_ind]");
        goto end;
    }
    }

    nf_profile_changes_ind = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfProfileChangesInd");
    if (nf_profile_changes_ind) {
    if (!cJSON_IsBool(nf_profile_changes_ind)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_profile_changes_ind]");
        goto end;
    }
    }

    default_notification_subscriptions = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "defaultNotificationSubscriptions");
    if (default_notification_subscriptions) {
        cJSON *default_notification_subscriptions_local_nonprimitive;
        if (!cJSON_IsArray(default_notification_subscriptions)){
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [default_notification_subscriptions]");
            goto end;
        }

        default_notification_subscriptionsList = OpenAPI_list_create();

        cJSON_ArrayForEach(default_notification_subscriptions_local_nonprimitive, default_notification_subscriptions ) {
            if (!cJSON_IsObject(default_notification_subscriptions_local_nonprimitive)) {
                ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [default_notification_subscriptions]");
                goto end;
            }
            OpenAPI_default_notification_subscription_t *default_notification_subscriptionsItem = OpenAPI_default_notification_subscription_parseFromJSON(default_notification_subscriptions_local_nonprimitive);

            if (!default_notification_subscriptionsItem) {
                ogs_error("No default_notification_subscriptionsItem");
                OpenAPI_list_free(default_notification_subscriptionsList);
                goto end;
            }

            OpenAPI_list_add(default_notification_subscriptionsList, default_notification_subscriptionsItem);
        }
    }

    lmf_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "lmfInfo");
    if (lmf_info) {
    lmf_info_local_nonprim = OpenAPI_lmf_info_parseFromJSON(lmf_info);
    }

    gmlc_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "gmlcInfo");
    if (gmlc_info) {
    gmlc_info_local_nonprim = OpenAPI_gmlc_info_parseFromJSON(gmlc_info);
    }

    nf_set_id_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfSetIdList");
    if (nf_set_id_list) {
        cJSON *nf_set_id_list_local;
        if (!cJSON_IsArray(nf_set_id_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_set_id_list]");
            goto end;
        }
        nf_set_id_listList = OpenAPI_list_create();

        cJSON_ArrayForEach(nf_set_id_list_local, nf_set_id_list) {
        if (!cJSON_IsString(nf_set_id_list_local)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_set_id_list]");
            goto end;
        }
        OpenAPI_list_add(nf_set_id_listList, ogs_strdup(nf_set_id_list_local->valuestring));
        }
    }

    serving_scope = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "servingScope");
    if (serving_scope) {
        cJSON *serving_scope_local;
        if (!cJSON_IsArray(serving_scope)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [serving_scope]");
            goto end;
        }
        serving_scopeList = OpenAPI_list_create();

        cJSON_ArrayForEach(serving_scope_local, serving_scope) {
        if (!cJSON_IsString(serving_scope_local)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [serving_scope]");
            goto end;
        }
        OpenAPI_list_add(serving_scopeList, ogs_strdup(serving_scope_local->valuestring));
        }
    }

    lc_h_support_ind = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "lcHSupportInd");
    if (lc_h_support_ind) {
    if (!cJSON_IsBool(lc_h_support_ind)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [lc_h_support_ind]");
        goto end;
    }
    }

    olc_h_support_ind = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "olcHSupportInd");
    if (olc_h_support_ind) {
    if (!cJSON_IsBool(olc_h_support_ind)) {
        ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [olc_h_support_ind]");
        goto end;
    }
    }

    nf_set_recovery_time_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "nfSetRecoveryTimeList");
    if (nf_set_recovery_time_list) {
        cJSON *nf_set_recovery_time_list_local_map = NULL;
        if (!cJSON_IsObject(nf_set_recovery_time_list) && !cJSON_IsNull(nf_set_recovery_time_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [nf_set_recovery_time_list]");
            goto end;
        }
        if (cJSON_IsObject(nf_set_recovery_time_list)) {
            nf_set_recovery_time_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(nf_set_recovery_time_list_local_map, nf_set_recovery_time_list) {
                cJSON *localMapObject = nf_set_recovery_time_list_local_map;
                OpenAPI_list_add(nf_set_recovery_time_listList, localMapKeyPair);
            }
        }
    }

    service_set_recovery_time_list = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "serviceSetRecoveryTimeList");
    if (service_set_recovery_time_list) {
        cJSON *service_set_recovery_time_list_local_map = NULL;
        if (!cJSON_IsObject(service_set_recovery_time_list) && !cJSON_IsNull(service_set_recovery_time_list)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [service_set_recovery_time_list]");
            goto end;
        }
        if (cJSON_IsObject(service_set_recovery_time_list)) {
            service_set_recovery_time_listList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(service_set_recovery_time_list_local_map, service_set_recovery_time_list) {
                cJSON *localMapObject = service_set_recovery_time_list_local_map;
                OpenAPI_list_add(service_set_recovery_time_listList, localMapKeyPair);
            }
        }
    }

    scp_domains = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "scpDomains");
    if (scp_domains) {
        cJSON *scp_domains_local;
        if (!cJSON_IsArray(scp_domains)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [scp_domains]");
            goto end;
        }
        scp_domainsList = OpenAPI_list_create();

        cJSON_ArrayForEach(scp_domains_local, scp_domains) {
        if (!cJSON_IsString(scp_domains_local)) {
            ogs_error("OpenAPI_nf_profile_parseFromJSON() failed [scp_domains]");
            goto end;
        }
        OpenAPI_list_add(scp_domainsList, ogs_strdup(scp_domains_local->valuestring));
        }
    }

    scp_info = cJSON_GetObjectItemCaseSensitive(nf_profileJSON, "scpInfo");
    if (scp_info) {
    scp_info_local_nonprim = OpenAPI_scp_info_parseFromJSON(scp_info);
    }

    nf_profile_local_var = OpenAPI_nf_profile_create (
        ogs_strdup(nf_instance_id->valuestring),
        nf_instance_name && !cJSON_IsNull(nf_instance_name) ? ogs_strdup(nf_instance_name->valuestring) : NULL,
        nf_typeVariable,
        nf_statusVariable,
        heart_beat_timer ? true : false,
        heart_beat_timer ? heart_beat_timer->valuedouble : 0,
        plmn_list ? plmn_listList : NULL,
        snpn_list ? snpn_listList : NULL,
        s_nssais ? s_nssaisList : NULL,
        per_plmn_snssai_list ? per_plmn_snssai_listList : NULL,
        nsi_list ? nsi_listList : NULL,
        fqdn && !cJSON_IsNull(fqdn) ? ogs_strdup(fqdn->valuestring) : NULL,
        inter_plmn_fqdn && !cJSON_IsNull(inter_plmn_fqdn) ? ogs_strdup(inter_plmn_fqdn->valuestring) : NULL,
        ipv4_addresses ? ipv4_addressesList : NULL,
        ipv6_addresses ? ipv6_addressesList : NULL,
        allowed_plmns ? allowed_plmnsList : NULL,
        allowed_snpns ? allowed_snpnsList : NULL,
        allowed_nf_types ? allowed_nf_typesList : NULL,
        allowed_nf_domains ? allowed_nf_domainsList : NULL,
        allowed_nssais ? allowed_nssaisList : NULL,
        priority ? true : false,
        priority ? priority->valuedouble : 0,
        capacity ? true : false,
        capacity ? capacity->valuedouble : 0,
        load ? true : false,
        load ? load->valuedouble : 0,
        load_time_stamp && !cJSON_IsNull(load_time_stamp) ? ogs_strdup(load_time_stamp->valuestring) : NULL,
        locality && !cJSON_IsNull(locality) ? ogs_strdup(locality->valuestring) : NULL,
        udr_info ? udr_info_local_nonprim : NULL,
        udr_info_list ? udr_info_listList : NULL,
        udm_info ? udm_info_local_nonprim : NULL,
        udm_info_list ? udm_info_listList : NULL,
        ausf_info ? ausf_info_local_nonprim : NULL,
        ausf_info_list ? ausf_info_listList : NULL,
        amf_info ? amf_info_local_nonprim : NULL,
        amf_info_list ? amf_info_listList : NULL,
        smf_info ? smf_info_local_nonprim : NULL,
        smf_info_list ? smf_info_listList : NULL,
        upf_info ? upf_info_local_nonprim : NULL,
        upf_info_list ? upf_info_listList : NULL,
        pcf_info ? pcf_info_local_nonprim : NULL,
        pcf_info_list ? pcf_info_listList : NULL,
        bsf_info ? bsf_info_local_nonprim : NULL,
        bsf_info_list ? bsf_info_listList : NULL,
        chf_info ? chf_info_local_nonprim : NULL,
        chf_info_list ? chf_info_listList : NULL,
        nef_info ? nef_info_local_nonprim : NULL,
        nrf_info ? nrf_info_local_nonprim : NULL,
        udsf_info ? udsf_info_local_nonprim : NULL,
        udsf_info_list ? udsf_info_listList : NULL,
        nwdaf_info ? nwdaf_info_local_nonprim : NULL,
        pcscf_info_list ? pcscf_info_listList : NULL,
        hss_info_list ? hss_info_listList : NULL,
        custom_info ? custom_info_local_object : NULL,
        recovery_time && !cJSON_IsNull(recovery_time) ? ogs_strdup(recovery_time->valuestring) : NULL,
        nf_service_persistence ? true : false,
        nf_service_persistence ? nf_service_persistence->valueint : 0,
        nf_services ? nf_servicesList : NULL,
        nf_service_list ? nf_service_listList : NULL,
        nf_profile_changes_support_ind ? true : false,
        nf_profile_changes_support_ind ? nf_profile_changes_support_ind->valueint : 0,
        nf_profile_changes_ind ? true : false,
        nf_profile_changes_ind ? nf_profile_changes_ind->valueint : 0,
        default_notification_subscriptions ? default_notification_subscriptionsList : NULL,
        lmf_info ? lmf_info_local_nonprim : NULL,
        gmlc_info ? gmlc_info_local_nonprim : NULL,
        nf_set_id_list ? nf_set_id_listList : NULL,
        serving_scope ? serving_scopeList : NULL,
        lc_h_support_ind ? true : false,
        lc_h_support_ind ? lc_h_support_ind->valueint : 0,
        olc_h_support_ind ? true : false,
        olc_h_support_ind ? olc_h_support_ind->valueint : 0,
        nf_set_recovery_time_list ? nf_set_recovery_time_listList : NULL,
        service_set_recovery_time_list ? service_set_recovery_time_listList : NULL,
        scp_domains ? scp_domainsList : NULL,
        scp_info ? scp_info_local_nonprim : NULL
    );

    return nf_profile_local_var;
end:
    if (plmn_listList) {
        OpenAPI_list_for_each(plmn_listList, node) {
            OpenAPI_plmn_id_free(node->data);
        }
        OpenAPI_list_free(plmn_listList);
        plmn_listList = NULL;
    }
    if (snpn_listList) {
        OpenAPI_list_for_each(snpn_listList, node) {
            OpenAPI_plmn_id_nid_free(node->data);
        }
        OpenAPI_list_free(snpn_listList);
        snpn_listList = NULL;
    }
    if (s_nssaisList) {
        OpenAPI_list_for_each(s_nssaisList, node) {
            OpenAPI_ext_snssai_free(node->data);
        }
        OpenAPI_list_free(s_nssaisList);
        s_nssaisList = NULL;
    }
    if (per_plmn_snssai_listList) {
        OpenAPI_list_for_each(per_plmn_snssai_listList, node) {
            OpenAPI_plmn_snssai_free(node->data);
        }
        OpenAPI_list_free(per_plmn_snssai_listList);
        per_plmn_snssai_listList = NULL;
    }
    if (nsi_listList) {
        OpenAPI_list_for_each(nsi_listList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(nsi_listList);
        nsi_listList = NULL;
    }
    if (ipv4_addressesList) {
        OpenAPI_list_for_each(ipv4_addressesList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(ipv4_addressesList);
        ipv4_addressesList = NULL;
    }
    if (ipv6_addressesList) {
        OpenAPI_list_for_each(ipv6_addressesList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(ipv6_addressesList);
        ipv6_addressesList = NULL;
    }
    if (allowed_plmnsList) {
        OpenAPI_list_for_each(allowed_plmnsList, node) {
            OpenAPI_plmn_id_free(node->data);
        }
        OpenAPI_list_free(allowed_plmnsList);
        allowed_plmnsList = NULL;
    }
    if (allowed_snpnsList) {
        OpenAPI_list_for_each(allowed_snpnsList, node) {
            OpenAPI_plmn_id_nid_free(node->data);
        }
        OpenAPI_list_free(allowed_snpnsList);
        allowed_snpnsList = NULL;
    }
    if (allowed_nf_typesList) {
        OpenAPI_list_free(allowed_nf_typesList);
        allowed_nf_typesList = NULL;
    }
    if (allowed_nf_domainsList) {
        OpenAPI_list_for_each(allowed_nf_domainsList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(allowed_nf_domainsList);
        allowed_nf_domainsList = NULL;
    }
    if (allowed_nssaisList) {
        OpenAPI_list_for_each(allowed_nssaisList, node) {
            OpenAPI_ext_snssai_free(node->data);
        }
        OpenAPI_list_free(allowed_nssaisList);
        allowed_nssaisList = NULL;
    }
    if (udr_info_local_nonprim) {
        OpenAPI_udr_info_free(udr_info_local_nonprim);
        udr_info_local_nonprim = NULL;
    }
    if (udr_info_listList) {
        OpenAPI_list_for_each(udr_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_udr_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(udr_info_listList);
        udr_info_listList = NULL;
    }
    if (udm_info_local_nonprim) {
        OpenAPI_udm_info_free(udm_info_local_nonprim);
        udm_info_local_nonprim = NULL;
    }
    if (udm_info_listList) {
        OpenAPI_list_for_each(udm_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_udm_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(udm_info_listList);
        udm_info_listList = NULL;
    }
    if (ausf_info_local_nonprim) {
        OpenAPI_ausf_info_free(ausf_info_local_nonprim);
        ausf_info_local_nonprim = NULL;
    }
    if (ausf_info_listList) {
        OpenAPI_list_for_each(ausf_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_ausf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(ausf_info_listList);
        ausf_info_listList = NULL;
    }
    if (amf_info_local_nonprim) {
        OpenAPI_amf_info_free(amf_info_local_nonprim);
        amf_info_local_nonprim = NULL;
    }
    if (amf_info_listList) {
        OpenAPI_list_for_each(amf_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_amf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(amf_info_listList);
        amf_info_listList = NULL;
    }
    if (smf_info_local_nonprim) {
        OpenAPI_smf_info_free(smf_info_local_nonprim);
        smf_info_local_nonprim = NULL;
    }
    if (smf_info_listList) {
        OpenAPI_list_for_each(smf_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_smf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(smf_info_listList);
        smf_info_listList = NULL;
    }
    if (upf_info_local_nonprim) {
        OpenAPI_upf_info_free(upf_info_local_nonprim);
        upf_info_local_nonprim = NULL;
    }
    if (upf_info_listList) {
        OpenAPI_list_for_each(upf_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_upf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(upf_info_listList);
        upf_info_listList = NULL;
    }
    if (pcf_info_local_nonprim) {
        OpenAPI_pcf_info_free(pcf_info_local_nonprim);
        pcf_info_local_nonprim = NULL;
    }
    if (pcf_info_listList) {
        OpenAPI_list_for_each(pcf_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_pcf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(pcf_info_listList);
        pcf_info_listList = NULL;
    }
    if (bsf_info_local_nonprim) {
        OpenAPI_bsf_info_free(bsf_info_local_nonprim);
        bsf_info_local_nonprim = NULL;
    }
    if (bsf_info_listList) {
        OpenAPI_list_for_each(bsf_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_bsf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(bsf_info_listList);
        bsf_info_listList = NULL;
    }
    if (chf_info_local_nonprim) {
        OpenAPI_chf_info_free(chf_info_local_nonprim);
        chf_info_local_nonprim = NULL;
    }
    if (chf_info_listList) {
        OpenAPI_list_for_each(chf_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_chf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(chf_info_listList);
        chf_info_listList = NULL;
    }
    if (nef_info_local_nonprim) {
        OpenAPI_nef_info_free(nef_info_local_nonprim);
        nef_info_local_nonprim = NULL;
    }
    if (nrf_info_local_nonprim) {
        OpenAPI_nrf_info_free(nrf_info_local_nonprim);
        nrf_info_local_nonprim = NULL;
    }
    if (udsf_info_local_nonprim) {
        OpenAPI_udsf_info_free(udsf_info_local_nonprim);
        udsf_info_local_nonprim = NULL;
    }
    if (udsf_info_listList) {
        OpenAPI_list_for_each(udsf_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_udsf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(udsf_info_listList);
        udsf_info_listList = NULL;
    }
    if (nwdaf_info_local_nonprim) {
        OpenAPI_nwdaf_info_free(nwdaf_info_local_nonprim);
        nwdaf_info_local_nonprim = NULL;
    }
    if (pcscf_info_listList) {
        OpenAPI_list_for_each(pcscf_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_pcscf_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(pcscf_info_listList);
        pcscf_info_listList = NULL;
    }
    if (hss_info_listList) {
        OpenAPI_list_for_each(hss_info_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_hss_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(hss_info_listList);
        hss_info_listList = NULL;
    }
    if (custom_info_local_object) {
        OpenAPI_object_free(custom_info_local_object);
        custom_info_local_object = NULL;
    }
    if (nf_servicesList) {
        OpenAPI_list_for_each(nf_servicesList, node) {
            OpenAPI_nf_service_free(node->data);
        }
        OpenAPI_list_free(nf_servicesList);
        nf_servicesList = NULL;
    }
    if (nf_service_listList) {
        OpenAPI_list_for_each(nf_service_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_nf_service_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_service_listList);
        nf_service_listList = NULL;
    }
    if (default_notification_subscriptionsList) {
        OpenAPI_list_for_each(default_notification_subscriptionsList, node) {
            OpenAPI_default_notification_subscription_free(node->data);
        }
        OpenAPI_list_free(default_notification_subscriptionsList);
        default_notification_subscriptionsList = NULL;
    }
    if (lmf_info_local_nonprim) {
        OpenAPI_lmf_info_free(lmf_info_local_nonprim);
        lmf_info_local_nonprim = NULL;
    }
    if (gmlc_info_local_nonprim) {
        OpenAPI_gmlc_info_free(gmlc_info_local_nonprim);
        gmlc_info_local_nonprim = NULL;
    }
    if (nf_set_id_listList) {
        OpenAPI_list_for_each(nf_set_id_listList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(nf_set_id_listList);
        nf_set_id_listList = NULL;
    }
    if (serving_scopeList) {
        OpenAPI_list_for_each(serving_scopeList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(serving_scopeList);
        serving_scopeList = NULL;
    }
    if (nf_set_recovery_time_listList) {
        OpenAPI_list_for_each(nf_set_recovery_time_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            ogs_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(nf_set_recovery_time_listList);
        nf_set_recovery_time_listList = NULL;
    }
    if (service_set_recovery_time_listList) {
        OpenAPI_list_for_each(service_set_recovery_time_listList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            ogs_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(service_set_recovery_time_listList);
        service_set_recovery_time_listList = NULL;
    }
    if (scp_domainsList) {
        OpenAPI_list_for_each(scp_domainsList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(scp_domainsList);
        scp_domainsList = NULL;
    }
    if (scp_info_local_nonprim) {
        OpenAPI_scp_info_free(scp_info_local_nonprim);
        scp_info_local_nonprim = NULL;
    }
    return NULL;
}

OpenAPI_nf_profile_t *OpenAPI_nf_profile_copy(OpenAPI_nf_profile_t *dst, OpenAPI_nf_profile_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_nf_profile_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_nf_profile_convertToJSON() failed");
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

    OpenAPI_nf_profile_free(dst);
    dst = OpenAPI_nf_profile_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

