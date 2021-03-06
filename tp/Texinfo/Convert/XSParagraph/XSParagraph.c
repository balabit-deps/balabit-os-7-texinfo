/*
 * This file was generated automatically by ExtUtils::ParseXS version 3.18 from the
 * contents of XSParagraph.xs. Do not edit this file, edit XSParagraph.xs instead.
 *
 *    ANY CHANGES MADE HERE WILL BE LOST!
 *
 */

#line 1 "XSParagraph.xs"
#ifdef HAVE_CONFIG_H
  #include <config.h>
#endif

#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include "xspara.h"

#line 24 "XSParagraph.c"
#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#ifndef dVAR
#  define dVAR		dNOOP
#endif


/* This stuff is not part of the API! You have been warned. */
#ifndef PERL_VERSION_DECIMAL
#  define PERL_VERSION_DECIMAL(r,v,s) (r*1000000 + v*1000 + s)
#endif
#ifndef PERL_DECIMAL_VERSION
#  define PERL_DECIMAL_VERSION \
	  PERL_VERSION_DECIMAL(PERL_REVISION,PERL_VERSION,PERL_SUBVERSION)
#endif
#ifndef PERL_VERSION_GE
#  define PERL_VERSION_GE(r,v,s) \
	  (PERL_DECIMAL_VERSION >= PERL_VERSION_DECIMAL(r,v,s))
#endif
#ifndef PERL_VERSION_LE
#  define PERL_VERSION_LE(r,v,s) \
	  (PERL_DECIMAL_VERSION <= PERL_VERSION_DECIMAL(r,v,s))
#endif

/* XS_INTERNAL is the explicit static-linkage variant of the default
 * XS macro.
 *
 * XS_EXTERNAL is the same as XS_INTERNAL except it does not include
 * "STATIC", ie. it exports XSUB symbols. You probably don't want that
 * for anything but the BOOT XSUB.
 *
 * See XSUB.h in core!
 */


/* TODO: This might be compatible further back than 5.10.0. */
#if PERL_VERSION_GE(5, 10, 0) && PERL_VERSION_LE(5, 15, 1)
#  undef XS_EXTERNAL
#  undef XS_INTERNAL
#  if defined(__CYGWIN__) && defined(USE_DYNAMIC_LOADING)
#    define XS_EXTERNAL(name) __declspec(dllexport) XSPROTO(name)
#    define XS_INTERNAL(name) STATIC XSPROTO(name)
#  endif
#  if defined(__SYMBIAN32__)
#    define XS_EXTERNAL(name) EXPORT_C XSPROTO(name)
#    define XS_INTERNAL(name) EXPORT_C STATIC XSPROTO(name)
#  endif
#  ifndef XS_EXTERNAL
#    if defined(HASATTRIBUTE_UNUSED) && !defined(__cplusplus)
#      define XS_EXTERNAL(name) void name(pTHX_ CV* cv __attribute__unused__)
#      define XS_INTERNAL(name) STATIC void name(pTHX_ CV* cv __attribute__unused__)
#    else
#      ifdef __cplusplus
#        define XS_EXTERNAL(name) extern "C" XSPROTO(name)
#        define XS_INTERNAL(name) static XSPROTO(name)
#      else
#        define XS_EXTERNAL(name) XSPROTO(name)
#        define XS_INTERNAL(name) STATIC XSPROTO(name)
#      endif
#    endif
#  endif
#endif

/* perl >= 5.10.0 && perl <= 5.15.1 */


/* The XS_EXTERNAL macro is used for functions that must not be static
 * like the boot XSUB of a module. If perl didn't have an XS_EXTERNAL
 * macro defined, the best we can do is assume XS is the same.
 * Dito for XS_INTERNAL.
 */
#ifndef XS_EXTERNAL
#  define XS_EXTERNAL(name) XS(name)
#endif
#ifndef XS_INTERNAL
#  define XS_INTERNAL(name) XS(name)
#endif

/* Now, finally, after all this mess, we want an ExtUtils::ParseXS
 * internal macro that we're free to redefine for varying linkage due
 * to the EXPORT_XSUB_SYMBOLS XS keyword. This is internal, use
 * XS_EXTERNAL(name) or XS_INTERNAL(name) in your code if you need to!
 */

#undef XS_EUPXS
#if defined(PERL_EUPXS_ALWAYS_EXPORT)
#  define XS_EUPXS(name) XS_EXTERNAL(name)
#else
   /* default to internal */
#  define XS_EUPXS(name) XS_INTERNAL(name)
#endif

#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)

/* prototype to pass -Wmissing-prototypes */
STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params);

STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params)
{
    const GV *const gv = CvGV(cv);

    PERL_ARGS_ASSERT_CROAK_XS_USAGE;

    if (gv) {
        const char *const gvname = GvNAME(gv);
        const HV *const stash = GvSTASH(gv);
        const char *const hvname = stash ? HvNAME(stash) : NULL;

        if (hvname)
            Perl_croak(aTHX_ "Usage: %s::%s(%s)", hvname, gvname, params);
        else
            Perl_croak(aTHX_ "Usage: %s(%s)", gvname, params);
    } else {
        /* Pants. I don't think that it should be possible to get here. */
        Perl_croak(aTHX_ "Usage: CODE(0x%"UVxf")(%s)", PTR2UV(cv), params);
    }
}
#undef  PERL_ARGS_ASSERT_CROAK_XS_USAGE

#ifdef PERL_IMPLICIT_CONTEXT
#define croak_xs_usage(a,b)    S_croak_xs_usage(aTHX_ a,b)
#else
#define croak_xs_usage        S_croak_xs_usage
#endif

#endif

/* NOTE: the prototype of newXSproto() is different in versions of perls,
 * so we define a portable version of newXSproto()
 */
#ifdef newXS_flags
#define newXSproto_portable(name, c_impl, file, proto) newXS_flags(name, c_impl, file, proto, 0)
#else
#define newXSproto_portable(name, c_impl, file, proto) (PL_Sv=(SV*)newXS(name, c_impl, file), sv_setpv(PL_Sv, proto), (CV*)PL_Sv)
#endif /* !defined(newXS_flags) */

#line 166 "XSParagraph.c"

XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_init); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_init)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	int	RETVAL;
	dXSTARG;

	RETVAL = xspara_init();
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_set_state); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_set_state)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "state");
    {
	SV *	state = ST(0)
;

	xspara_set_state(state);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_new); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_new)
{
    dVAR; dXSARGS;
    if (items < 1)
       croak_xs_usage(cv,  "class, ...");
    {
	SV *	class = ST(0)
;
#line 47 "XSParagraph.xs"
        HV *pkg;
        HV *conf = 0;
        int id;
#line 214 "XSParagraph.c"
	SV *	RETVAL;
#line 51 "XSParagraph.xs"
        items--;
        if (items > 0)
          {
            if (SvROK(ST(1)) && SvTYPE(SvRV(ST(1))) == SVt_PVHV)
              conf = (HV *) SvRV(ST(1));
          }
        id = xspara_new (conf);

        /* Create a blessed integer, which the other functions
           need as their first argument. */
        pkg = gv_stashpv ("Texinfo::Convert::XSParagraph::XSParagraph", 0);
        RETVAL = newSViv (id);
#line 229 "XSParagraph.c"
	ST(0) = RETVAL;
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_end_line_count); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_end_line_count)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "paragraph");
    {
	SV *	paragraph = ST(0)
;
	int	RETVAL;
	dXSTARG;
#line 71 "XSParagraph.xs"
        xspara_set_state (paragraph);
        RETVAL = xspara_end_line_count ();
#line 251 "XSParagraph.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph__end_line); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph__end_line)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "paragraph");
    {
	SV *	paragraph = ST(0)
;
#line 80 "XSParagraph.xs"
        xspara_set_state (paragraph);
        xspara__end_line ();
#line 270 "XSParagraph.c"
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_end_line); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_end_line)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "paragraph");
    {
	SV *	paragraph = ST(0)
;
	char *	RETVAL;
	dXSTARG;
#line 87 "XSParagraph.xs"
        xspara_set_state (paragraph);
        RETVAL = xspara_end_line ();
#line 290 "XSParagraph.c"
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_get_pending); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_get_pending)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "paragraph");
    {
	SV *	paragraph = ST(0)
;
	char *	RETVAL;
	dXSTARG;
#line 96 "XSParagraph.xs"
        xspara_set_state (paragraph);
        RETVAL = xspara_get_pending ();
#line 311 "XSParagraph.c"
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_add_pending_word); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_add_pending_word)
{
    dVAR; dXSARGS;
    if (items < 1)
       croak_xs_usage(cv,  "paragraph, ...");
    {
	SV *	paragraph = ST(0)
;
#line 106 "XSParagraph.xs"
        int add_spaces = 0;
        char *retval;
#line 330 "XSParagraph.c"
	SV *	RETVAL;
#line 109 "XSParagraph.xs"
        items -= 1;
        if (items > 0)
          {
            if (SvOK(ST(1)))
              {
                add_spaces = (int)SvIV(ST(1));;
              }
          }
        xspara_set_state (paragraph);
        retval = xspara_add_pending_word (add_spaces);

        RETVAL = newSVpv (retval, 0);
        SvUTF8_on (RETVAL);
#line 346 "XSParagraph.c"
	ST(0) = RETVAL;
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_end); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_end)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "paragraph");
    {
	SV *	paragraph = ST(0)
;
#line 129 "XSParagraph.xs"
        char *retval;
#line 365 "XSParagraph.c"
	SV *	RETVAL;
#line 131 "XSParagraph.xs"
        xspara_set_state (paragraph);
        retval = xspara_end ();

        RETVAL = newSVpv (retval, 0);
        SvUTF8_on (RETVAL);
#line 373 "XSParagraph.c"
	ST(0) = RETVAL;
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_add_text); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_add_text)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "paragraph, text_in");
    {
	SV *	paragraph = ST(0)
;
	SV *	text_in = ST(1)
;
#line 145 "XSParagraph.xs"
        char *text;
        char *retval;
#line 395 "XSParagraph.c"
	SV *	RETVAL;
#line 148 "XSParagraph.xs"
        /* Always convert the input to UTF8 with sv_utf8_upgrade, so we can 
           process it properly in xspara_add_next. */
        if (!SvUTF8 (text_in))
          sv_utf8_upgrade (text_in);

        text = SvPV_nolen (text_in);

        xspara_set_state (paragraph);
        retval = xspara_add_text (text);

        RETVAL = newSVpv (retval, 0);
        SvUTF8_on (RETVAL);

#line 411 "XSParagraph.c"
	ST(0) = RETVAL;
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_add_next); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_add_next)
{
    dVAR; dXSARGS;
    if (items < 2)
       croak_xs_usage(cv,  "paragraph, text_in, ...");
    {
	SV *	paragraph = ST(0)
;
	SV *	text_in = ST(1)
;
#line 169 "XSParagraph.xs"
        char *text;
        STRLEN text_len;
        char *retval;
        SV *arg_in;
        int transparent = 0;
#line 436 "XSParagraph.c"
	SV *	RETVAL;
#line 175 "XSParagraph.xs"
        items -= 2;
        if (items > 0)
          {
            items--;
            arg_in = ST(2);
            if (SvOK(arg_in))
              transparent = (int)SvIV(arg_in);
          }

        /* Always convert the input to UTF8 with sv_utf8_upgrade, so we can 
           process it properly in xspara_add_next. */
        if (!SvUTF8 (text_in))
          sv_utf8_upgrade (text_in);
        text = SvPV (text_in, text_len);

        xspara_set_state (paragraph);
        retval = xspara_add_next (text, text_len, transparent);

        RETVAL = newSVpv (retval, 0);
        SvUTF8_on (RETVAL);

#line 460 "XSParagraph.c"
	ST(0) = RETVAL;
	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_remove_end_sentence); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_remove_end_sentence)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "paragraph");
    {
	SV *	paragraph = ST(0)
;
#line 204 "XSParagraph.xs"
        xspara_set_state (paragraph);
        xspara_remove_end_sentence ();
#line 480 "XSParagraph.c"
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_add_end_sentence); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_add_end_sentence)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "paragraph, value");
    {
	SV *	paragraph = ST(0)
;
	SV *	value = ST(1)
;
#line 212 "XSParagraph.xs"
        int intvalue = 0;
#line 499 "XSParagraph.c"
#line 214 "XSParagraph.xs"
        if (SvOK(value))
          intvalue = (int)SvIV(value);
        xspara_set_state (paragraph);
        xspara_add_end_sentence (intvalue);
#line 505 "XSParagraph.c"
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_allow_end_sentence); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_allow_end_sentence)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "paragraph");
    {
	SV *	paragraph = ST(0)
;
#line 223 "XSParagraph.xs"
        xspara_set_state (paragraph);
        xspara_allow_end_sentence ();
#line 523 "XSParagraph.c"
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_set_space_protection); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Convert__XSParagraph__XSParagraph_set_space_protection)
{
    dVAR; dXSARGS;
    if (items < 2)
       croak_xs_usage(cv,  "paragraph, space_protection_in, ...");
    {
	SV *	paragraph = ST(0)
;
	SV *	space_protection_in = ST(1)
;
#line 234 "XSParagraph.xs"
        int space_protection = -1;
        int ignore_columns = -1;
        int keep_end_lines = -1;
        int french_spacing = -1;
        int double_width_no_break = -1;
        SV *arg_in;
#line 547 "XSParagraph.c"
	char *	RETVAL;
	dXSTARG;
#line 241 "XSParagraph.xs"
        if (SvOK(space_protection_in))
          space_protection = (int)SvIV(space_protection_in);
        /* Get optional arguments from stack. */
        items -= 2;
        if (items > 0)
          {
            items--;
            arg_in = ST(2);
            if (SvOK(arg_in))
              ignore_columns = (int)SvIV(arg_in);
          }
        if (items > 0)
          {
            items--;
            arg_in = ST(3);
            if (SvOK(arg_in))
              keep_end_lines = (int)SvIV(arg_in);
          }
        if (items > 0)
          {
            items--;
            arg_in = ST(4);
            if (SvOK(arg_in))
              french_spacing = (int)SvIV(arg_in);
          }
        if (items > 0)
          {
            items--;
            arg_in = ST(5);
            if (SvOK(arg_in))
              double_width_no_break = (int)SvIV(arg_in);
          }

        xspara_set_state (paragraph);
        RETVAL = xspara_set_space_protection
          (space_protection, ignore_columns, keep_end_lines,
           french_spacing, double_width_no_break);
#line 588 "XSParagraph.c"
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS_EXTERNAL(boot_Texinfo__Convert__XSParagraph__XSParagraph); /* prototype to pass -Wmissing-prototypes */
XS_EXTERNAL(boot_Texinfo__Convert__XSParagraph__XSParagraph)
{
    dVAR; dXSARGS;
#if (PERL_REVISION == 5 && PERL_VERSION < 9)
    char* file = __FILE__;
#else
    const char* file = __FILE__;
#endif

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
#ifdef XS_APIVERSION_BOOTCHECK
    XS_APIVERSION_BOOTCHECK;
#endif
    XS_VERSION_BOOTCHECK;

        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::init", XS_Texinfo__Convert__XSParagraph__XSParagraph_init, file, "");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::set_state", XS_Texinfo__Convert__XSParagraph__XSParagraph_set_state, file, "$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::new", XS_Texinfo__Convert__XSParagraph__XSParagraph_new, file, "$;@");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::end_line_count", XS_Texinfo__Convert__XSParagraph__XSParagraph_end_line_count, file, "$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::_end_line", XS_Texinfo__Convert__XSParagraph__XSParagraph__end_line, file, "$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::end_line", XS_Texinfo__Convert__XSParagraph__XSParagraph_end_line, file, "$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::get_pending", XS_Texinfo__Convert__XSParagraph__XSParagraph_get_pending, file, "$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::add_pending_word", XS_Texinfo__Convert__XSParagraph__XSParagraph_add_pending_word, file, "$;@");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::end", XS_Texinfo__Convert__XSParagraph__XSParagraph_end, file, "$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::add_text", XS_Texinfo__Convert__XSParagraph__XSParagraph_add_text, file, "$$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::add_next", XS_Texinfo__Convert__XSParagraph__XSParagraph_add_next, file, "$$;@");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::remove_end_sentence", XS_Texinfo__Convert__XSParagraph__XSParagraph_remove_end_sentence, file, "$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::add_end_sentence", XS_Texinfo__Convert__XSParagraph__XSParagraph_add_end_sentence, file, "$$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::allow_end_sentence", XS_Texinfo__Convert__XSParagraph__XSParagraph_allow_end_sentence, file, "$");
        (void)newXSproto_portable("Texinfo::Convert::XSParagraph::XSParagraph::set_space_protection", XS_Texinfo__Convert__XSParagraph__XSParagraph_set_space_protection, file, "$$;@");
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

