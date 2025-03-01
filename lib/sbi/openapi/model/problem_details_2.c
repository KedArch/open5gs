
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "problem_details_2.h"

OpenAPI_problem_details_2_t *OpenAPI_problem_details_2_create(
    char *type,
    char *title,
    bool is_status,
    int status,
    char *detail,
    char *instance,
    char *cause,
    OpenAPI_list_t *invalid_params
)
{
    OpenAPI_problem_details_2_t *problem_details_2_local_var = ogs_malloc(sizeof(OpenAPI_problem_details_2_t));
    ogs_assert(problem_details_2_local_var);

    problem_details_2_local_var->type = type;
    problem_details_2_local_var->title = title;
    problem_details_2_local_var->is_status = is_status;
    problem_details_2_local_var->status = status;
    problem_details_2_local_var->detail = detail;
    problem_details_2_local_var->instance = instance;
    problem_details_2_local_var->cause = cause;
    problem_details_2_local_var->invalid_params = invalid_params;

    return problem_details_2_local_var;
}

void OpenAPI_problem_details_2_free(OpenAPI_problem_details_2_t *problem_details_2)
{
    if (NULL == problem_details_2) {
        return;
    }
    OpenAPI_lnode_t *node;
    if (problem_details_2->type) {
        ogs_free(problem_details_2->type);
        problem_details_2->type = NULL;
    }
    if (problem_details_2->title) {
        ogs_free(problem_details_2->title);
        problem_details_2->title = NULL;
    }
    if (problem_details_2->detail) {
        ogs_free(problem_details_2->detail);
        problem_details_2->detail = NULL;
    }
    if (problem_details_2->instance) {
        ogs_free(problem_details_2->instance);
        problem_details_2->instance = NULL;
    }
    if (problem_details_2->cause) {
        ogs_free(problem_details_2->cause);
        problem_details_2->cause = NULL;
    }
    if (problem_details_2->invalid_params) {
        OpenAPI_list_for_each(problem_details_2->invalid_params, node) {
            OpenAPI_invalid_param_1_free(node->data);
        }
        OpenAPI_list_free(problem_details_2->invalid_params);
        problem_details_2->invalid_params = NULL;
    }
    ogs_free(problem_details_2);
}

cJSON *OpenAPI_problem_details_2_convertToJSON(OpenAPI_problem_details_2_t *problem_details_2)
{
    cJSON *item = NULL;

    if (problem_details_2 == NULL) {
        ogs_error("OpenAPI_problem_details_2_convertToJSON() failed [ProblemDetails_2]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (problem_details_2->type) {
    if (cJSON_AddStringToObject(item, "type", problem_details_2->type) == NULL) {
        ogs_error("OpenAPI_problem_details_2_convertToJSON() failed [type]");
        goto end;
    }
    }

    if (problem_details_2->title) {
    if (cJSON_AddStringToObject(item, "title", problem_details_2->title) == NULL) {
        ogs_error("OpenAPI_problem_details_2_convertToJSON() failed [title]");
        goto end;
    }
    }

    if (problem_details_2->is_status) {
    if (cJSON_AddNumberToObject(item, "status", problem_details_2->status) == NULL) {
        ogs_error("OpenAPI_problem_details_2_convertToJSON() failed [status]");
        goto end;
    }
    }

    if (problem_details_2->detail) {
    if (cJSON_AddStringToObject(item, "detail", problem_details_2->detail) == NULL) {
        ogs_error("OpenAPI_problem_details_2_convertToJSON() failed [detail]");
        goto end;
    }
    }

    if (problem_details_2->instance) {
    if (cJSON_AddStringToObject(item, "instance", problem_details_2->instance) == NULL) {
        ogs_error("OpenAPI_problem_details_2_convertToJSON() failed [instance]");
        goto end;
    }
    }

    if (problem_details_2->cause) {
    if (cJSON_AddStringToObject(item, "cause", problem_details_2->cause) == NULL) {
        ogs_error("OpenAPI_problem_details_2_convertToJSON() failed [cause]");
        goto end;
    }
    }

    if (problem_details_2->invalid_params) {
    cJSON *invalid_paramsList = cJSON_AddArrayToObject(item, "invalidParams");
    if (invalid_paramsList == NULL) {
        ogs_error("OpenAPI_problem_details_2_convertToJSON() failed [invalid_params]");
        goto end;
    }

    OpenAPI_lnode_t *invalid_params_node;
    if (problem_details_2->invalid_params) {
        OpenAPI_list_for_each(problem_details_2->invalid_params, invalid_params_node) {
            cJSON *itemLocal = OpenAPI_invalid_param_1_convertToJSON(invalid_params_node->data);
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_problem_details_2_convertToJSON() failed [invalid_params]");
                goto end;
            }
            cJSON_AddItemToArray(invalid_paramsList, itemLocal);
        }
    }
    }

end:
    return item;
}

OpenAPI_problem_details_2_t *OpenAPI_problem_details_2_parseFromJSON(cJSON *problem_details_2JSON)
{
    OpenAPI_problem_details_2_t *problem_details_2_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *type = NULL;
    cJSON *title = NULL;
    cJSON *status = NULL;
    cJSON *detail = NULL;
    cJSON *instance = NULL;
    cJSON *cause = NULL;
    cJSON *invalid_params = NULL;
    OpenAPI_list_t *invalid_paramsList = NULL;
    type = cJSON_GetObjectItemCaseSensitive(problem_details_2JSON, "type");
    if (type) {
    if (!cJSON_IsString(type) && !cJSON_IsNull(type)) {
        ogs_error("OpenAPI_problem_details_2_parseFromJSON() failed [type]");
        goto end;
    }
    }

    title = cJSON_GetObjectItemCaseSensitive(problem_details_2JSON, "title");
    if (title) {
    if (!cJSON_IsString(title) && !cJSON_IsNull(title)) {
        ogs_error("OpenAPI_problem_details_2_parseFromJSON() failed [title]");
        goto end;
    }
    }

    status = cJSON_GetObjectItemCaseSensitive(problem_details_2JSON, "status");
    if (status) {
    if (!cJSON_IsNumber(status)) {
        ogs_error("OpenAPI_problem_details_2_parseFromJSON() failed [status]");
        goto end;
    }
    }

    detail = cJSON_GetObjectItemCaseSensitive(problem_details_2JSON, "detail");
    if (detail) {
    if (!cJSON_IsString(detail) && !cJSON_IsNull(detail)) {
        ogs_error("OpenAPI_problem_details_2_parseFromJSON() failed [detail]");
        goto end;
    }
    }

    instance = cJSON_GetObjectItemCaseSensitive(problem_details_2JSON, "instance");
    if (instance) {
    if (!cJSON_IsString(instance) && !cJSON_IsNull(instance)) {
        ogs_error("OpenAPI_problem_details_2_parseFromJSON() failed [instance]");
        goto end;
    }
    }

    cause = cJSON_GetObjectItemCaseSensitive(problem_details_2JSON, "cause");
    if (cause) {
    if (!cJSON_IsString(cause) && !cJSON_IsNull(cause)) {
        ogs_error("OpenAPI_problem_details_2_parseFromJSON() failed [cause]");
        goto end;
    }
    }

    invalid_params = cJSON_GetObjectItemCaseSensitive(problem_details_2JSON, "invalidParams");
    if (invalid_params) {
        cJSON *invalid_params_local_nonprimitive;
        if (!cJSON_IsArray(invalid_params)){
            ogs_error("OpenAPI_problem_details_2_parseFromJSON() failed [invalid_params]");
            goto end;
        }

        invalid_paramsList = OpenAPI_list_create();

        cJSON_ArrayForEach(invalid_params_local_nonprimitive, invalid_params ) {
            if (!cJSON_IsObject(invalid_params_local_nonprimitive)) {
                ogs_error("OpenAPI_problem_details_2_parseFromJSON() failed [invalid_params]");
                goto end;
            }
            OpenAPI_invalid_param_1_t *invalid_paramsItem = OpenAPI_invalid_param_1_parseFromJSON(invalid_params_local_nonprimitive);

            if (!invalid_paramsItem) {
                ogs_error("No invalid_paramsItem");
                OpenAPI_list_free(invalid_paramsList);
                goto end;
            }

            OpenAPI_list_add(invalid_paramsList, invalid_paramsItem);
        }
    }

    problem_details_2_local_var = OpenAPI_problem_details_2_create (
        type && !cJSON_IsNull(type) ? ogs_strdup(type->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? ogs_strdup(title->valuestring) : NULL,
        status ? true : false,
        status ? status->valuedouble : 0,
        detail && !cJSON_IsNull(detail) ? ogs_strdup(detail->valuestring) : NULL,
        instance && !cJSON_IsNull(instance) ? ogs_strdup(instance->valuestring) : NULL,
        cause && !cJSON_IsNull(cause) ? ogs_strdup(cause->valuestring) : NULL,
        invalid_params ? invalid_paramsList : NULL
    );

    return problem_details_2_local_var;
end:
    if (invalid_paramsList) {
        OpenAPI_list_for_each(invalid_paramsList, node) {
            OpenAPI_invalid_param_1_free(node->data);
        }
        OpenAPI_list_free(invalid_paramsList);
        invalid_paramsList = NULL;
    }
    return NULL;
}

OpenAPI_problem_details_2_t *OpenAPI_problem_details_2_copy(OpenAPI_problem_details_2_t *dst, OpenAPI_problem_details_2_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_problem_details_2_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_problem_details_2_convertToJSON() failed");
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

    OpenAPI_problem_details_2_free(dst);
    dst = OpenAPI_problem_details_2_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

