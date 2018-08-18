/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

/*
 * Caution!!! Important!!!
 * This file is generated by the script "utils/lexbor/html/tags.py"!
 * Do not change this file!
 */


#include <unit/test.h>

#include <lexbor/html/ns.h>


TEST_BEGIN(names)
{
    const lxb_html_ns_data_t *entry;

%%TEST_NAMES%%
}
TEST_END

int
main(int argc, const char * argv[])
{
    TEST_INIT();

    TEST_ADD(names);

    TEST_RUN("lexbor/html/ns_res");
    TEST_RELEASE();
}

