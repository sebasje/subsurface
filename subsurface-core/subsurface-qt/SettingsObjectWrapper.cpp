#include "SettingsObjectWrapper.h"
#include <QSettings>
#include "../dive.h" // TODO: remove copy_string from dive.h


static QString tecDetails = QStringLiteral("TecDetails");

short PartialPressureGasSettings::showPo2() const
{
	return prefs.pp_graphs.po2;
}

short PartialPressureGasSettings::showPn2() const
{
	return prefs.pp_graphs.pn2;
}

short PartialPressureGasSettings::showPhe() const
{
	return prefs.pp_graphs.phe;
}

double PartialPressureGasSettings::po2Threshold() const
{
	return prefs.pp_graphs.po2_threshold;
}

double PartialPressureGasSettings::pn2Threshold() const
{
	return prefs.pp_graphs.pn2_threshold;
}

double PartialPressureGasSettings::pheThreshold() const
{
	return prefs.pp_graphs.phe_threshold;
}

void PartialPressureGasSettings::setShowPo2(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("po2graph", value);
	prefs.pp_graphs.po2 = value;
	emit showPo2Changed(value);
}

void PartialPressureGasSettings::setShowPn2(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("pn2graph", value);
	prefs.pp_graphs.pn2 = value;
	emit showPn2Changed(value);
}

void PartialPressureGasSettings::setShowPhe(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("phegraph", value);
	prefs.pp_graphs.phe = value;
	emit showPheChanged(value);
}

void PartialPressureGasSettings::setPo2Threshold(double value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("po2threshold", value);
	prefs.pp_graphs.po2_threshold = value;
	emit po2ThresholdChanged(value);
}

void PartialPressureGasSettings::setPn2Threshold(double value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("pn2threshold", value);
	prefs.pp_graphs.pn2_threshold = value;
	emit pn2ThresholdChanged(value);
}

void PartialPressureGasSettings::setPheThreshold(double value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("phethreshold", value);
	prefs.pp_graphs.phe_threshold = value;
	emit pheThresholdChanged(value);
}


double TechnicalDetailsSettings:: modp02() const
{
	return prefs.modpO2;
}

short TechnicalDetailsSettings::ead() const
{
	return prefs.ead;
}

short TechnicalDetailsSettings::dcceiling() const
{
	return prefs.dcceiling;
}

short TechnicalDetailsSettings::redceiling() const
{
	return prefs.redceiling;
}

short TechnicalDetailsSettings::calcceiling() const
{
	return prefs.calcceiling;
}

short TechnicalDetailsSettings::calcceiling3m() const
{
	return prefs.calcceiling3m;
}

short TechnicalDetailsSettings::calcalltissues() const
{
	return prefs.calcalltissues;
}

short TechnicalDetailsSettings::calcndltts() const
{
	return prefs.calcndltts;
}

short TechnicalDetailsSettings::gflow() const
{
	return prefs.gflow;
}

short TechnicalDetailsSettings::gfhigh() const
{
	return prefs.gfhigh;
}

short TechnicalDetailsSettings::hrgraph() const
{
	return prefs.hrgraph;
}

short TechnicalDetailsSettings::tankBar() const
{
	return prefs.tankbar;
}

short TechnicalDetailsSettings::percentageGraph() const
{
	return prefs.percentagegraph;
}

short TechnicalDetailsSettings::rulerGraph() const
{
	return prefs.rulergraph;
}

bool TechnicalDetailsSettings::showCCRSetpoint() const
{
	return prefs.show_ccr_setpoint;
}

bool TechnicalDetailsSettings::showCCRSensors() const
{
	return prefs.show_ccr_sensors;
}

short TechnicalDetailsSettings::zoomedPlot() const
{
	return prefs.zoomed_plot;
}

short TechnicalDetailsSettings::showSac() const
{
	return prefs.show_sac;
}

bool TechnicalDetailsSettings::gfLowAtMaxDepth() const
{
	return prefs.gf_low_at_maxdepth;
}

short TechnicalDetailsSettings::displayUnusedTanks() const
{
	return prefs.display_unused_tanks;
}

short TechnicalDetailsSettings::showAverageDepth() const
{
	return prefs.show_average_depth;
}

short int TechnicalDetailsSettings::mod() const
{
	return prefs.mod;
}

void TechnicalDetailsSettings::setModpO2(double value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("modpO2", value);
	prefs.modpO2 = value;
	emit modpO2Changed(value);
}

void TechnicalDetailsSettings::setEad(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("ead", value);
	prefs.ead = value;
	emit eadChanged(value);
}

void TechnicalDetailsSettings::setMod(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("mod", value);
	prefs.mod = value;
	emit modChanged(value);
}

void TechnicalDetailsSettings::setDcceiling(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("dcceiling", value);
	prefs.dcceiling = value;
	emit dcceilingChanged(value);
}

void TechnicalDetailsSettings::setRedceiling(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("redceiling", value);
	prefs.redceiling = value;
	emit redceilingChanged(value);
}

void TechnicalDetailsSettings::setCalcceiling(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("calcceiling", value);
	prefs.calcceiling = value;
	emit calcceilingChanged(value);
}

void TechnicalDetailsSettings::setCalcceiling3m(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("calcceiling3m", value);
	prefs.calcceiling3m = value;
	emit calcceiling3mChanged(value);
}

void TechnicalDetailsSettings::setCalcalltissues(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("calcalltissues", value);
	prefs.calcalltissues = value;
	emit calcalltissuesChanged(value);
}

void TechnicalDetailsSettings::setCalcndltts(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("calcndltts", value);
	prefs.calcndltts = value;
	emit calcndlttsChanged(value);
}

void TechnicalDetailsSettings::setGflow(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("gflow", value);
	prefs.gflow = value;
	set_gf(prefs.gflow, prefs.gfhigh, prefs.gf_low_at_maxdepth);
	emit gflowChanged(value);
}

void TechnicalDetailsSettings::setGfhigh(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("gfhigh", value);
	prefs.gfhigh = value;
	set_gf(prefs.gflow, prefs.gfhigh, prefs.gf_low_at_maxdepth);
	emit gfhighChanged(value);
}

void TechnicalDetailsSettings::setHRgraph(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("hrgraph", value);
	prefs.hrgraph = value;
	emit hrgraphChanged(value);
}

void TechnicalDetailsSettings::setTankBar(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("tankbar", value);
	prefs.tankbar = value;
	emit tankBarChanged(value);
}

void TechnicalDetailsSettings::setPercentageGraph(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("percentagegraph", value);
	prefs.percentagegraph = value;
	emit percentageGraphChanged(value);
}

void TechnicalDetailsSettings::setRulerGraph(short value)
{
	/* TODO: search for the QSettings of the RulerBar */
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("RulerBar", value);
	prefs.pp_graphs.phe_threshold = value;
	emit rulerGraphChanged(value);
}

void TechnicalDetailsSettings::setShowCCRSetpoint(bool value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("show_ccr_setpoint", value);
	prefs.show_ccr_setpoint = value;
	emit showCCRSetpointChanged(value);
}

void TechnicalDetailsSettings::setShowCCRSensors(bool value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("show_ccr_sensors", value);
	prefs.show_ccr_sensors = value;
	emit showCCRSensorsChanged(value);
}

void TechnicalDetailsSettings::setZoomedPlot(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("zoomed_plot", value);
	prefs.zoomed_plot = value;
	emit zoomedPlotChanged(value);
}

void TechnicalDetailsSettings::setShowSac(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("show_sac", value);
	prefs.show_sac = value;
	emit showSacChanged(value);
}

void TechnicalDetailsSettings::setGfLowAtMaxDepth(bool value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("gf_low_at_maxdepth", value);
	prefs.gf_low_at_maxdepth = value;
	set_gf(prefs.gflow, prefs.gfhigh, prefs.gf_low_at_maxdepth);
	emit gfLowAtMaxDepthChanged(value);
}

void TechnicalDetailsSettings::setDisplayUnusedTanks(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("display_unused_tanks", value);
	prefs.display_unused_tanks = value;
	emit displayUnusedTanksChanged(value);
}

void TechnicalDetailsSettings::setShowAverageDepth(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("show_average_depth", value);
	prefs.show_average_depth = value;
	emit showAverageDepthChanged(value);
}

FacebookSettings::FacebookSettings(QObject *parent) :
	group(QStringLiteral("WebApps")),
	subgroup(QStringLiteral("Facebook"))
{
}

QString FacebookSettings::accessToken() const
{
	return QString(prefs.facebook.access_token);
}

QString FacebookSettings::userId() const
{
	return QString(prefs.facebook.user_id);
}

QString FacebookSettings::albumId() const
{
	return QString(prefs.facebook.album_id);
}

void FacebookSettings::setAccessToken (const QString& value)
{
#if SAVE_FB_CREDENTIALS
	QSettings s;
	s.beginGroup(group);
	s.beginGroup(subgroup);
	s.setValue("ConnectToken", value);
#endif
	prefs.facebook.access_token = copy_string(qPrintable(value));
	emit accessTokenChanged(value);
}

void FacebookSettings::setUserId(const QString& value)
{
#if SAVE_FB_CREDENTIALS
	QSettings s;
	s.beginGroup(group);
	s.beginGroup(subgroup);
	s.setValue("UserId", value);
#endif
	prefs.facebook.user_id = copy_string(qPrintable(value));
	emit userIdChanged(value);
}

void FacebookSettings::setAlbumId(const QString& value)
{
#if SAVE_FB_CREDENTIALS
	QSettings s;
	s.beginGroup(group);
	s.beginGroup(subgroup);
	s.setValue("AlbumId", value);
#endif
	prefs.facebook.album_id = copy_string(qPrintable(value));
	emit albumIdChanged(value);
}


GeocodingPreferences::GeocodingPreferences(QObject *parent) :
	group(QStringLiteral("geocoding"))
{

}

bool GeocodingPreferences::enableGeocoding() const
{
	return prefs.geocoding.enable_geocoding;
}

bool GeocodingPreferences::parseDiveWithoutGps() const
{
	return prefs.geocoding.parse_dive_without_gps;
}

bool GeocodingPreferences::tagExistingDives() const
{
	return prefs.geocoding.tag_existing_dives;
}

taxonomy_category GeocodingPreferences::firstTaxonomyCategory() const
{
	return prefs.geocoding.category[0];
}

taxonomy_category GeocodingPreferences::secondTaxonomyCategory() const
{
	return prefs.geocoding.category[1];
}

taxonomy_category GeocodingPreferences::thirdTaxonomyCategory() const
{
	return prefs.geocoding.category[2];
}

void GeocodingPreferences::setEnableGeocoding(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("enable_geocoding", value);
	prefs.geocoding.enable_geocoding = value;
	emit enableGeocodingChanged(value);
}

void GeocodingPreferences::setParseDiveWithoutGps(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("parse_dives_without_gps", value);
	prefs.geocoding.parse_dive_without_gps = value;
	emit parseDiveWithoutGpsChanged(value);
}

void GeocodingPreferences::setTagExistingDives(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("tag_existing_dives", value);
	prefs.geocoding.tag_existing_dives = value;
	emit tagExistingDivesChanged(value);
}

void GeocodingPreferences::setFirstTaxonomyCategory(taxonomy_category value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("cat0", value);
	prefs.show_average_depth = value;
	emit firstTaxonomyCategoryChanged(value);
}

void GeocodingPreferences::setSecondTaxonomyCategory(taxonomy_category value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("cat1", value);
	prefs.show_average_depth = value;
	emit secondTaxonomyCategoryChanged(value);
}

void GeocodingPreferences::setThirdTaxonomyCategory(taxonomy_category value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("cat2", value);
	prefs.show_average_depth = value;
	emit thirdTaxonomyCategoryChanged(value);
}

ProxySettings::ProxySettings(QObject *parent) :
	group(QStringLiteral("Network"))
{
}

int ProxySettings::type() const
{
	return prefs.proxy_type;
}

QString ProxySettings::host() const
{
	return prefs.proxy_host;
}

int ProxySettings::port() const
{
	return prefs.proxy_port;
}

short ProxySettings::auth() const
{
	return prefs.proxy_auth;
}

QString ProxySettings::user() const
{
	return prefs.proxy_user;
}

QString ProxySettings::pass() const
{
	return prefs.proxy_pass;
}

void ProxySettings::setType(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("proxy_type", value);
	prefs.proxy_type = value;
	emit typeChanged(value);
}

void ProxySettings::setHost(const QString& value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("proxy_host", value);
	free(prefs.proxy_host);
	prefs.proxy_host = copy_string(qPrintable(value));;
	emit hostChanged(value);
}

void ProxySettings::setPort(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("proxy_port", value);
	prefs.proxy_port = value;
	emit portChanged(value);
}

void ProxySettings::setAuth(short value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("proxy_auth", value);
	prefs.proxy_auth = value;
	emit authChanged(value);
}

void ProxySettings::setUser(const QString& value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("proxy_user", value);
	free(prefs.proxy_user);
	prefs.proxy_user = copy_string(qPrintable(value));
	emit userChanged(value);
}

void ProxySettings::setPass(const QString& value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("proxy_pass", value);
	free(prefs.proxy_pass);
	prefs.proxy_pass = copy_string(qPrintable(value));
	emit passChanged(value);
}

CloudStorageSettings::CloudStorageSettings(QObject *parent) :
	group(QStringLiteral("CloudStorage"))
{

}

QString CloudStorageSettings::password() const
{
	return QString(prefs.cloud_storage_password);
}

QString CloudStorageSettings::newPassword() const
{
	return QString(prefs.cloud_storage_newpassword);
}

QString CloudStorageSettings::email() const
{
	return QString(prefs.cloud_storage_email);
}

QString CloudStorageSettings::emailEncoded() const
{
	return QString(prefs.cloud_storage_email_encoded);
}

bool CloudStorageSettings::savePasswordLocal() const
{
	return prefs.save_password_local;
}

short CloudStorageSettings::verificationStatus() const
{
	return prefs.cloud_verification_status;
}

bool CloudStorageSettings::backgroundSync() const
{
	return prefs.cloud_background_sync;
}

QString CloudStorageSettings::userId() const
{
	return QString(prefs.userid);
}

QString CloudStorageSettings::baseUrl() const
{
	return QString(prefs.cloud_base_url);
}

QString CloudStorageSettings::gitUrl() const
{
	return QString(prefs.cloud_git_url);
}

void CloudStorageSettings::setPassword(const QString& value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("password", value);
	free(prefs.proxy_pass);
	prefs.proxy_pass = copy_string(qPrintable(value));
	emit passwordChanged(value);
}

void CloudStorageSettings::setNewPassword(const QString& value)
{
	/*TODO: This looks like wrong, but 'new password' is not saved on disk, why it's on prefs? */
	free(prefs.cloud_storage_newpassword);
	prefs.cloud_storage_newpassword = copy_string(qPrintable(value));
	emit newPasswordChanged(value);
}

void CloudStorageSettings::setEmail(const QString& value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("email", value);
	free(prefs.cloud_storage_email);
	prefs.cloud_storage_email = copy_string(qPrintable(value));
	emit emailChanged(value);
}

void CloudStorageSettings::setUserId(const QString& value)
{
	//WARNING: UserId is stored outside of any group, but it belongs to Cloud Storage.
	QSettings s;
	s.setValue("subsurface_webservice_uid", value);
	free(prefs.userid);
	prefs.userid = copy_string(qPrintable(value));
	emit userIdChanged(value);
}

void CloudStorageSettings::setEmailEncoded(const QString& value)
{
	/*TODO: This looks like wrong, but 'email encoded' is not saved on disk, why it's on prefs? */
	free(prefs.cloud_storage_email_encoded);
	prefs.cloud_storage_email_encoded = copy_string(qPrintable(value));
	emit emailEncodedChanged(value);
}

void CloudStorageSettings::setSavePasswordLocal(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("save_password_local", value);
	prefs.save_password_local = value;
	emit savePasswordLocalChanged(value);
}

void CloudStorageSettings::setVerificationStatus(short value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("cloud_verification_status", value);
	prefs.cloud_verification_status = value;
	emit verificationStatusChanged(value);
}

void CloudStorageSettings::setBackgroundSync(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("cloud_background_sync", value);
	prefs.cloud_background_sync = value;
	emit backgroundSyncChanged(value);
}

void CloudStorageSettings::setBaseUrl(const QString& value)
{
	free(prefs.cloud_base_url);
	free(prefs.cloud_git_url);
	prefs.cloud_base_url = copy_string(qPrintable(value));
	prefs.cloud_git_url = strdup(qPrintable(QString(prefs.cloud_base_url) + "/git"));
}

void CloudStorageSettings::setCloudUrl(const QString& value) /* no-op */
{
	Q_UNUSED(value);
}

DivePlannerSettings::DivePlannerSettings(QObject *parent) :
	QObject(parent),
	group(QStringLiteral("Planner"))
{
}

bool DivePlannerSettings::lastStop() const
{
	return prefs.last_stop;
}

bool DivePlannerSettings::verbatimPlan() const
{
	return prefs.verbatim_plan;
}

bool DivePlannerSettings::displayRuntime() const
{
	return prefs.display_runtime;
}

bool DivePlannerSettings::displayDuration() const
{
	return prefs.display_duration;
}

bool DivePlannerSettings::displayTransitions() const
{
	return prefs.display_transitions;
}

bool DivePlannerSettings::doo2breaks() const
{
	return prefs.doo2breaks;
}

bool DivePlannerSettings::dropStoneMode() const
{
	return prefs.drop_stone_mode;
}

bool DivePlannerSettings::safetyStop() const
{
	return prefs.safetystop;
}

bool DivePlannerSettings::switchAtRequiredStop() const
{
	return prefs.switch_at_req_stop;
}

int DivePlannerSettings::ascrate75() const
{
	return prefs.ascrate75;
}

int DivePlannerSettings::ascrate50() const
{
	return prefs.ascrate50;
}

int DivePlannerSettings::ascratestops() const
{
	return prefs.ascratestops;
}

int DivePlannerSettings::ascratelast6m() const
{
	return prefs.ascratelast6m;
}

int DivePlannerSettings::descrate() const
{
	return prefs.descrate;
}

int DivePlannerSettings::bottompo2() const
{
	return prefs.bottompo2;
}

int DivePlannerSettings::decopo2() const
{
	return prefs.decopo2;
}

int DivePlannerSettings::reserveGas() const
{
	return prefs.reserve_gas;
}

int DivePlannerSettings::minSwitchDuration() const
{
	return prefs.min_switch_duration;
}

int DivePlannerSettings::bottomSac() const
{
	return prefs.bottomsac;
}

int DivePlannerSettings::decoSac() const
{
	return prefs.decosac;
}

short DivePlannerSettings::conservatismLevel() const
{
	return prefs.conservatism_level;
}

deco_mode DivePlannerSettings::decoMode() const
{
	return prefs.deco_mode;
}

void DivePlannerSettings::setLastStop(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("last_stop", value);
	prefs.last_stop = value;
	emit lastStopChanged(value);
}

void DivePlannerSettings::setVerbatimPlan(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("verbatim_plan", value);
	prefs.verbatim_plan = value;
	emit verbatimPlanChanged(value);
}

void DivePlannerSettings::setDisplayRuntime(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("display_runtime", value);
	prefs.display_runtime = value;
	emit displayRuntimeChanged(value);
}

void DivePlannerSettings::setDisplayDuration(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("display_duration", value);
	prefs.display_duration = value;
	emit displayDurationChanged(value);
}

void DivePlannerSettings::setDisplayTransitions(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("display_transitions", value);
	prefs.display_transitions = value;
	emit displayTransitionsChanged(value);
}

void DivePlannerSettings::setDoo2breaks(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("doo2breaks", value);
	prefs.doo2breaks = value;
	emit doo2breaksChanged(value);
}

void DivePlannerSettings::setDropStoneMode(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("drop_stone_mode", value);
	prefs.drop_stone_mode = value;
	emit dropStoneModeChanged(value);
}

void DivePlannerSettings::setSafetyStop(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("safetystop", value);
	prefs.safetystop = value;
	emit safetyStopChanged(value);
}

void DivePlannerSettings::setSwitchAtRequiredStop(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("switch_at_req_stop", value);
	prefs.switch_at_req_stop = value;
	emit switchAtRequiredStopChanged(value);
}

void DivePlannerSettings::setAscrate75(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("ascrate75", value);
	prefs.ascrate75 = value;
	emit ascrate75Changed(value);
}

void DivePlannerSettings::setAscrate50(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("ascrate50", value);
	prefs.ascrate50 = value;
	emit ascrate50Changed(value);
}

void DivePlannerSettings::setAscratestops(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("ascratestops", value);
	prefs.ascratestops = value;
	emit ascratestopsChanged(value);
}

void DivePlannerSettings::setAscratelast6m(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("ascratelast6m", value);
	prefs.ascratelast6m = value;
	emit ascratelast6mChanged();
}

void DivePlannerSettings::setDescrate(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("descrate", value);
	prefs.descrate = value;
	emit descrateChanged(value);
}

void DivePlannerSettings::setBottompo2(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("bottompo2", value);
	prefs.bottompo2 = value;
	emit bottompo2Changed(value);
}

void DivePlannerSettings::setDecopo2(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("decopo2", value);
	prefs.decopo2 = value;
	emit decopo2Changed(value);
}

void DivePlannerSettings::setReserveGas(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("reserve_gas", value);
	prefs.reserve_gas = value;
	emit reserveGasChanged(value);
}

void DivePlannerSettings::setMinSwitchDuration(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("min_switch_duration", value);
	prefs.min_switch_duration = value;
	emit minSwitchDurationChanged(value);
}

void DivePlannerSettings::setBottomSac(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("bottomsac", value);
	prefs.bottomsac = value;
	emit bottomSacChanged(value);
}

void DivePlannerSettings::setSecoSac(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("decosac", value);
	prefs.decosac = value;
	emit decoSacChanged(value);
}

void DivePlannerSettings::setConservatismLevel(int value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("conservatism", value);
	prefs.conservatism_level = value;
	emit conservatismLevelChanged(value);
}

void DivePlannerSettings::setDecoMode(deco_mode value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("deco_mode", value);
	prefs.deco_mode = value;
	emit decoModeChanged(value);
}

UnitsSettings::UnitsSettings(QObject *parent = 0) :
	QObject(parent),
	group(QStringLiteral("Units"))
{

}

units::length UnitsSettings::length() const
{
	return prefs.units.length;
}

units::pressure UnitsSettings::pressure() const
{
	return prefs.units.pressure;
}

units::volume UnitsSettings::volume() const
{
	return prefs.units.volume;
}

units::temperature UnitsSettings::temperature() const
{
	return prefs.units.temperature;
}

units::weight UnitsSettings::weight() const
{
	return prefs.units.weight;
}

units::vertical_speed_time UnitsSettings::verticalSpeedTime() const
{
	return prefs.units.vertical_speed_time;
}

QString UnitsSettings::unitSystem() const
{
	return prefs.unit_system;
}

bool UnitsSettings::coordinatesTraditional() const
{
	return prefs.coordinates_traditional;
}

void UnitsSettings::setLength(units::length value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("length", value);
	prefs.units.length = value;
	emit lengthChanged(value);
}

void UnitsSettings::setPressure(units::pressure value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("pressure", value);
	prefs.units.pressure = value;
	emit pressureChanged(value);
}

void UnitsSettings::setVolume(units::volume value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("volume", value);
	prefs.units.volume = value;
	emit volumeChanged(value);
}

void UnitsSettings::setTemperature(units::temperature value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("temperature", value);
	prefs.units.temperature = value;
	emit temperatureChanged(value);
}

void UnitsSettings::setWeight(units::weight value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("weight", value);
	prefs.units.weight = value;
	emit weightChanged(value);
}

void UnitsSettings::setVerticalSpeedTime(units::vertical_speed_time value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("vertical_speed_time", value);
	prefs.units.vertical_speed_time = value;
	emit verticalSpeedTimeChanged(value);
}

void UnitsSettings::setCoordinatesTraditional(bool value)
{
	QSettings s;
	s.setValue("coordinates", value);
	prefs.coordinates_traditional = value.;
	emit coordinatesTraditionalChanged(value);
}

void UnitsSettings::setUnitSystem(const QString& value)
{
	QSettings s;
	s.setValue("unit_system", value);
	prefs.unit_system = value;

	if (value == QStringLiteral("metric")) {
		prefs.unit_system = METRIC;
		prefs.units = SI_units;
	} else if (value == QStringLiteral("imperial")) {
		prefs.unit_system = IMPERIAL;
		prefs.units = IMPERIAL_units;
	} else {
		prefs.unit_system = PERSONALIZE;
	}

	emit unitSystemChanged(value);
	// TODO: emit the other values here?
}
