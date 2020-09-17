// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// ScoreHelper
std::vector<double> ScoreHelper(Eigen::SparseMatrix<double> snn, Eigen::MatrixXd query_pca, Eigen::MatrixXd query_dists, Eigen::MatrixXd corrected_nns, int k_snn, bool subtract_first_nn, bool display_progress);
RcppExport SEXP _SeuratMapper_ScoreHelper(SEXP snnSEXP, SEXP query_pcaSEXP, SEXP query_distsSEXP, SEXP corrected_nnsSEXP, SEXP k_snnSEXP, SEXP subtract_first_nnSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type snn(snnSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type query_pca(query_pcaSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type query_dists(query_distsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type corrected_nns(corrected_nnsSEXP);
    Rcpp::traits::input_parameter< int >::type k_snn(k_snnSEXP);
    Rcpp::traits::input_parameter< bool >::type subtract_first_nn(subtract_first_nnSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(ScoreHelper(snn, query_pca, query_dists, corrected_nns, k_snn, subtract_first_nn, display_progress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SeuratMapper_ScoreHelper", (DL_FUNC) &_SeuratMapper_ScoreHelper, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_SeuratMapper(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}