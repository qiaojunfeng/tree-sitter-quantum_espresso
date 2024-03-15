package tree_sitter_quantum_espresso_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/qiaojunfeng/tree-sitter-quantum_espresso"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_quantum_espresso.Language())
	if language == nil {
		t.Errorf("Error loading QuantumEspresso grammar")
	}
}
