#include "config.h"

#ifdef CHINESE
static const u8 sHardyNatureName[] = _("勤奋");
static const u8 sLonelyNatureName[] = _("怕寂寞");
static const u8 sBraveNatureName[] = _("勇敢");
static const u8 sAdamantNatureName[] = _("固执");
static const u8 sNaughtyNatureName[] = _("顽皮");
static const u8 sBoldNatureName[] = _("大胆");
static const u8 sDocileNatureName[] = _("坦率");
static const u8 sRelaxedNatureName[] = _("悠闲");
static const u8 sImpishNatureName[] = _("淘气");
static const u8 sLaxNatureName[] = _("乐天");
static const u8 sTimidNatureName[] = _("胆小");
static const u8 sHastyNatureName[] = _("急躁");
static const u8 sSeriousNatureName[] = _("认真");
static const u8 sJollyNatureName[] = _("爽朗");
static const u8 sNaiveNatureName[] = _("天真");
static const u8 sModestNatureName[] = _("内敛");
static const u8 sMildNatureName[] = _("慢吞吞");
static const u8 sQuietNatureName[] = _("冷静");
static const u8 sBashfulNatureName[] = _("害羞");
static const u8 sRashNatureName[] = _("马虎");
static const u8 sCalmNatureName[] = _("温和");
static const u8 sGentleNatureName[] = _("温顺");
static const u8 sSassyNatureName[] = _("自大");
static const u8 sCarefulNatureName[] = _("慎重");
static const u8 sQuirkyNatureName[] = _("浮躁");
#else
static const u8 sHardyNatureName[] = _("Hardy");
static const u8 sLonelyNatureName[] = _("Lonely");
static const u8 sBraveNatureName[] = _("Brave");
static const u8 sAdamantNatureName[] = _("Adamant");
static const u8 sNaughtyNatureName[] = _("Naughty");
static const u8 sBoldNatureName[] = _("Bold");
static const u8 sDocileNatureName[] = _("Docile");
static const u8 sRelaxedNatureName[] = _("Relaxed");
static const u8 sImpishNatureName[] = _("Impish");
static const u8 sLaxNatureName[] = _("Lax");
static const u8 sTimidNatureName[] = _("Timid");
static const u8 sHastyNatureName[] = _("Hasty");
static const u8 sSeriousNatureName[] = _("Serious");
static const u8 sJollyNatureName[] = _("Jolly");
static const u8 sNaiveNatureName[] = _("Naive");
static const u8 sModestNatureName[] = _("Modest");
static const u8 sMildNatureName[] = _("Mild");
static const u8 sQuietNatureName[] = _("Quiet");
static const u8 sBashfulNatureName[] = _("Bashful");
static const u8 sRashNatureName[] = _("Rash");
static const u8 sCalmNatureName[] = _("Calm");
static const u8 sGentleNatureName[] = _("Gentle");
static const u8 sSassyNatureName[] = _("Sassy");
static const u8 sCarefulNatureName[] = _("Careful");
static const u8 sQuirkyNatureName[] = _("Quirky");
#endif

const u8 *const gNatureNamePointers[NUM_NATURES] = 
{
    [NATURE_HARDY] = sHardyNatureName,
    [NATURE_LONELY] = sLonelyNatureName,
    [NATURE_BRAVE] = sBraveNatureName,
    [NATURE_ADAMANT] = sAdamantNatureName,
    [NATURE_NAUGHTY] = sNaughtyNatureName,
    [NATURE_BOLD] = sBoldNatureName,
    [NATURE_DOCILE] = sDocileNatureName,
    [NATURE_RELAXED] = sRelaxedNatureName,
    [NATURE_IMPISH] = sImpishNatureName,
    [NATURE_LAX] = sLaxNatureName,
    [NATURE_TIMID] = sTimidNatureName,
    [NATURE_HASTY] = sHastyNatureName,
    [NATURE_SERIOUS] = sSeriousNatureName,
    [NATURE_JOLLY] = sJollyNatureName,
    [NATURE_NAIVE] = sNaiveNatureName,
    [NATURE_MODEST] = sModestNatureName,
    [NATURE_MILD] = sMildNatureName,
    [NATURE_QUIET] = sQuietNatureName,
    [NATURE_BASHFUL] = sBashfulNatureName,
    [NATURE_RASH] = sRashNatureName,
    [NATURE_CALM] = sCalmNatureName,
    [NATURE_GENTLE] = sGentleNatureName,
    [NATURE_SASSY] = sSassyNatureName,
    [NATURE_CAREFUL] = sCarefulNatureName,
    [NATURE_QUIRKY] = sQuirkyNatureName,
};
