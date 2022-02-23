{
  description = "todo.txt grammar for tree-sitter";

  inputs = {
    utils.url = "github:numtide/flake-utils";
    nixpkgs.url = "github:nixos/nixpkgs/release-21.11";
  };

  outputs = { self, nixpkgs, utils }:
    utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages."${system}";
      in rec {
        devShell = pkgs.mkShell {
          nativeBuildInputs = with pkgs; [
            gcc
            tree-sitter
            nodejs
          ];
        };
      }
    );
}
