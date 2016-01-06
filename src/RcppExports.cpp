// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// toa_mat_cpp
List toa_mat_cpp(const IntegerVector& year);
RcppExport SEXP netdiffuseR_toa_mat_cpp(SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type year(yearSEXP);
    __result = Rcpp::wrap(toa_mat_cpp(year));
    return __result;
END_RCPP
}
// edgelist_to_adjmat_cpp
arma::sp_mat edgelist_to_adjmat_cpp(const arma::mat& edgelist, NumericVector weights, int n, bool undirected, bool self, bool multiple);
RcppExport SEXP netdiffuseR_edgelist_to_adjmat_cpp(SEXP edgelistSEXP, SEXP weightsSEXP, SEXP nSEXP, SEXP undirectedSEXP, SEXP selfSEXP, SEXP multipleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    Rcpp::traits::input_parameter< bool >::type multiple(multipleSEXP);
    __result = Rcpp::wrap(edgelist_to_adjmat_cpp(edgelist, weights, n, undirected, self, multiple));
    return __result;
END_RCPP
}
// adjmat_to_edgelist_cpp
arma::mat adjmat_to_edgelist_cpp(const arma::sp_mat& adjmat, bool undirected);
RcppExport SEXP netdiffuseR_adjmat_to_edgelist_cpp(SEXP adjmatSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(adjmat_to_edgelist_cpp(adjmat, undirected));
    return __result;
END_RCPP
}
// adjmat_to_dyn_edgelist_cpp
arma::mat adjmat_to_dyn_edgelist_cpp(NumericVector adjmat, bool undirected);
RcppExport SEXP netdiffuseR_adjmat_to_dyn_edgelist_cpp(SEXP adjmatSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(adjmat_to_dyn_edgelist_cpp(adjmat, undirected));
    return __result;
END_RCPP
}
// toa_diff_cpp
IntegerMatrix toa_diff_cpp(const IntegerVector& year);
RcppExport SEXP netdiffuseR_toa_diff_cpp(SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type year(yearSEXP);
    __result = Rcpp::wrap(toa_diff_cpp(year));
    return __result;
END_RCPP
}
// isolated_cpp
arma::icolvec isolated_cpp(const arma::sp_mat& adjmat, bool undirected);
RcppExport SEXP netdiffuseR_isolated_cpp(SEXP adjmatSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(isolated_cpp(adjmat, undirected));
    return __result;
END_RCPP
}
// drop_isolated_cpp
arma::sp_mat drop_isolated_cpp(const arma::sp_mat& adjmat, arma::icolvec isolated, bool undirected);
RcppExport SEXP netdiffuseR_drop_isolated_cpp(SEXP adjmatSEXP, SEXP isolatedSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< arma::icolvec >::type isolated(isolatedSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(drop_isolated_cpp(adjmat, isolated, undirected));
    return __result;
END_RCPP
}
// infection_cpp
arma::mat infection_cpp(List graph, const arma::colvec& times, bool normalize, int K, double r, bool expdiscount, int n, int T);
RcppExport SEXP netdiffuseR_infection_cpp(SEXP graphSEXP, SEXP timesSEXP, SEXP normalizeSEXP, SEXP KSEXP, SEXP rSEXP, SEXP expdiscountSEXP, SEXP nSEXP, SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type times(timesSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< bool >::type expdiscount(expdiscountSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    __result = Rcpp::wrap(infection_cpp(graph, times, normalize, K, r, expdiscount, n, T));
    return __result;
END_RCPP
}
// susceptibility_cpp
arma::colvec susceptibility_cpp(List graph, const arma::colvec& times, bool normalize, int K, double r, bool expdiscount, int n, int T);
RcppExport SEXP netdiffuseR_susceptibility_cpp(SEXP graphSEXP, SEXP timesSEXP, SEXP normalizeSEXP, SEXP KSEXP, SEXP rSEXP, SEXP expdiscountSEXP, SEXP nSEXP, SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type times(timesSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< bool >::type expdiscount(expdiscountSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    __result = Rcpp::wrap(susceptibility_cpp(graph, times, normalize, K, r, expdiscount, n, T));
    return __result;
END_RCPP
}
// moran_cpp
double moran_cpp(const arma::colvec& x, const arma::sp_mat& w);
RcppExport SEXP netdiffuseR_moran_cpp(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type w(wSEXP);
    __result = Rcpp::wrap(moran_cpp(x, w));
    return __result;
END_RCPP
}
// seq_cpp
arma::vec seq_cpp(double from, double to, int lengthout);
RcppExport SEXP netdiffuseR_seq_cpp(SEXP fromSEXP, SEXP toSEXP, SEXP lengthoutSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type from(fromSEXP);
    Rcpp::traits::input_parameter< double >::type to(toSEXP);
    Rcpp::traits::input_parameter< int >::type lengthout(lengthoutSEXP);
    __result = Rcpp::wrap(seq_cpp(from, to, lengthout));
    return __result;
END_RCPP
}
// grid_distribution
List grid_distribution(const arma::vec& x, const arma::vec& y, int nlevels);
RcppExport SEXP netdiffuseR_grid_distribution(SEXP xSEXP, SEXP ySEXP, SEXP nlevelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nlevels(nlevelsSEXP);
    __result = Rcpp::wrap(grid_distribution(x, y, nlevels));
    return __result;
END_RCPP
}
// edges_coords
NumericMatrix edges_coords(const arma::sp_mat& graph, const arma::colvec& toa, const arma::colvec& x, const arma::colvec& y, const arma::colvec& vertex_cex, bool undirected, bool no_contemporary);
RcppExport SEXP netdiffuseR_edges_coords(SEXP graphSEXP, SEXP toaSEXP, SEXP xSEXP, SEXP ySEXP, SEXP vertex_cexSEXP, SEXP undirectedSEXP, SEXP no_contemporarySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type toa(toaSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type vertex_cex(vertex_cexSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type no_contemporary(no_contemporarySEXP);
    __result = Rcpp::wrap(edges_coords(graph, toa, x, y, vertex_cex, undirected, no_contemporary));
    return __result;
END_RCPP
}
// rgraph_ba_cpp
arma::sp_mat rgraph_ba_cpp(arma::sp_mat graph, arma::colvec dgr, int m, int t);
RcppExport SEXP netdiffuseR_rgraph_ba_cpp(SEXP graphSEXP, SEXP dgrSEXP, SEXP mSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type dgr(dgrSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    __result = Rcpp::wrap(rgraph_ba_cpp(graph, dgr, m, t));
    return __result;
END_RCPP
}
// rgraph_ba_new_cpp
arma::sp_mat rgraph_ba_new_cpp(int m0, int m, int t);
RcppExport SEXP netdiffuseR_rgraph_ba_new_cpp(SEXP m0SEXP, SEXP mSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    __result = Rcpp::wrap(rgraph_ba_new_cpp(m0, m, t));
    return __result;
END_RCPP
}
// persistant
double persistant(const List& graph, int i, int j, int n);
RcppExport SEXP netdiffuseR_persistant(SEXP graphSEXP, SEXP iSEXP, SEXP jSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(persistant(graph, i, j, n));
    return __result;
END_RCPP
}
// rgraph_er_cpp
arma::sp_mat rgraph_er_cpp(int n, double p, bool undirected, bool weighted, bool self);
RcppExport SEXP netdiffuseR_rgraph_er_cpp(SEXP nSEXP, SEXP pSEXP, SEXP undirectedSEXP, SEXP weightedSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    __result = Rcpp::wrap(rgraph_er_cpp(n, p, undirected, weighted, self));
    return __result;
END_RCPP
}
// rgraph_er_dyn_cpp
List rgraph_er_dyn_cpp(int n, int t, double p, bool undirected, bool weighted, bool self);
RcppExport SEXP netdiffuseR_rgraph_er_dyn_cpp(SEXP nSEXP, SEXP tSEXP, SEXP pSEXP, SEXP undirectedSEXP, SEXP weightedSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    __result = Rcpp::wrap(rgraph_er_dyn_cpp(n, t, p, undirected, weighted, self));
    return __result;
END_RCPP
}
// ring_lattice
arma::sp_mat ring_lattice(int n, int k);
RcppExport SEXP netdiffuseR_ring_lattice(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    __result = Rcpp::wrap(ring_lattice(n, k));
    return __result;
END_RCPP
}
// rewire_graph_cpp
arma::sp_mat rewire_graph_cpp(const arma::sp_mat& graph, double p, bool both_ends, bool self, bool multiple, bool undirected);
RcppExport SEXP netdiffuseR_rewire_graph_cpp(SEXP graphSEXP, SEXP pSEXP, SEXP both_endsSEXP, SEXP selfSEXP, SEXP multipleSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type both_ends(both_endsSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    Rcpp::traits::input_parameter< bool >::type multiple(multipleSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(rewire_graph_cpp(graph, p, both_ends, self, multiple, undirected));
    return __result;
END_RCPP
}
// select_egoalter_cpp
DataFrame select_egoalter_cpp(const arma::sp_mat& adjmat_t0, const arma::sp_mat& adjmat_t1, const NumericVector& adopt_t0, const NumericVector& adopt_t1);
RcppExport SEXP netdiffuseR_select_egoalter_cpp(SEXP adjmat_t0SEXP, SEXP adjmat_t1SEXP, SEXP adopt_t0SEXP, SEXP adopt_t1SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat_t0(adjmat_t0SEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat_t1(adjmat_t1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type adopt_t0(adopt_t0SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type adopt_t1(adopt_t1SEXP);
    __result = Rcpp::wrap(select_egoalter_cpp(adjmat_t0, adjmat_t1, adopt_t0, adopt_t1));
    return __result;
END_RCPP
}
// degree_cpp
arma::colvec degree_cpp(const arma::sp_mat& adjmat, const int& cmode, bool undirected, bool self);
RcppExport SEXP netdiffuseR_degree_cpp(SEXP adjmatSEXP, SEXP cmodeSEXP, SEXP undirectedSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< const int& >::type cmode(cmodeSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    __result = Rcpp::wrap(degree_cpp(adjmat, cmode, undirected, self));
    return __result;
END_RCPP
}
// exposure_cpp
arma::mat exposure_cpp(List graph, const arma::mat& cumadopt, int wtype, double v, bool undirected, bool normalized, int n, int T);
RcppExport SEXP netdiffuseR_exposure_cpp(SEXP graphSEXP, SEXP cumadoptSEXP, SEXP wtypeSEXP, SEXP vSEXP, SEXP undirectedSEXP, SEXP normalizedSEXP, SEXP nSEXP, SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type cumadopt(cumadoptSEXP);
    Rcpp::traits::input_parameter< int >::type wtype(wtypeSEXP);
    Rcpp::traits::input_parameter< double >::type v(vSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type normalized(normalizedSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    __result = Rcpp::wrap(exposure_cpp(graph, cumadopt, wtype, v, undirected, normalized, n, T));
    return __result;
END_RCPP
}
// cumulative_adopt_count_cpp
arma::mat cumulative_adopt_count_cpp(const arma::mat& cumadopt);
RcppExport SEXP netdiffuseR_cumulative_adopt_count_cpp(SEXP cumadoptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type cumadopt(cumadoptSEXP);
    __result = Rcpp::wrap(cumulative_adopt_count_cpp(cumadopt));
    return __result;
END_RCPP
}
// hazard_rate_cpp
arma::rowvec hazard_rate_cpp(const arma::mat& cumadopt);
RcppExport SEXP netdiffuseR_hazard_rate_cpp(SEXP cumadoptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type cumadopt(cumadoptSEXP);
    __result = Rcpp::wrap(hazard_rate_cpp(cumadopt));
    return __result;
END_RCPP
}
// threshold_cpp
arma::colvec threshold_cpp(const arma::mat& exposure, const arma::vec& times);
RcppExport SEXP netdiffuseR_threshold_cpp(SEXP exposureSEXP, SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type exposure(exposureSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type times(timesSEXP);
    __result = Rcpp::wrap(threshold_cpp(exposure, times));
    return __result;
END_RCPP
}
// struct_equiv_cpp
List struct_equiv_cpp(const arma::sp_mat& graph, double v, bool unscaled, bool inv, double invrep);
RcppExport SEXP netdiffuseR_struct_equiv_cpp(SEXP graphSEXP, SEXP vSEXP, SEXP unscaledSEXP, SEXP invSEXP, SEXP invrepSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< double >::type v(vSEXP);
    Rcpp::traits::input_parameter< bool >::type unscaled(unscaledSEXP);
    Rcpp::traits::input_parameter< bool >::type inv(invSEXP);
    Rcpp::traits::input_parameter< double >::type invrep(invrepSEXP);
    __result = Rcpp::wrap(struct_equiv_cpp(graph, v, unscaled, inv, invrep));
    return __result;
END_RCPP
}
