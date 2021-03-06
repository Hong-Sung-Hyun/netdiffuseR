% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/stats.R
\name{cumulative_adopt_count}
\alias{cumulative_adopt_count}
\title{Cummulative count of adopters}
\usage{
cumulative_adopt_count(obj)
}
\arguments{
\item{obj}{A \eqn{n\times T}{n * T} matrix (Cumulative adoption matrix obtained from
\code{\link{toa_mat}}) or a \code{\link{diffnet}} object.}
}
\value{
A \eqn{3\times T}{3 * T} matrix, where its rows contain the number of adoptes, the proportion of
adopters and the rate of adoption respectively, for earch period of time.
}
\description{
For each time period, calculates the number of adopters, the proportion of adopters,
and the adoption rate.
}
\details{
The rate of adoption--returned in the 3rd row out the resulting
matrix--is calculated as

\deqn{\frac{q_t - q_{t-1}}{q_{t-1}}}{[q(t) - q(t-1)]/q(t-1)}

where \eqn{q_i}{q(i)} is the number of adopters in time \eqn{t}. Note that
it is only calculated fot \eqn{t>1}.
}
\seealso{
Other statistics: \code{\link{bass}},
  \code{\link{classify_adopters}}, \code{\link{dgr}},
  \code{\link{ego_variance}}, \code{\link{exposure}},
  \code{\link{hazard_rate}}, \code{\link{infection}},
  \code{\link{moran}}, \code{\link{struct_equiv}},
  \code{\link{threshold}},
  \code{\link{vertex_covariate_dist}}
}
\author{
George G. Vega Yon & Thomas W. Valente
}
\concept{statistics}
\keyword{univar}
