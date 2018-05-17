// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ktau_cpp
double ktau_cpp(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& weights);
RcppExport SEXP _wdm_ktau_cpp(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(ktau_cpp(x, y, weights));
    return rcpp_result_gen;
END_RCPP
}
// hoeffd_cpp
double hoeffd_cpp(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& weights);
RcppExport SEXP _wdm_hoeffd_cpp(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(hoeffd_cpp(x, y, weights));
    return rcpp_result_gen;
END_RCPP
}
// prho_cpp
double prho_cpp(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& weights);
RcppExport SEXP _wdm_prho_cpp(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(prho_cpp(x, y, weights));
    return rcpp_result_gen;
END_RCPP
}
// srho_cpp
double srho_cpp(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& weights);
RcppExport SEXP _wdm_srho_cpp(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(srho_cpp(x, y, weights));
    return rcpp_result_gen;
END_RCPP
}
// bbeta_cpp
double bbeta_cpp(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& weights);
RcppExport SEXP _wdm_bbeta_cpp(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(bbeta_cpp(x, y, weights));
    return rcpp_result_gen;
END_RCPP
}
// rank_scores_cpp
std::vector<double> rank_scores_cpp(const std::vector<double>& x, const std::vector<double>& weights);
RcppExport SEXP _wdm_rank_scores_cpp(SEXP xSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(rank_scores_cpp(x, weights));
    return rcpp_result_gen;
END_RCPP
}
// bivariate_rank_cpp
std::vector<double> bivariate_rank_cpp(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& weights);
RcppExport SEXP _wdm_bivariate_rank_cpp(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(bivariate_rank_cpp(x, y, weights));
    return rcpp_result_gen;
END_RCPP
}
// wdm_cpp
double wdm_cpp(const std::vector<double>& x, const std::vector<double>& y, std::string method, const std::vector<double>& weights);
RcppExport SEXP _wdm_wdm_cpp(SEXP xSEXP, SEXP ySEXP, SEXP methodSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(wdm_cpp(x, y, method, weights));
    return rcpp_result_gen;
END_RCPP
}
// indeptest_cpp
double indeptest_cpp(const std::vector<double>& x, const std::vector<double>& y, std::string method, const std::vector<double>& weights);
RcppExport SEXP _wdm_indeptest_cpp(SEXP xSEXP, SEXP ySEXP, SEXP methodSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(indeptest_cpp(x, y, method, weights));
    return rcpp_result_gen;
END_RCPP
}
// test
void test();
RcppExport SEXP _wdm_test() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    test();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_wdm_ktau_cpp", (DL_FUNC) &_wdm_ktau_cpp, 3},
    {"_wdm_hoeffd_cpp", (DL_FUNC) &_wdm_hoeffd_cpp, 3},
    {"_wdm_prho_cpp", (DL_FUNC) &_wdm_prho_cpp, 3},
    {"_wdm_srho_cpp", (DL_FUNC) &_wdm_srho_cpp, 3},
    {"_wdm_bbeta_cpp", (DL_FUNC) &_wdm_bbeta_cpp, 3},
    {"_wdm_rank_scores_cpp", (DL_FUNC) &_wdm_rank_scores_cpp, 2},
    {"_wdm_bivariate_rank_cpp", (DL_FUNC) &_wdm_bivariate_rank_cpp, 3},
    {"_wdm_wdm_cpp", (DL_FUNC) &_wdm_wdm_cpp, 4},
    {"_wdm_indeptest_cpp", (DL_FUNC) &_wdm_indeptest_cpp, 4},
    {"_wdm_test", (DL_FUNC) &_wdm_test, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_wdm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
