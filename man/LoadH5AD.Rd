% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/helpers.R
\name{LoadH5AD}
\alias{LoadH5AD}
\title{Load a diet H5AD file}
\usage{
LoadH5AD(path)
}
\arguments{
\item{path}{Path to input data}
}
\value{
A \code{Seurat} object
}
\description{
Read in only the counts matrix and (if present) metadata of an H5AD file and
return a \code{Seurat} object
}
\section{AnnData H5AD File (extension \code{h5ad})}{

Only H5AD files from AnnData v0.7 or higher are supported. Data is read from
the H5AD file in the following manner
\itemize{
 \item The counts matrix is read from \dQuote{/raw/X}; if \dQuote{/raw/X} is
 not present, the matrix is read from \dQuote{/X}
 \item Feature names are read from feature-level metadata. Feature level
 metadata must be an HDF5 group, HDF5 compound datasets are \strong{not}
 supported. If counts are read from \code{/raw/X}, features names are looked
 for in \dQuote{/raw/var}; if counts are read from \dQuote{/X}, features
 names are looked for in \dQuote{/var}. In both cases, feature names are read
 from the dataset specified by the \dQuote{_index} attribute, \dQuote{_index}
 dataset, or \dQuote{index} dataset, in that order
 \item Cell names are read from cell-level metadata. Cell-level metadata must
 be an HDF5 group, HDF5 compound datasets are \strong{not} supported.
 Cell-level metadata is read from \dQuote{/obs}. Cell names are read from the
 dataset specified by the \dQuote{_index} attribute, \dQuote{_index} dataset,
 or \dQuote{index} dataset, in that order
 \item Cell-level metadata is read from the \dQuote{/obs} dataset. Columns
 will be returned in the same order as in the \dQuote{column-order}, if
 present, or in alphabetical order. If a dataset named \dQuote{__categories}
 is present, then all datasets in \dQuote{__categories} will serve as factor
 levels for datasets present in \dQuote{/obs} with the same name (eg. a
 dataset named \dQuote{/obs/__categories/leiden} will serve as the levels for
 \dQuote{/obs/leiden}). Row names will be set as cell names as described
 above. All datasets in \dQuote{/obs} will be loaded except for
 \dQuote{__categories} and the cell names dataset
}
}

\keyword{internal}
