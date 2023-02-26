
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nf_service_set_cond.h"

OpenAPI_nf_service_set_cond_t *OpenAPI_nf_service_set_cond_create(
    char *nf_service_set_id
)
{
    OpenAPI_nf_service_set_cond_t *nf_service_set_cond_local_var = ogs_malloc(sizeof(OpenAPI_nf_service_set_cond_t));
    ogs_assert(nf_service_set_cond_local_var);

    nf_service_set_cond_local_var->nf_service_set_id = nf_service_set_id;

    return nf_service_set_cond_local_var;
}

void OpenAPI_nf_service_set_cond_free(OpenAPI_nf_service_set_cond_t *nf_service_set_cond)
{
    if (NULL == nf_service_set_cond) {
        return;
    }
    OpenAPI_lnode_t *node;
    if (nf_service_set_cond->nf_service_set_id) {
        ogs_free(nf_service_set_cond->nf_service_set_id);
        nf_service_set_cond->nf_service_set_id = NULL;
    }
    ogs_free(nf_service_set_cond);
}

cJSON *OpenAPI_nf_service_set_cond_convertToJSON(OpenAPI_nf_service_set_cond_t *nf_service_set_cond)
{
    cJSON *item = NULL;

    if (nf_service_set_cond == NULL) {
        ogs_error("OpenAPI_nf_service_set_cond_convertToJSON() failed [NfServiceSetCond]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (!nf_service_set_cond->nf_service_set_id) {
        ogs_error("OpenAPI_nf_service_set_cond_convertToJSON() failed [nf_service_set_id]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "nfServiceSetId", nf_service_set_cond->nf_service_set_id) == NULL) {
        ogs_error("OpenAPI_nf_service_set_cond_convertToJSON() failed [nf_service_set_id]");
        goto end;
    }

end:
    return item;
}

OpenAPI_nf_service_set_cond_t *OpenAPI_nf_service_set_cond_parseFromJSON(cJSON *nf_service_set_condJSON)
{
    OpenAPI_nf_service_set_cond_t *nf_service_set_cond_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *nf_service_set_id = NULL;
    nf_service_set_id = cJSON_GetObjectItemCaseSensitive(nf_service_set_condJSON, "nfServiceSetId");
    if (!nf_service_set_id) {
        ogs_error("OpenAPI_nf_service_set_cond_parseFromJSON() failed [nf_service_set_id]");
        goto end;
    }
    if (!cJSON_IsString(nf_service_set_id)) {
        ogs_error("OpenAPI_nf_service_set_cond_parseFromJSON() failed [nf_service_set_id]");
        goto end;
    }

    nf_service_set_cond_local_var = OpenAPI_nf_service_set_cond_create (
        ogs_strdup(nf_service_set_id->valuestring)
    );

    return nf_service_set_cond_local_var;
end:
    return NULL;
}

OpenAPI_nf_service_set_cond_t *OpenAPI_nf_service_set_cond_copy(OpenAPI_nf_service_set_cond_t *dst, OpenAPI_nf_service_set_cond_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_nf_service_set_cond_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_nf_service_set_cond_convertToJSON() failed");
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

    OpenAPI_nf_service_set_cond_free(dst);
    dst = OpenAPI_nf_service_set_cond_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

