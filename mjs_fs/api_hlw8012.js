// Arduino HLW8012 library API. Source C API is defined at:
// [mgos_hlw8012.h]

let HLW8012 = {
    _create: ffi('void *mgos_hlw8012_create()'),
    _close: ffi('void mgos_hlw8012_close(void *)'),
    _begin: ffi('void mgos_hlw8012_begin(void *, int, int, int)'),
    _readCurrent: ffi('double mgos_hlw8012_readCurrent(void *)'),
    _readVoltage: ffi('int mgos_hlw8012_readVoltage(void *)'),
    _readEnergy: ffi('int mgos_hlw8012_readEnergy(void *)'),
    _readActivePower: ffi('void mgos_hlw8012_readActivePower(void *)'),
    _readApparentPower: ffi('int mgos_hlw8012_readApparentPower(void *)'),
    _readPowerFactor: ffi('void mgos_hlw8012_readPowerFactor(void *)'),
    _readReactivePower: ffi('void mgos_hlw8012_readReactivePower(void *)'),
    _readResetEnergy: ffi('void mgos_hlw8012_resetEnergy(void *)'),

    create: function () {
        let obj = Object.create(HLW8012._proto);
        obj.instance = HLW8012._create();
        return obj;
    },

    _proto: {
        close: function () {
            return HLW8012._close(this.instance);
        },
        begin: function (cfAddress, cf1Address, selAddress) {
            return HLW8012._begin(this.instance, cfAddress, cf1Address, selAddress);
        },
        readCurrent: function () {
            return HLW8012._readCurrent(this.instance);
        },
        readVoltage: function () {
            return HLW8012._readVoltage(this.instance);
        },
        readEnergy: function () {
            return HLW8012._readEnergy(this.instance);
        },
        readActivePower: function () {
            return HLW8012._readActivePower(this.instance);
        },
        readApparentPower: function () {
            return HLW8012._readApparentPower(this.instance);
        },
        readPowerFactor: function () {
            return HLW8012._readPowerFactor(this.instance);
        },
        readReactivePower: function () {
            return HLW8012._readReactivePower(this.instance);
        },
        readResetEnergy: function () {
            return HLW8012._readResetEnergy(this.instance);
        },
    },
}