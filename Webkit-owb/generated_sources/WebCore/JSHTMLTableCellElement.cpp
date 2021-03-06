/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSHTMLTableCellElement.h"

#include <wtf/GetPtr.h>

#include "HTMLTableCellElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLTableCellElementTableValues[17] =
{
    { "cellIndex", (intptr_t)JSHTMLTableCellElement::CellIndexAttrNum, DontDelete|ReadOnly, 0 },
    { "abbr", (intptr_t)JSHTMLTableCellElement::AbbrAttrNum, DontDelete, 0 },
    { "align", (intptr_t)JSHTMLTableCellElement::AlignAttrNum, DontDelete, 0 },
    { "axis", (intptr_t)JSHTMLTableCellElement::AxisAttrNum, DontDelete, 0 },
    { "bgColor", (intptr_t)JSHTMLTableCellElement::BgColorAttrNum, DontDelete, 0 },
    { "ch", (intptr_t)JSHTMLTableCellElement::ChAttrNum, DontDelete, 0 },
    { "chOff", (intptr_t)JSHTMLTableCellElement::ChOffAttrNum, DontDelete, 0 },
    { "colSpan", (intptr_t)JSHTMLTableCellElement::ColSpanAttrNum, DontDelete, 0 },
    { "headers", (intptr_t)JSHTMLTableCellElement::HeadersAttrNum, DontDelete, 0 },
    { "height", (intptr_t)JSHTMLTableCellElement::HeightAttrNum, DontDelete, 0 },
    { "noWrap", (intptr_t)JSHTMLTableCellElement::NoWrapAttrNum, DontDelete, 0 },
    { "rowSpan", (intptr_t)JSHTMLTableCellElement::RowSpanAttrNum, DontDelete, 0 },
    { "scope", (intptr_t)JSHTMLTableCellElement::ScopeAttrNum, DontDelete, 0 },
    { "vAlign", (intptr_t)JSHTMLTableCellElement::VAlignAttrNum, DontDelete, 0 },
    { "width", (intptr_t)JSHTMLTableCellElement::WidthAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLTableCellElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableCellElementTable = { 511, JSHTMLTableCellElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLTableCellElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableCellElementConstructorTable = { 0, JSHTMLTableCellElementConstructorTableValues, 0 };

class JSHTMLTableCellElementConstructor : public DOMObject {
public:
    JSHTMLTableCellElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLTableCellElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLTableCellElementConstructor::s_info = { "HTMLTableCellElementConstructor", 0, &JSHTMLTableCellElementConstructorTable, 0 };

bool JSHTMLTableCellElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableCellElementConstructor, DOMObject>(exec, &JSHTMLTableCellElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLTableCellElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTableCellElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableCellElementPrototypeTable = { 0, JSHTMLTableCellElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLTableCellElementPrototype::s_info = { "HTMLTableCellElementPrototype", 0, &JSHTMLTableCellElementPrototypeTable, 0 };

JSObject* JSHTMLTableCellElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLTableCellElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLTableCellElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLTableCellElement::s_info = { "HTMLTableCellElement", &JSHTMLElement::s_info, &JSHTMLTableCellElementTable , 0 };

JSHTMLTableCellElement::JSHTMLTableCellElement(JSObject* prototype, HTMLTableCellElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLTableCellElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableCellElement, Base>(exec, &JSHTMLTableCellElementTable, this, propertyName, slot);
}

JSValue* JSHTMLTableCellElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CellIndexAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsNumber(exec, imp->cellIndex());
    }
    case AbbrAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->abbr());
    }
    case AlignAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->align());
    }
    case AxisAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->axis());
    }
    case BgColorAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->bgColor());
    }
    case ChAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->ch());
    }
    case ChOffAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->chOff());
    }
    case ColSpanAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsNumber(exec, imp->colSpan());
    }
    case HeadersAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->headers());
    }
    case HeightAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->height());
    }
    case NoWrapAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsBoolean(imp->noWrap());
    }
    case RowSpanAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsNumber(exec, imp->rowSpan());
    }
    case ScopeAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->scope());
    }
    case VAlignAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->vAlign());
    }
    case WidthAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        return jsString(exec, imp->width());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLTableCellElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLTableCellElement, Base>(exec, propertyName, value, &JSHTMLTableCellElementTable, this);
}

void JSHTMLTableCellElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case AbbrAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setAbbr(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AlignAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AxisAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setAxis(valueToStringWithNullCheck(exec, value));
        break;
    }
    case BgColorAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setBgColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setCh(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChOffAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setChOff(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ColSpanAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setColSpan(value->toInt32(exec));
        break;
    }
    case HeadersAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setHeaders(valueToStringWithNullCheck(exec, value));
        break;
    }
    case HeightAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setHeight(valueToStringWithNullCheck(exec, value));
        break;
    }
    case NoWrapAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setNoWrap(value->toBoolean(exec));
        break;
    }
    case RowSpanAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setRowSpan(value->toInt32(exec));
        break;
    }
    case ScopeAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setScope(valueToStringWithNullCheck(exec, value));
        break;
    }
    case VAlignAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setVAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case WidthAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());
        imp->setWidth(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLTableCellElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLTableCellElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLTableCellElementConstructor>(exec, constructorIdentifier);
}


}
