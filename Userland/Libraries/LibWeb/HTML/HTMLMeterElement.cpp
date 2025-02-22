/*
 * Copyright (c) 2020, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/HTML/HTMLMeterElement.h>
#include <LibWeb/HTML/Window.h>

namespace Web::HTML {

HTMLMeterElement::HTMLMeterElement(DOM::Document& document, DOM::QualifiedName qualified_name)
    : HTMLElement(document, move(qualified_name))
{
    set_prototype(&window().cached_web_prototype("HTMLMeterElement"));
}

HTMLMeterElement::~HTMLMeterElement() = default;

}
