Name:           ahello
Version:        0.01
Release:        alt1
Group:          Text tools
License:        MIT
Summary:        Gettext usage example
Source:         %name-%version.tar

%description
A small example how to use gettext

%prep
%setup

%conf
%autoreconf
%configure

%build
%make

%install
%makeinstall_std

%files
%_bindir/%name
%_datadir/locale/*/*/*.mo

%changelog
* Tue Jul 29 2025 Fr. Br. George <george@altlinux.org> 0.01-alt1
- Initial build as package
