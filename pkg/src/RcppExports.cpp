// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// runMatch
List runMatch(Rcpp::List students, Rcpp::List programs, Rcpp::List couples);
RcppExport SEXP _matchingMarkets_runMatch(SEXP studentsSEXP, SEXP programsSEXP, SEXP couplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type students(studentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type programs(programsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type couples(couplesSEXP);
    rcpp_result_gen = Rcpp::wrap(runMatch(students, programs, couples));
    return rcpp_result_gen;
END_RCPP
}
// stabit2Mat0
List stabit2Mat0(Rcpp::List Cr, Rcpp::List Cmatchr, Rcpp::List Sr, Rcpp::List Smatchr, Rcpp::List Dr, Rcpp::List dr, Rcpp::List Mr, Rcpp::List Hr, arma::colvec nCollegesr, arma::colvec nStudentsr, Rcpp::List CCr, Rcpp::List SSr, Rcpp::List CCmatchr, Rcpp::List SSmatchr, Rcpp::List Lr, Rcpp::List studentIdsr, Rcpp::List collegeIdr, Rcpp::List cbetterr, Rcpp::List cworser, Rcpp::List sbetterr, Rcpp::List sworser, Rcpp::List cbetterNAr, Rcpp::List cworseNAr, Rcpp::List sbetterNAr, Rcpp::List sworseNAr, int n, int N, int niter, int T, int thin, bool display_progress);
RcppExport SEXP _matchingMarkets_stabit2Mat0(SEXP CrSEXP, SEXP CmatchrSEXP, SEXP SrSEXP, SEXP SmatchrSEXP, SEXP DrSEXP, SEXP drSEXP, SEXP MrSEXP, SEXP HrSEXP, SEXP nCollegesrSEXP, SEXP nStudentsrSEXP, SEXP CCrSEXP, SEXP SSrSEXP, SEXP CCmatchrSEXP, SEXP SSmatchrSEXP, SEXP LrSEXP, SEXP studentIdsrSEXP, SEXP collegeIdrSEXP, SEXP cbetterrSEXP, SEXP cworserSEXP, SEXP sbetterrSEXP, SEXP sworserSEXP, SEXP cbetterNArSEXP, SEXP cworseNArSEXP, SEXP sbetterNArSEXP, SEXP sworseNArSEXP, SEXP nSEXP, SEXP NSEXP, SEXP niterSEXP, SEXP TSEXP, SEXP thinSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Cr(CrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Cmatchr(CmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Sr(SrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Smatchr(SmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Dr(DrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dr(drSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Mr(MrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Hr(HrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nCollegesr(nCollegesrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nStudentsr(nStudentsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCr(CCrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type SSr(SSrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCmatchr(CCmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type SSmatchr(SSmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Lr(LrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type studentIdsr(studentIdsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type collegeIdr(collegeIdrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cbetterr(cbetterrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cworser(cworserSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sbetterr(sbetterrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sworser(sworserSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cbetterNAr(cbetterNArSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cworseNAr(cworseNArSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sbetterNAr(sbetterNArSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sworseNAr(sworseNArSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(stabit2Mat0(Cr, Cmatchr, Sr, Smatchr, Dr, dr, Mr, Hr, nCollegesr, nStudentsr, CCr, SSr, CCmatchr, SSmatchr, Lr, studentIdsr, collegeIdr, cbetterr, cworser, sbetterr, sworser, cbetterNAr, cworseNAr, sbetterNAr, sworseNAr, n, N, niter, T, thin, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// stabit2Mat1
List stabit2Mat1(Rcpp::List Cr, Rcpp::List Cmatchr, Rcpp::List Sr, Rcpp::List Smatchr, Rcpp::List Dr, Rcpp::List dr, Rcpp::List Mr, Rcpp::List Hr, arma::colvec nCollegesr, arma::colvec nStudentsr, Rcpp::List CCr, Rcpp::List SSr, Rcpp::List CCmatchr, Rcpp::List SSmatchr, Rcpp::List Lr, Rcpp::List studentIdsr, Rcpp::List collegeIdr, int n, int N, int niter, int T, int thin, bool display_progress);
RcppExport SEXP _matchingMarkets_stabit2Mat1(SEXP CrSEXP, SEXP CmatchrSEXP, SEXP SrSEXP, SEXP SmatchrSEXP, SEXP DrSEXP, SEXP drSEXP, SEXP MrSEXP, SEXP HrSEXP, SEXP nCollegesrSEXP, SEXP nStudentsrSEXP, SEXP CCrSEXP, SEXP SSrSEXP, SEXP CCmatchrSEXP, SEXP SSmatchrSEXP, SEXP LrSEXP, SEXP studentIdsrSEXP, SEXP collegeIdrSEXP, SEXP nSEXP, SEXP NSEXP, SEXP niterSEXP, SEXP TSEXP, SEXP thinSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Cr(CrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Cmatchr(CmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Sr(SrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Smatchr(SmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Dr(DrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dr(drSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Mr(MrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Hr(HrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nCollegesr(nCollegesrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nStudentsr(nStudentsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCr(CCrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type SSr(SSrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCmatchr(CCmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type SSmatchr(SSmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Lr(LrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type studentIdsr(studentIdsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type collegeIdr(collegeIdrSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(stabit2Mat1(Cr, Cmatchr, Sr, Smatchr, Dr, dr, Mr, Hr, nCollegesr, nStudentsr, CCr, SSr, CCmatchr, SSmatchr, Lr, studentIdsr, collegeIdr, n, N, niter, T, thin, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// stabit2Sel0
List stabit2Sel0(Rcpp::List Yr, Rcpp::List Xmatchr, Rcpp::List Cr, Rcpp::List Cmatchr, Rcpp::List Sr, Rcpp::List Smatchr, Rcpp::List Dr, Rcpp::List dr, Rcpp::List Mr, Rcpp::List Hr, arma::colvec nCollegesr, arma::colvec nStudentsr, Rcpp::List XXmatchr, Rcpp::List CCr, Rcpp::List SSr, Rcpp::List CCmatchr, Rcpp::List SSmatchr, Rcpp::List Lr, Rcpp::List studentIdsr, Rcpp::List collegeIdr, Rcpp::List cbetterr, Rcpp::List cworser, Rcpp::List sbetterr, Rcpp::List sworser, Rcpp::List cbetterNAr, Rcpp::List cworseNAr, Rcpp::List sbetterNAr, Rcpp::List sworseNAr, int n, int N, bool binary, int niter, int T, int censored, int thin, bool display_progress);
RcppExport SEXP _matchingMarkets_stabit2Sel0(SEXP YrSEXP, SEXP XmatchrSEXP, SEXP CrSEXP, SEXP CmatchrSEXP, SEXP SrSEXP, SEXP SmatchrSEXP, SEXP DrSEXP, SEXP drSEXP, SEXP MrSEXP, SEXP HrSEXP, SEXP nCollegesrSEXP, SEXP nStudentsrSEXP, SEXP XXmatchrSEXP, SEXP CCrSEXP, SEXP SSrSEXP, SEXP CCmatchrSEXP, SEXP SSmatchrSEXP, SEXP LrSEXP, SEXP studentIdsrSEXP, SEXP collegeIdrSEXP, SEXP cbetterrSEXP, SEXP cworserSEXP, SEXP sbetterrSEXP, SEXP sworserSEXP, SEXP cbetterNArSEXP, SEXP cworseNArSEXP, SEXP sbetterNArSEXP, SEXP sworseNArSEXP, SEXP nSEXP, SEXP NSEXP, SEXP binarySEXP, SEXP niterSEXP, SEXP TSEXP, SEXP censoredSEXP, SEXP thinSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Yr(YrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Xmatchr(XmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Cr(CrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Cmatchr(CmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Sr(SrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Smatchr(SmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Dr(DrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dr(drSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Mr(MrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Hr(HrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nCollegesr(nCollegesrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nStudentsr(nStudentsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type XXmatchr(XXmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCr(CCrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type SSr(SSrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCmatchr(CCmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type SSmatchr(SSmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Lr(LrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type studentIdsr(studentIdsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type collegeIdr(collegeIdrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cbetterr(cbetterrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cworser(cworserSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sbetterr(sbetterrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sworser(sworserSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cbetterNAr(cbetterNArSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cworseNAr(cworseNArSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sbetterNAr(sbetterNArSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sworseNAr(sworseNArSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type censored(censoredSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(stabit2Sel0(Yr, Xmatchr, Cr, Cmatchr, Sr, Smatchr, Dr, dr, Mr, Hr, nCollegesr, nStudentsr, XXmatchr, CCr, SSr, CCmatchr, SSmatchr, Lr, studentIdsr, collegeIdr, cbetterr, cworser, sbetterr, sworser, cbetterNAr, cworseNAr, sbetterNAr, sworseNAr, n, N, binary, niter, T, censored, thin, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// stabit2Sel1
List stabit2Sel1(Rcpp::List Yr, Rcpp::List Xmatchr, Rcpp::List Cr, Rcpp::List Cmatchr, Rcpp::List Sr, Rcpp::List Smatchr, Rcpp::List Dr, Rcpp::List dr, Rcpp::List Mr, Rcpp::List Hr, arma::colvec nCollegesr, arma::colvec nStudentsr, Rcpp::List XXmatchr, Rcpp::List CCr, Rcpp::List SSr, Rcpp::List CCmatchr, Rcpp::List SSmatchr, Rcpp::List Lr, Rcpp::List studentIdsr, Rcpp::List collegeIdr, int n, int N, bool binary, int niter, int T, int censored, int thin, bool display_progress);
RcppExport SEXP _matchingMarkets_stabit2Sel1(SEXP YrSEXP, SEXP XmatchrSEXP, SEXP CrSEXP, SEXP CmatchrSEXP, SEXP SrSEXP, SEXP SmatchrSEXP, SEXP DrSEXP, SEXP drSEXP, SEXP MrSEXP, SEXP HrSEXP, SEXP nCollegesrSEXP, SEXP nStudentsrSEXP, SEXP XXmatchrSEXP, SEXP CCrSEXP, SEXP SSrSEXP, SEXP CCmatchrSEXP, SEXP SSmatchrSEXP, SEXP LrSEXP, SEXP studentIdsrSEXP, SEXP collegeIdrSEXP, SEXP nSEXP, SEXP NSEXP, SEXP binarySEXP, SEXP niterSEXP, SEXP TSEXP, SEXP censoredSEXP, SEXP thinSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Yr(YrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Xmatchr(XmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Cr(CrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Cmatchr(CmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Sr(SrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Smatchr(SmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Dr(DrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dr(drSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Mr(MrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Hr(HrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nCollegesr(nCollegesrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nStudentsr(nStudentsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type XXmatchr(XXmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCr(CCrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type SSr(SSrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCmatchr(CCmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type SSmatchr(SSmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Lr(LrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type studentIdsr(studentIdsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type collegeIdr(collegeIdrSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type censored(censoredSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(stabit2Sel1(Yr, Xmatchr, Cr, Cmatchr, Sr, Smatchr, Dr, dr, Mr, Hr, nCollegesr, nStudentsr, XXmatchr, CCr, SSr, CCmatchr, SSmatchr, Lr, studentIdsr, collegeIdr, n, N, binary, niter, T, censored, thin, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// stabit2Sel2
List stabit2Sel2(Rcpp::List Yr, Rcpp::List Xmatchr, Rcpp::List Cr, Rcpp::List Cmatchr, Rcpp::List Dr, Rcpp::List dr, Rcpp::List Mr, Rcpp::List Hr, arma::colvec nCollegesr, arma::colvec nStudentsr, Rcpp::List XXmatchr, Rcpp::List CCr, Rcpp::List CCmatchr, Rcpp::List Lr, Rcpp::List studentIdsr, Rcpp::List collegeIdr, int n, int N, bool binary, int niter, int T, int censored, int thin, bool display_progress);
RcppExport SEXP _matchingMarkets_stabit2Sel2(SEXP YrSEXP, SEXP XmatchrSEXP, SEXP CrSEXP, SEXP CmatchrSEXP, SEXP DrSEXP, SEXP drSEXP, SEXP MrSEXP, SEXP HrSEXP, SEXP nCollegesrSEXP, SEXP nStudentsrSEXP, SEXP XXmatchrSEXP, SEXP CCrSEXP, SEXP CCmatchrSEXP, SEXP LrSEXP, SEXP studentIdsrSEXP, SEXP collegeIdrSEXP, SEXP nSEXP, SEXP NSEXP, SEXP binarySEXP, SEXP niterSEXP, SEXP TSEXP, SEXP censoredSEXP, SEXP thinSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Yr(YrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Xmatchr(XmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Cr(CrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Cmatchr(CmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Dr(DrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dr(drSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Mr(MrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Hr(HrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nCollegesr(nCollegesrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type nStudentsr(nStudentsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type XXmatchr(XXmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCr(CCrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CCmatchr(CCmatchrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Lr(LrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type studentIdsr(studentIdsrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type collegeIdr(collegeIdrSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type censored(censoredSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(stabit2Sel2(Yr, Xmatchr, Cr, Cmatchr, Dr, dr, Mr, Hr, nCollegesr, nStudentsr, XXmatchr, CCr, CCmatchr, Lr, studentIdsr, collegeIdr, n, N, binary, niter, T, censored, thin, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// stabitSel2
List stabitSel2(Rcpp::List Xr, Rcpp::List Rr, Rcpp::List Wr, arma::colvec One, arma::colvec Two, int T, Rcpp::List offOutr, Rcpp::List offSelr, arma::mat sigmabarbetainverse, arma::mat sigmabaralphainverse, int niter, double n, arma::colvec l, Rcpp::List Pr, arma::colvec p, bool binary, bool selection, int censored, bool ntu, bool gPrior, bool display_progress);
RcppExport SEXP _matchingMarkets_stabitSel2(SEXP XrSEXP, SEXP RrSEXP, SEXP WrSEXP, SEXP OneSEXP, SEXP TwoSEXP, SEXP TSEXP, SEXP offOutrSEXP, SEXP offSelrSEXP, SEXP sigmabarbetainverseSEXP, SEXP sigmabaralphainverseSEXP, SEXP niterSEXP, SEXP nSEXP, SEXP lSEXP, SEXP PrSEXP, SEXP pSEXP, SEXP binarySEXP, SEXP selectionSEXP, SEXP censoredSEXP, SEXP ntuSEXP, SEXP gPriorSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Rr(RrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Wr(WrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type One(OneSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type Two(TwoSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type offOutr(offOutrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type offSelr(offSelrSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigmabarbetainverse(sigmabarbetainverseSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigmabaralphainverse(sigmabaralphainverseSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type l(lSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Pr(PrSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    Rcpp::traits::input_parameter< bool >::type selection(selectionSEXP);
    Rcpp::traits::input_parameter< int >::type censored(censoredSEXP);
    Rcpp::traits::input_parameter< bool >::type ntu(ntuSEXP);
    Rcpp::traits::input_parameter< bool >::type gPrior(gPriorSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(stabitSel2(Xr, Rr, Wr, One, Two, T, offOutr, offSelr, sigmabarbetainverse, sigmabaralphainverse, niter, n, l, Pr, p, binary, selection, censored, ntu, gPrior, display_progress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_matchingMarkets_runMatch", (DL_FUNC) &_matchingMarkets_runMatch, 3},
    {"_matchingMarkets_stabit2Mat0", (DL_FUNC) &_matchingMarkets_stabit2Mat0, 31},
    {"_matchingMarkets_stabit2Mat1", (DL_FUNC) &_matchingMarkets_stabit2Mat1, 23},
    {"_matchingMarkets_stabit2Sel0", (DL_FUNC) &_matchingMarkets_stabit2Sel0, 36},
    {"_matchingMarkets_stabit2Sel1", (DL_FUNC) &_matchingMarkets_stabit2Sel1, 28},
    {"_matchingMarkets_stabit2Sel2", (DL_FUNC) &_matchingMarkets_stabit2Sel2, 24},
    {"_matchingMarkets_stabitSel2", (DL_FUNC) &_matchingMarkets_stabitSel2, 21},
    {NULL, NULL, 0}
};

RcppExport void R_init_matchingMarkets(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
