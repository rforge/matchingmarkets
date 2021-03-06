\name{baac00}
\docType{data}
\alias{baac00}

\title{Townsend Thai Project BAAC Annual Resurvey, 2000}

\description{
   The \code{baac00} data frame contains data of 292 borrowers from Thailand's largest
   agricultural lending program.
   These data are collected as part of the Townsend Thai Project Bank for 
   Agriculture and Agricultural Cooperatives (BAAC) Annual Resurvey
   (Townsend, 2000).
   The 292 borrowers are nested within 68 groups and 39 markets. This nestedness
   makes the dataset particularly relevant for matching applications.
   A more complete discussion of the data is
   found in Ahlin (2009), Section 3, and Klein (2015a).
}

\usage{data(baac00)}

\format{
   This data frame contains the following columns:
   \describe{
      \item{g.id}{group identifier.}
      \item{m.id}{market identifier.}
      \item{R}{repayment outcome: BAAC never raised interest rate as a penalty for late repayment.}
      \item{pi}{success probability: measure of group members' project success probability.}
      \item{wst}{worst year: indicator of economically worst year. 1:last year; 2:year before last year; 101-168:neither.}
      \item{loan_size}{loan size: average loan size borrowed by the group.}
      \item{loan_size2}{loan size squared.}
      \item{lngroup_agei}{log group age: log of number of years group has existed.}
   }
}

\source{
Townsend, R. (2000). Townsend Thai Project Bank for Agriculture and
Agricultural Cooperatives (BAAC) Annual Resurvey, 2000. Available at
\url{http://hdl.handle.net/1902.1/12057}, \emph{Murray Research Archive}.
}

\references{
Ahlin, C. (2009). Matching for credit: Risk and diversification in Thai microcredit groups.
Working Paper 251, \emph{Bureau for Research and Economic Analysis of Development}.

Klein, T. (2015a). \href{https://ideas.repec.org/p/cam/camdae/1521.html}{Does Anti-Diversification Pay? A One-Sided Matching Model of Microcredit}. \emph{Cambridge Working Papers in Economics}, #1521.
}

\keyword{datasets}
