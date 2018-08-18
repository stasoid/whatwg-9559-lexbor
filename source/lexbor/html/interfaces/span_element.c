/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

#include "lexbor/html/interfaces/span_element.h"
#include "lexbor/html/interfaces/document.h"


lxb_html_span_element_t *
lxb_html_span_element_create(lxb_html_document_t *document)
{
    lxb_html_span_element_t *element;

    element = lexbor_mraw_calloc(document->mem->mraw,
                                 sizeof(lxb_html_span_element_t));
    if (element == NULL) {
        return NULL;
    }

    lxb_dom_node_t *node = lxb_dom_interface_node(element);

    node->owner_document = lxb_html_document_original_ref(document);
    node->type = LXB_DOM_NODE_TYPE_ELEMENT;

    return element;
}

lxb_html_span_element_t *
lxb_html_span_element_destroy(lxb_html_span_element_t *span_element)
{
    return lexbor_mraw_free(
        lxb_dom_interface_node(span_element)->owner_document->mraw,
        span_element);
}