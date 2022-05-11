//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: trade.fbe
// FBE version: 1.9.0.0
//------------------------------------------------------------------------------

#include "trade_models.h"

namespace FBE {

FieldModel<::trade::Order>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , id(buffer, 4 + 4)
    , symbol(buffer, id.fbe_offset() + id.fbe_size())
    , side(buffer, symbol.fbe_offset() + symbol.fbe_size())
    , type(buffer, side.fbe_offset() + side.fbe_size())
    , price(buffer, type.fbe_offset() + type.fbe_size())
    , volume(buffer, price.fbe_offset() + price.fbe_size())
{}

size_t FieldModel<::trade::Order>::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + id.fbe_size()
        + symbol.fbe_size()
        + side.fbe_size()
        + type.fbe_size()
        + price.fbe_size()
        + volume.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel<::trade::Order>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + id.fbe_extra()
        + symbol.fbe_extra()
        + side.fbe_extra()
        + type.fbe_extra()
        + price.fbe_extra()
        + volume.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel<::trade::Order>::verify(bool fbe_verify_type) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return false;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset));
    if (fbe_struct_size < (4 + 4))
        return false;

    uint32_t fbe_struct_type = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4));
    if (fbe_verify_type && (fbe_struct_type != fbe_type()))
        return false;

    _buffer.shift(fbe_struct_offset);
    bool fbe_result = verify_fields(fbe_struct_size);
    _buffer.unshift(fbe_struct_offset);
    return fbe_result;
}

bool FieldModel<::trade::Order>::verify_fields(size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + id.fbe_size()) > fbe_struct_size)
        return true;
    if (!id.verify())
        return false;
    fbe_current_size += id.fbe_size();

    if ((fbe_current_size + symbol.fbe_size()) > fbe_struct_size)
        return true;
    if (!symbol.verify())
        return false;
    fbe_current_size += symbol.fbe_size();

    if ((fbe_current_size + side.fbe_size()) > fbe_struct_size)
        return true;
    if (!side.verify())
        return false;
    fbe_current_size += side.fbe_size();

    if ((fbe_current_size + type.fbe_size()) > fbe_struct_size)
        return true;
    if (!type.verify())
        return false;
    fbe_current_size += type.fbe_size();

    if ((fbe_current_size + price.fbe_size()) > fbe_struct_size)
        return true;
    if (!price.verify())
        return false;
    fbe_current_size += price.fbe_size();

    if ((fbe_current_size + volume.fbe_size()) > fbe_struct_size)
        return true;
    if (!volume.verify())
        return false;
    fbe_current_size += volume.fbe_size();

    return true;
}

size_t FieldModel<::trade::Order>::get_begin() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + 4 + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset));
    assert((fbe_struct_size >= (4 + 4)) && "Model is broken!");
    if (fbe_struct_size < (4 + 4))
        return 0;

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::trade::Order>::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::trade::Order>::get(::trade::Order& fbe_value) const noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset()));
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel<::trade::Order>::get_fields(::trade::Order& fbe_value, size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + id.fbe_size()) <= fbe_struct_size)
        id.get(fbe_value.id);
    else
        fbe_value.id = (int32_t)0ll;
    fbe_current_size += id.fbe_size();

    if ((fbe_current_size + symbol.fbe_size()) <= fbe_struct_size)
        symbol.get(fbe_value.symbol);
    else
        fbe_value.symbol = "";
    fbe_current_size += symbol.fbe_size();

    if ((fbe_current_size + side.fbe_size()) <= fbe_struct_size)
        side.get(fbe_value.side);
    else
        fbe_value.side = ::trade::OrderSide();
    fbe_current_size += side.fbe_size();

    if ((fbe_current_size + type.fbe_size()) <= fbe_struct_size)
        type.get(fbe_value.type);
    else
        fbe_value.type = ::trade::OrderType();
    fbe_current_size += type.fbe_size();

    if ((fbe_current_size + price.fbe_size()) <= fbe_struct_size)
        price.get(fbe_value.price, (double)0.0);
    else
        fbe_value.price = (double)0.0;
    fbe_current_size += price.fbe_size();

    if ((fbe_current_size + volume.fbe_size()) <= fbe_struct_size)
        volume.get(fbe_value.volume, (double)0.0);
    else
        fbe_value.volume = (double)0.0;
    fbe_current_size += volume.fbe_size();
}

size_t FieldModel<::trade::Order>::set_begin()
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_size = (uint32_t)fbe_body();
    uint32_t fbe_struct_offset = (uint32_t)(_buffer.allocate(fbe_struct_size) - _buffer.offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) > _buffer.size()))
        return 0;

    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_struct_offset;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset)) = fbe_struct_size;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4)) = (uint32_t)fbe_type();

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::trade::Order>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::trade::Order>::set(const ::trade::Order& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel<::trade::Order>::set_fields(const ::trade::Order& fbe_value) noexcept
{
    id.set(fbe_value.id);
    symbol.set(fbe_value.symbol);
    side.set(fbe_value.side);
    type.set(fbe_value.type);
    price.set(fbe_value.price);
    volume.set(fbe_value.volume);
}

namespace trade {

bool OrderModel::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4));
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t OrderModel::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t OrderModel::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4)) = fbe_full_size;
    return fbe_full_size;
}

size_t OrderModel::serialize(const ::trade::Order& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t OrderModel::deserialize(::trade::Order& value) const noexcept
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return 0;

    uint32_t fbe_full_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4));
    assert((fbe_full_size >= model.fbe_size()) && "Model is broken!");
    if (fbe_full_size < model.fbe_size())
        return 0;

    model.get(value);
    return fbe_full_size;
}

} // namespace trade

FieldModel<::trade::Balance>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , currency(buffer, 4 + 4)
    , amount(buffer, currency.fbe_offset() + currency.fbe_size())
{}

size_t FieldModel<::trade::Balance>::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + currency.fbe_size()
        + amount.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel<::trade::Balance>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + currency.fbe_extra()
        + amount.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel<::trade::Balance>::verify(bool fbe_verify_type) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return false;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset));
    if (fbe_struct_size < (4 + 4))
        return false;

    uint32_t fbe_struct_type = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4));
    if (fbe_verify_type && (fbe_struct_type != fbe_type()))
        return false;

    _buffer.shift(fbe_struct_offset);
    bool fbe_result = verify_fields(fbe_struct_size);
    _buffer.unshift(fbe_struct_offset);
    return fbe_result;
}

bool FieldModel<::trade::Balance>::verify_fields(size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + currency.fbe_size()) > fbe_struct_size)
        return true;
    if (!currency.verify())
        return false;
    fbe_current_size += currency.fbe_size();

    if ((fbe_current_size + amount.fbe_size()) > fbe_struct_size)
        return true;
    if (!amount.verify())
        return false;
    fbe_current_size += amount.fbe_size();

    return true;
}

size_t FieldModel<::trade::Balance>::get_begin() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + 4 + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset));
    assert((fbe_struct_size >= (4 + 4)) && "Model is broken!");
    if (fbe_struct_size < (4 + 4))
        return 0;

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::trade::Balance>::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::trade::Balance>::get(::trade::Balance& fbe_value) const noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset()));
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel<::trade::Balance>::get_fields(::trade::Balance& fbe_value, size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + currency.fbe_size()) <= fbe_struct_size)
        currency.get(fbe_value.currency);
    else
        fbe_value.currency = "";
    fbe_current_size += currency.fbe_size();

    if ((fbe_current_size + amount.fbe_size()) <= fbe_struct_size)
        amount.get(fbe_value.amount, (double)0.0);
    else
        fbe_value.amount = (double)0.0;
    fbe_current_size += amount.fbe_size();
}

size_t FieldModel<::trade::Balance>::set_begin()
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_size = (uint32_t)fbe_body();
    uint32_t fbe_struct_offset = (uint32_t)(_buffer.allocate(fbe_struct_size) - _buffer.offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) > _buffer.size()))
        return 0;

    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_struct_offset;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset)) = fbe_struct_size;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4)) = (uint32_t)fbe_type();

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::trade::Balance>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::trade::Balance>::set(const ::trade::Balance& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel<::trade::Balance>::set_fields(const ::trade::Balance& fbe_value) noexcept
{
    currency.set(fbe_value.currency);
    amount.set(fbe_value.amount);
}

namespace trade {

bool BalanceModel::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4));
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t BalanceModel::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t BalanceModel::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4)) = fbe_full_size;
    return fbe_full_size;
}

size_t BalanceModel::serialize(const ::trade::Balance& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t BalanceModel::deserialize(::trade::Balance& value) const noexcept
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return 0;

    uint32_t fbe_full_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4));
    assert((fbe_full_size >= model.fbe_size()) && "Model is broken!");
    if (fbe_full_size < model.fbe_size())
        return 0;

    model.get(value);
    return fbe_full_size;
}

} // namespace trade

FieldModel<::trade::Account>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , id(buffer, 4 + 4)
    , name(buffer, id.fbe_offset() + id.fbe_size())
    , wallet(buffer, name.fbe_offset() + name.fbe_size())
    , orders(buffer, wallet.fbe_offset() + wallet.fbe_size())
{}

size_t FieldModel<::trade::Account>::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + id.fbe_size()
        + name.fbe_size()
        + wallet.fbe_size()
        + orders.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel<::trade::Account>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + id.fbe_extra()
        + name.fbe_extra()
        + wallet.fbe_extra()
        + orders.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel<::trade::Account>::verify(bool fbe_verify_type) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return false;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset));
    if (fbe_struct_size < (4 + 4))
        return false;

    uint32_t fbe_struct_type = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4));
    if (fbe_verify_type && (fbe_struct_type != fbe_type()))
        return false;

    _buffer.shift(fbe_struct_offset);
    bool fbe_result = verify_fields(fbe_struct_size);
    _buffer.unshift(fbe_struct_offset);
    return fbe_result;
}

bool FieldModel<::trade::Account>::verify_fields(size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + id.fbe_size()) > fbe_struct_size)
        return true;
    if (!id.verify())
        return false;
    fbe_current_size += id.fbe_size();

    if ((fbe_current_size + name.fbe_size()) > fbe_struct_size)
        return true;
    if (!name.verify())
        return false;
    fbe_current_size += name.fbe_size();

    if ((fbe_current_size + wallet.fbe_size()) > fbe_struct_size)
        return true;
    if (!wallet.verify())
        return false;
    fbe_current_size += wallet.fbe_size();

    if ((fbe_current_size + orders.fbe_size()) > fbe_struct_size)
        return true;
    if (!orders.verify())
        return false;
    fbe_current_size += orders.fbe_size();

    return true;
}

size_t FieldModel<::trade::Account>::get_begin() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset()));
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + 4 + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset));
    assert((fbe_struct_size >= (4 + 4)) && "Model is broken!");
    if (fbe_struct_size < (4 + 4))
        return 0;

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::trade::Account>::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::trade::Account>::get(::trade::Account& fbe_value) const noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = *((const uint32_t*)(_buffer.data() + _buffer.offset()));
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel<::trade::Account>::get_fields(::trade::Account& fbe_value, size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + id.fbe_size()) <= fbe_struct_size)
        id.get(fbe_value.id);
    else
        fbe_value.id = (int32_t)0ll;
    fbe_current_size += id.fbe_size();

    if ((fbe_current_size + name.fbe_size()) <= fbe_struct_size)
        name.get(fbe_value.name);
    else
        fbe_value.name = "";
    fbe_current_size += name.fbe_size();

    if ((fbe_current_size + wallet.fbe_size()) <= fbe_struct_size)
        wallet.get(fbe_value.wallet);
    else
        fbe_value.wallet = ::trade::Balance();
    fbe_current_size += wallet.fbe_size();

    if ((fbe_current_size + orders.fbe_size()) <= fbe_struct_size)
        orders.get(fbe_value.orders);
    else
        fbe_value.orders.clear();
    fbe_current_size += orders.fbe_size();
}

size_t FieldModel<::trade::Account>::set_begin()
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_size = (uint32_t)fbe_body();
    uint32_t fbe_struct_offset = (uint32_t)(_buffer.allocate(fbe_struct_size) - _buffer.offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) > _buffer.size()))
        return 0;

    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_offset())) = fbe_struct_offset;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset)) = fbe_struct_size;
    *((uint32_t*)(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4)) = (uint32_t)fbe_type();

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::trade::Account>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::trade::Account>::set(const ::trade::Account& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel<::trade::Account>::set_fields(const ::trade::Account& fbe_value) noexcept
{
    id.set(fbe_value.id);
    name.set(fbe_value.name);
    wallet.set(fbe_value.wallet);
    orders.set(fbe_value.orders);
}

namespace trade {

bool AccountModel::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4));
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t AccountModel::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t AccountModel::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4)) = fbe_full_size;
    return fbe_full_size;
}

size_t AccountModel::serialize(const ::trade::Account& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t AccountModel::deserialize(::trade::Account& value) const noexcept
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return 0;

    uint32_t fbe_full_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4));
    assert((fbe_full_size >= model.fbe_size()) && "Model is broken!");
    if (fbe_full_size < model.fbe_size())
        return 0;

    model.get(value);
    return fbe_full_size;
}

} // namespace trade

} // namespace FBE
