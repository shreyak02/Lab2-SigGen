// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


VL_ATTR_COLD void Vsigdelay___024root__trace_init_sub__TOP__0(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"incr", false,-1, 7,0);
    tracep->declBus(c+5,"wr_en", false,-1, 7,0);
    tracep->declBus(c+6,"rd_en", false,-1, 7,0);
    tracep->declBus(c+7,"din", false,-1, 7,0);
    tracep->declBus(c+8,"offset", false,-1, 7,0);
    tracep->declBus(c+9,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("sigdelay ");
    tracep->declBus(c+15,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"incr", false,-1, 7,0);
    tracep->declBus(c+5,"wr_en", false,-1, 7,0);
    tracep->declBus(c+6,"rd_en", false,-1, 7,0);
    tracep->declBus(c+7,"din", false,-1, 7,0);
    tracep->declBus(c+8,"offset", false,-1, 7,0);
    tracep->declBus(c+9,"dout", false,-1, 7,0);
    tracep->declBus(c+10,"address", false,-1, 7,0);
    tracep->pushNamePrefix("addrCounter ");
    tracep->declBus(c+15,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"incr", false,-1, 7,0);
    tracep->declBus(c+10,"count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sineRam ");
    tracep->declBus(c+16,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+11,"wr_en", false,-1);
    tracep->declBus(c+7,"din", false,-1, 7,0);
    tracep->declBus(c+12,"wr_addr", false,-1, 8,0);
    tracep->declBus(c+13,"rd_addr", false,-1, 8,0);
    tracep->declBit(c+14,"rd_en", false,-1);
    tracep->declBus(c+9,"dout", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_init_top(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_top\n"); );
    // Body
    Vsigdelay___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsigdelay___024root__trace_register(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsigdelay___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsigdelay___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsigdelay___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsigdelay___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullCData(oldp+4,(vlSelf->incr),8);
    bufp->fullCData(oldp+5,(vlSelf->wr_en),8);
    bufp->fullCData(oldp+6,(vlSelf->rd_en),8);
    bufp->fullCData(oldp+7,(vlSelf->din),8);
    bufp->fullCData(oldp+8,(vlSelf->offset),8);
    bufp->fullCData(oldp+9,(vlSelf->dout),8);
    bufp->fullCData(oldp+10,(vlSelf->sigdelay__DOT__address),8);
    bufp->fullBit(oldp+11,((1U & (IData)(vlSelf->wr_en))));
    bufp->fullSData(oldp+12,((0x1ffU & ((IData)(vlSelf->sigdelay__DOT__address) 
                                        + (IData)(vlSelf->offset)))),9);
    bufp->fullSData(oldp+13,(vlSelf->sigdelay__DOT__address),9);
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->rd_en))));
    bufp->fullIData(oldp+15,(8U),32);
    bufp->fullIData(oldp+16,(9U),32);
}
